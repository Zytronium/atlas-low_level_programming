# C - Variadic functions

---
Variadic functions are functions that take an arbitrary number of arguments,
like printf can. For example, if you want to make an XOR function that compares
an unknown number of conditions, and returns `true` if exactly 1 condition is
true, and you don't want whoever is using your function to have to supply an
array of conditions, you can simplify it for them by making a variadic function.
Now, the function can be called like `if (XOR(3, condition1, condition2, condition3))`
(where the `3` is the number of conditions) instead of something like 
`if (XOR(int conditions[3] = { condition1, condition2, condition3 }))`.