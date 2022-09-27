	.include "common.i"

	.text

	.entry main

main: 	PutMsg greet
	GetInt ask, num1
	GetInt ask2, num2      
	mov  rax, num1
	mov  rbx,num2
	add  rax,rbx
	PutInt tell
	ret		




greet: 	.string "Hello User\n"
ask: 	.string "give me a number\n"
ask2: 	.string "give me another number\n"
tell: 	.string "Sum ="




	.data

num1: .quad 0
num2: .quad 0

.end
