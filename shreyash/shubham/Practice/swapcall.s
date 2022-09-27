	.include "common.i"

	.text
	
1:	call 	swap
	jmp 	1f
	
	.entry 	main
main:	
	GetInt	askl, lower
	GetInt	asku, upper
	mov	rax, lower
	cmp	rax, upper
	jg	1b			#conditional jump
1:	sub	rax, 1
	mov	rcx, rax
	add	rcx, 1	
	mul	rcx		
	shr	rax
	mov	rbx, rax
	mov	rax, upper
	mov	rcx, rax
	add	rcx, 1
	mul	rcx
	shr	rax
	sub	rax, rbx
	PutInt	tell
	PutMsg 	greet
	ret	

swap: 	mov 	r8, upper
	mov 	upper, rax
	mov 	rax, r8
	ret
		


askl:	.string	"Lower Limit: "
asku:	.string	"Upper Limit: "
tell:	.string	"Sum of Integers = "
greet:	.string	"Goodbye User.\n"

	.data

lower:	.quad	0
upper:	.quad	0


.end

