section .text
	global ft_strdup
	extern ft_strlen
	extern ft_strcpy
	extern malloc
	extern exit

ft_strdup:
	push rdi
	call ft_strlen      ; ft_strlen
	mov rdi, rax        ; move ft_strlen result in rdi
	inc rdi             ; i++
	call malloc         ; malloc sizof i
	pop rdi
	cmp rax, 0          ; if malloc == 0
	je .exit            ; exit
	mov rsi, rdi        ; 
	mov rdi, rax        ;
	jmp ft_strcpy		; ft_strcpy(char *dest, const char *src)


.exit:
	ret