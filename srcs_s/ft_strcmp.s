section .text
    global _ft_strcmp

_ft_strcmp:
    xor     rdx, rdx

.while_loop:
    movzx eax, byte [rdi + rdx]
    movzx r8d, byte [rsi + rdx]
    sub eax, r8d
    jnz .end
    cmp r8d, 0
    je .end
    inc rdx
    jmp .while_loop

.end:
    ret