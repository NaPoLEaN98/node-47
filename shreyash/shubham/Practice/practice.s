	.include "common.i"

	.data	#writable memory section

upper:	.quad	0

	.text	#read-only memory section

	.entry main
main:	
	GetInt	asku, upper
	mov	rax, upper	#rax=N
	mov	rcx, rax	#rcx=N
	add	rcx, 1		#rcx=N+1
	mul	rcx		#rax=N*(N+1)

	PutMsg	greet
	ret

asku:	.string	"Upper Limit: "
tell:	.string	"Sum of Integers = "
greet:	.string	"Goodbye User.\n"




.end
