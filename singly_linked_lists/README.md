# Singly Linked Lists

---
Singly linked lists are neat and handy as a sort of replacement for an array.
They are also not a fixed size, and are not made of contiguous memory locations
like arrays are.

Singly linked lists contain a value, such as a string or custom struct that
contains more values; and a pointer to the next item, or node, in the list.

If you add a pointer to the previous node in the list, you now have a doubly
linked list, but it takes up slightly more memory, and insertion and deletion
operations are slightly more complex because they must update both pointers.

If you add a pointer to the head and tail nodes, well, I don't even know what
you'd call that. You should probably avoid doing that, as that would consume
even more memory and involve even more complex insertion/deletion operations,
when you can probably just keep track of the head and tail nodes elsewhere.

If you also add a pointer array to every single node in the list, well, you
actually can't. You'd need a linked list to do that. Plus, at this point, you're
redesigning the array. But I suppose it still has its advantages... maybe?
