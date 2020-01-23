section .text
    global _ft_strdup
    extern _ft_strlen, _ft_strcpy, _malloc

_ft_strdup:
    call _ft_strlen
    push rdi
    mov rdi, rax
    inc rdi

    call _malloc
    cmp rax, 0
    je .exit
    pop rdi
    mov rdx, rax
    mov rsi, rdi
    mov rdi, rdx

    call _ft_strcpy

.exit:
    ret