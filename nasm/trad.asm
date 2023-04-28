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
if_001:
push qword [rbp-8]
push 10
pop rcx
pop rax
cmp rax, rcx
jl if_inst_001
jmp if_end_001
if_inst_001:
push qword [rbp-8]
push 10
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
if_end_001:
mov rsp, rbp
pop rbp
call show_registers
mov rax, 60
mov rdi, 0
syscall
