section.data:
    msg: db 'Hello, World', 0xA
    len equ $ - msg

section.text:
    global main

    main:
    MOV RAX, 1
    MOV RDI, 1
    MOV RSI, msg
    MOV RDX, len
    SYSCALL
    MOV RAX, 60
    XOR RDI, RDI
    SYSCALL