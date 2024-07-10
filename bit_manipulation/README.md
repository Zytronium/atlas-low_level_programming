# Bit Manipulation
That's a bit manipulative...

---
Bit manipulation is the manipulation of the bits
of a number in order to change it's value.

For example, think of each bit, 1 or 0, as true or false. Now, what's 0 | 1?
(0 OR 1) think of it as an if statement. If (0 || 1) or If (0 == 1 || 1 == 1).
We all know that or means at least one is true. so 0 | 1 = 1. Now let's do
larger numbers. 5 or 18. in base2 (binary) is `0 0101` and 18 in base2
is`1 0010` (removing the leading zero's).

`00101`
  OR
`10010`

`0` OR `1` = `1`
`0` OR `0` = `0`
`1` OR `0` = `1`
`0` OR `1` = `1`
`1` OR `0` = `1`

`10111` from base2 to decimal is 23. So `5 | 18` is `23`.

Of course there's more to bit manipulation than that. There's also things like AND (&) or leftshift (<<).
