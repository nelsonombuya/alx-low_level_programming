section .data
    hello: db 'Hello, Holberton', 10 ; 'Hello, Holberton!' plus a linefeed character
    helloLen: equ $-hello ; Length of the 'Hello world!' string

section .text
    global _start
    extern printf

_start:
    push hello ; Push the address of hello onto the stack
    call printf ; Call the printf function to print hello
    add esp, 4 ; Adjust the stack pointer to remove the argument
    mov eax, 1 ; The system call for exit (sys_exit)
    xor ebx, ebx ; Exit with return "code" of 0 (no error)
    int 80h
