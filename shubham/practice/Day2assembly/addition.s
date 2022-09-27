	.include"common.i"

	.text

	.entry main

main:	PutMsg greet
	ret		

	
greet:	.string "Hello World!\n"


.end
