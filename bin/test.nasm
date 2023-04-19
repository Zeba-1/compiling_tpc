global _start
section .text
start:
mov rax, 60
mov rdi, 0
syscall
