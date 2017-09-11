	.model flat,c
	.code

SignedIsEQ_ proc
	push ebp
	mov ebp,esp

	xor eax,eax
	mov ecx,[ebp+8]
	cmp ecx,[ebp+12]
	sete al

	pop ebp
	ret
SignedIsEQ_ endp
	end