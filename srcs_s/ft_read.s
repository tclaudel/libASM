section .text
    global _ft_read

_ft_read:
    push	rbp
	mov		rbp, rsp

    mov rax, 0x2000003
    syscall
    cmp rdx, 0
    jne .neg

    pop		rbp
	ret

.end:
    mov rax, 0
    pop		rbp
    ret

.neg:
    mov rax, -1
    pop		rbp
    ret