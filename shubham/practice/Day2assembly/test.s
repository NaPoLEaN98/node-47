	.include "common.i"

	.text
	
	.entry main
main:	PutMsg greet
	GetInt asku1,number1
	GetInt asku2,number2
	mov rax,number1
	mov rcx,number2
	add rax,rcx
	mov sum,rax
	PutInt tell,sum
	ret
	
	
greet:	.string "Welcome User!\n"
asku1:	.string "Enter first number!\n"
asku2:	.string "Enter second number!\n"
tell:	.string "Your sum is=!"

	.data

number1:.quad 0
number2:.quad 0
sum:	.quad 0

.end
