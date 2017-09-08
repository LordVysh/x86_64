.model flat,c
.code

IntMulDiv_ proc

; Function prolog
	push ebp
	mov ebp,esp
	push ebx

; Make sure divisor is not zero
	xor eax,eax
	mov ecx,[ebp+8]
	mov edx,[ebp+12]
	or edx,edx
	jz InvalidDivisor

; Calculate product and save result
	imul edx,ecx
	mov ebx,[ebp+16]
	mov [ebx],edx

; Calculate quotient and remainder, save results
	mov eax, ecx
	cdq
	idiv dword ptr [ebp+12]

	mov ebx,[ebp+20]
	mov [ebx],eax
	mov ebx,[ebp+24]
	mov [ebx],edx
	mov eax,1

; Function epilog
InvalidDivisor:
	pop ebx
	pop ebp
	ret
IntMulDiv_ endp
	end