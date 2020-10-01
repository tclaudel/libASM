section .text
	global	ft_strlen

ft_strlen:
	xor		rsi, rsi			; i = 0

.while_loop:
	mov		cl, byte[rsi + rdi]	; char c = rdi[i]
	cmp		cl, 0				; if c == 0
	je		.end				; true go end
	inc		rsi					; else i++
	jmp		.while_loop

.end:
	mov		rax, rsi
	ret