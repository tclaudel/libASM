section .text
    global ft_strcmp

ft_strcmp:
    xor     rdx, rdx            ; i = 0

.while_loop:
    movzx eax, byte [rdi + rdx] ; (int)eax = (int)rdi[i]
    movzx r8d, byte [rsi + rdx] ; (int)r8d = (int)rsi[i]
    sub eax, r8d                ; eax -= r8d
    jnz .end                    ; jump not zero
    cmp r8d, 0                  ; if r8d == 0 ?
    je .end                     ;   end
    inc rdx                     ; i++
    jmp .while_loop

.end:
    ret