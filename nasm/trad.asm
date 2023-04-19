global _start
section .text
extern show_registers
_start:
push 5
push 53
pop rcx
pop rax
imul rax, rcx
push rax
call show_registers
mov rax, 60
mov rdi, 0
syscall
