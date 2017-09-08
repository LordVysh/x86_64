.model flat,c
.code

CalcSum_ proc

; Initialize stack frame pointer
	push ebp
	mov ebp,esp

; Load argument variables
	mov eax,[ebp+8]
	mov ecx,[ebp+12]
	mov edx,[ebp+16]

; Calculate sum
	add eax,ecx
	add eax,edx

; Restore caller's stack frame pointer
	pop ebp
	ret

CalcSum_ endp
	end