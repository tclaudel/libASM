section .text
	global  ft_strcpy

ft_strcpy:
	xor     rdx,    rdx			; i = 0

.while_loop:
	mov		cl, byte[rsi + rdx] ; char c = rsi[i]
	mov		byte[rdi + rdx], cl	; rdi[i] = c
	cmp		cl, 0				; if c == 0
	je		.end				; if true return
	inc		rdx					; else i++;
	jmp		.while_loop

.end:
	mov		rax, rdi
	ret