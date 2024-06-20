# C - Function pointers

---
A function pointer is a pointer that points to a function. This allows you
to access functions from a function that normally can't access it (maybe?),
access functions that haven't been declared/defined in this function (maybe?),
or define more custom actions in a function (i.e. when calling a function that
takes a pointer function as a parameter, you can specify what function should
be called inside that function.)

This would've been useful in a certain personal project I made a couple of years
ago, although there are no pointers in the language I was using (Kotlin). I ended
up using something similar, which I think was called a Runnable. (again, in Kotlin).