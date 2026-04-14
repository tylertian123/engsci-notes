$a \xor b = \bar ab + a\bar b$

$\Delta = \Delta _{\text{sink}} - \Delta _{\text{src}}$

$t_{\text{min}} \geq t_{CQ} + t_{\text{logic,max}} + t_{su} - \Delta$

$t_h + \Delta \leq t_{CQ} + t_{\text{logic,min}}$

Using Interrupts:

1. Configure interrupt source
2. `csrrw zero, utvec, <handler_addr_reg>`
3. `csrrsi zero, ustatus, 0x1`
4. `csrrsi zero, uie, <mask>` (bit 4 for timer)
5. In handler, save *all* registers, then `uret`

* Use `<=` for assignment in `always_ff`.
* Mux: $m = \bar sx + sy$, $m = x$ when 0, $m = y$ when 1.
* Implicant: any product term covered by $f$.
* Prime Implicant: an implicant that can't have any literal removed without making it invalid.
* Essential PI: a PI that covers at least one minterm not covered by any other PI.
* RS latches oscillate when $R$ and $S$ are pulled high then low at the same time.
* Caller save: `t0`-`t7`, `a0`-`a7`, `sp`; callee save: `s0`-`s11`
* Overflow occurs when MSB of result and carry-out are different (except positive + negative)

