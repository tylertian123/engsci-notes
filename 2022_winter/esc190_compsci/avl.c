#include <stdlib.h>
#include <stdio.h>


typedef struct Node {
    int data;
    int height;
    struct Node *left, *right;
    struct Node *parent;
} Node;

void update_height(Node **node) {
    Node *n = *node;
    int lh = n->left ? n->left->height : -1;
    int rh = n->right ? n->right->height : -1;
    n->height = lh > rh ? lh + 1 : rh + 1;
}

void rotate_left(Node **node) {
    Node *a = *node, *b = a->right;
    
    *node = b;
    b->parent = a->parent;

    Node *temp = b->left;

    b->left = a;
    a->parent = b;

    a->right = temp;
    if (temp)
        temp->parent = a;

    update_height(&a);
    update_height(&b);
}

void rotate_right(Node **node) {
    Node *a = *node, *b = a->left;
    *node = b;
    b->parent = a->parent;

    Node *temp = b->right;

    b->right = a;
    a->parent = b;

    a->left = temp;
    if (temp)
        temp->parent = a;

    update_height(&a);
    update_height(&b);
}

int search(Node **tree, int val) {
    if (!*tree) {
        return 0;
    }
    Node *node = *tree;
    while (node) {
        if (node->data == val) {
            return 1;
        }
        node = val < node->data ? node->left : node->right;
    }
    return 0;
}

Node* rebalance(Node **tree) {
    if (!tree || !*tree) {
        return NULL;
    }
    Node *node = *tree;

    int lh = node->left ? node->left->height : -1;
    int rh = node->right ? node->right->height : -1;
    int bf = rh - lh;
    node->height = lh > rh ? lh + 1 : rh + 1;

    // Right violation
    if (bf > 1) {
        int rbf = (node->right->right ? node->right->right->height : -1) - (node->right->left ? node->right->left->height : -1);
        // Right-left violation
        if (rbf < 0) {
            rotate_right(&node->right);
        }
        // Right-right violation
        if (node->parent) {
            Node **n = node == node->parent->left ? &node->parent->left : &node->parent->right;
            rotate_left(n);
            node = *n;
        }
        else {
            rotate_left(&node);
        }
    }
    // Left violation
    else if (bf < 1) {
        int lbf = (node->left->right ? node->left->right->height : -1) - (node->left->left ? node->left->left->height : -1);
        // Left-right violation
        if (lbf > 0) {
            rotate_left(&node->left);
        }
        // Left-left violation
        if (node->parent) {
            Node **n = node == node->parent->left ? &node->parent->left : &node->parent->right;
            rotate_right(n);
            node = *n;
        }
        else {
            rotate_right(&node);
        }
    }
    
    if (node->parent) {
        return rebalance(&node->parent);
    }
    return node;
}

void insert_node(Node **tree, int val) {
    Node *n = (Node *) malloc(sizeof(Node));
    n->left = n->right = n->parent = NULL;
    n->height = 0;
    n->data = val;

    if (!*tree) {
        *tree = n;
        return;
    }

    Node *curr = *tree;
    while (1) {
        if (val < curr->data) {
            if (!curr->left) {
                curr->left = n;
                n->parent = curr;
                break;
            }
            curr = curr->left;
        }
        else {
            if (!curr->right) {
                curr->right = n;
                n->parent = curr;
                break;
            }
            curr = curr->right;
        }
    }

    *tree = rebalance(&curr);
}


void main() {
    Node *tree = NULL;
    insert_node(&tree, 1);
    insert_node(&tree, 2);
    insert_node(&tree, 3);
    insert_node(&tree, 4);
    insert_node(&tree, 5);
    insert_node(&tree, 6);
    insert_node(&tree, 7);
    insert_node(&tree, 8);
    printf("%d\n", search(&tree, 2));
}
