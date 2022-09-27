	.include "common.i"

	.text

	.entry main
main:	
	GetInt	askl, lower
	GetInt	asku, upper
	mov	rax, lower
	cmp	rax, upper
	jg	swap		#conditional jump
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
	cmp 	rax,upper
	jl 	1b
		


askl:	.string	"Lower Limit: "
asku:	.string	"Upper Limit: "
tell:	.string	"Sum of Integers = "
greet:	.string	"Goodbye User.\n"

	.data

lower:	.quad	0
upper:	.quad	0


.end

