section .text
	global  _ft_strcpy

_ft_strcpy:
	xor     rdx,    rdx

	.while_loop:
		mov		cl, byte[rsi + rdx]
		mov		byte[rdi + rdx], cl
		cmp		cl, 0
		je		.while_end
		inc		rdx
		jmp		.while_loop

	.while_end:
		mov		rax, rsi
		ret