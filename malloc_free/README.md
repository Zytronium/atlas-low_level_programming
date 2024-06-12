# C Malloc(), Free(): mem allocation

C project for memory allocation and freeing memory using `malloc` and `free`.

Malloc allocates a certain amount of memory, the amount of bytes you request it
to, and free, as the name suggests, frees that memory, which you would do when
you no longer need to access that data anymore. You cannot access that memory
anymore after you free it, because it does not exist. 
(I think? Or maybe it's just marked as available to be overridden by
new memory? I think that's how deleting files from storage works, which
is why it's sometimes to partially or fully recover deleted files.)