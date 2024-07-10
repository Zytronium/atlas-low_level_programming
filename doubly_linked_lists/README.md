# Doubly Linked Lists
###### Why did the linked list go to therapy?
Because it had too many issues with pointers!

---
Doubly Linked lists are very similar to [Singly Linked Lists](https://github.com/Zytronium/atlas-low_level_programming/blob/main/singly_linked_lists/README.md),
except that they can be navigated both forwards and backwards in the list.
They also start and end with a NULL, rather than just ending. This way,
you know where the head is when navigating backwards.

Doubly linked lists also take up slightly more memory, as they contain a
second pointer, and are slightly more complex to perform operations on,
as you need to work with the next AND prev pointers.