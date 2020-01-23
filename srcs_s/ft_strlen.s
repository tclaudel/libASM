section .text
	global	_ft_strlen

_ft_strlen:
	xor		rsi, rsi

.while_loop:
	mov		cl, byte[rsi + rdi]
	cmp		cl, 0
	je		.while_end
	inc		rsi
	jmp		.while_loop

.while_end:
	mov		rax, rsi
	ret