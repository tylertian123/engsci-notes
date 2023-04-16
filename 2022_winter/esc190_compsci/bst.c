#include <stdlib.h>
#include <stdio.h>


typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

void insert(Node **tree, int val) {
    Node *n = (Node *) malloc(sizeof(Node));
    n->left = n->right = NULL;
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
                return;
            }
            curr = curr->left;
        }
        else {
            if (!curr->right) {
                curr->right = n;
                return;
            }
            curr = curr->right;
        }
    }
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

int remove_val(Node **tree, int val) {
    if (!*tree) {
        return 0;
    }
    Node *node = *tree;
    Node *remove = *tree, *remove_parent = NULL;
    while (node) {
        if (node->data == val) {
            remove_parent = remove;
            remove = node;
            break;
        }
        node = val < node->data ? node->left : node->right;
    }
    if (!remove || remove->data != val) {
        return 0;
    }
    printf("%d, %d\n", remove->data, (*tree)->data);

    // Check cases
    if (!remove->left && !remove->right) {
        // Removing lone root
        if (!remove_parent) {
            free(remove);
            *tree = NULL;
            return 1;
        }
        if (remove_parent->left == remove) {
            remove_parent->left = NULL;
        }
        else {
            remove_parent->right = NULL;
        }
        free(remove);
        return 1;
    }
    // Only one child
    if (!remove->left) {
        if (!remove_parent) {
            *tree = remove->right;
            free(remove);
            return 1;
        }
        if (remove_parent->left == remove) {
            remove_parent->left = remove->right;
        }
        else {
            remove_parent->right = remove->right;
        }
        free(remove);
        return 1;
    }
    if (!remove->right) {
        if (!remove_parent) {
            *tree = remove->left;
            free(remove);
            return 1;
        }
        if (remove_parent->left == remove) {
            remove_parent->left = remove->left;
        }
        else {
            remove_parent->right = remove->left;
        }
        free(remove);
        return 1;
    }
    // Find inorder successor
    Node *successor = remove->right, *successor_parent = remove;
    while (successor->left != NULL) {
        successor_parent = successor;
        successor = successor->left;
    }
    if (successor == successor_parent->left) {
        successor_parent->left = successor->right;
    }
    else {
        successor_parent->right = successor->right;
    }
    remove->data = successor->data;
    free(successor);
    return 1;
}

void free_tree(Node **tree) {
    if (!*tree) {
        return;
    }
    free_tree(&(*tree)->left);
    free_tree(&(*tree)->right);
    free(*tree);
    *tree = NULL;
}


int main() {
    Node *tree = NULL;
    insert(&tree, 6);
    insert(&tree, 1);
    insert(&tree, 2);
    insert(&tree, 8);

    printf("%d %d %d %d\n", search(&tree, 1), search(&tree, 2), search(&tree, 8), search(&tree, 6));

    remove_val(&tree, 6);

    printf("%d %d %d %d\n", search(&tree, 1), search(&tree, 2), search(&tree, 8), search(&tree, 6));

    free_tree(&tree);
}
