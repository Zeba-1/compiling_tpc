global _start
extern show_registers
section .text
_add:
push rbp
mov rbp, rsp
sub rsp, 8
mov r12, qword [rbp+16]
mov qword [rbp-8], r12
sub rsp, 8
mov r12, qword [rbp+24]
mov qword [rbp-16], r12
sub rsp, 8
mov r12, qword [rbp+32]
mov qword [rbp-24], r12
sub rsp, 8
push qword [rbp-24]
push qword [rbp-16]
pop rcx
pop rax
add rax, rcx
push rax
pop rax
mov qword [rbp-32], rax
push qword [rbp-32]
push qword [rbp-8]
pop rcx
pop rax
add rax, rcx
push rax
pop rax
mov qword [rbp-32], rax
push qword [rbp-32]
pop rax
mov rsp, rbp
pop rbp
ret
_mult_by_5:
push rbp
mov rbp, rsp
sub rsp, 8
mov r12, qword [rbp+16]
mov qword [rbp-8], r12
push qword [rbp-8]
push 5
pop rcx
pop rax
imul rax, rcx
push rax
pop rax
mov rsp, rbp
pop rbp
ret
_start:
push rbp
mov rbp, rsp
sub rsp, 8
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
push 0
push qword [rbp-16]
push qword [rbp-8]
call _add
push rax
push qword [rbp-16]
push qword [rbp-8]
call _add
push rax
pop rax
mov qword [rbp-24], rax
push qword [rbp-24]
call _mult_by_5
push rax
pop rax
mov qword [rbp-24], rax
mov r12, qword [rbp-24]
mov rsp, rbp
pop rbp
call show_registers
mov rax, 60
mov rdi, 0
syscall
