section .data
    hello db "Hello, Holberton",10  ; The string to print (including the newline character)
    hello_len equ $ - hello         ; Calculate the length of the string

section .text
    global _start

_start:
    ; Call the printf function
    mov rdi, hello                 ; Format string (pointer to hello)
    mov rax, 0                    ; RAX is set to 0 for the printf function
    call printf

    ; Exit the program
    mov rax, 60                   ; syscall number for exit
    xor rdi, rdi                  ; status code (0)
    syscall

section .bss
    hello resb 100                 ; Reserve space for the printf function

