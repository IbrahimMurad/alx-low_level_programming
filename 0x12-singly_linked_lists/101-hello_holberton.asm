global main
extern printf

section .text
main:
	push	rbp
	mov	rbp, rsp
	sub	rsp, 64

	xor	eax, eax
	lea	rdi, [hello]
	call 	printf

	add	rsp, 64
	leave
	ret

section .data
	hello: db 'Hello, Holberton',10, 0
