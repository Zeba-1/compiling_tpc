global _start
extern show_registers
section .text
_start:
push rbp
mov rbp, rsp
sub rsp, 8
sub rsp, 8
push 0
pop rax
mov qword [rbp-8], rax
push 5
pop rax
mov qword [rbp-16], rax
w_cond_1:
push qword [rbp-8]
push 10
pop rcx
pop rax
cmp rax, rcx
jge w_end_1
push qword [rbp-8]
push 1
pop rcx
pop rax
add rax, rcx
push rax
pop rax
mov qword [rbp-8], rax
push qword [rbp-8]
push 10
pop rcx
pop rax
add rax, rcx
push rax
pop rax
mov qword [rbp-16], rax
jmp w_cond_1
w_end_1:
mov r12, qword [rbp-8]
mov r13, qword [rbp-16]
mov rsp, rbp
pop rbp
call show_registers
mov rax, 60
mov rdi, 0
syscall
