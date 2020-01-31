section .text
	global _ft_write

_ft_write:
	mov rax, 0x2000004
	syscall
	mov		r10,	rcx
	syscall
	jae		.return
	mov		rax,	-1

.return:
	ret