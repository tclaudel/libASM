section .text
	global _ft_strdup
	extern _ft_strlen, _ft_strcpy, _malloc

_ft_strdup:
	push rdi
	call _ft_strlen
	mov rdi, rax
	inc rdi

	call _malloc
	cmp rax, 0
	pop rdi
	je .exit
	mov rdx, rax
	mov rsi, rdi
	mov rdi, rdx

	call _ft_strcpy

.exit:
	ret