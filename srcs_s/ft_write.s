section .text
    global _ft_write

_ft_write:
    push	rbp
	mov		rbp, rsp

    mov rax, 0x2000004
    syscall
    cmp rdx, 0
    jne .neg

    pop		rbp
	ret

.neg:
    mov rax, -1
    pop		rbp
    ret