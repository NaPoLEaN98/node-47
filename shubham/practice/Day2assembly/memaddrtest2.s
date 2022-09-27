	.include "common.i"

	.text

	.entry main
main:	putMsg	wlcm
	GetInt	askm, month
	mov	rcx, month		#direct addressing
	sub	rcx, 1
	mov	rbx, offset year
	mov	rax, [rbx+8*rcx]	#indirection
	mov	days, rax
	PutInt	tell, days

	ret
wlcm:	.string "==WELCOME USER==\n"
askm:	.string "Month[1-12]: "
tell:	.string "Number of Days = "
year:	.quad	31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31

	.data

month:	.quad	0
days:	.quad	0

.end

