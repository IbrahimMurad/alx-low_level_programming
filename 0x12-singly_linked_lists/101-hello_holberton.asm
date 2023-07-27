global main
extern printf

section .text
main:
	push	rbp
	mov	rbp, rsp
	sub	rsp, 16

	xor	eax, eax
	lea	rdi, [str]
	call 	printf

	add	rsp, 16
	leave
	ret

section .data
	str: db "Hello, Holberton",13,10
