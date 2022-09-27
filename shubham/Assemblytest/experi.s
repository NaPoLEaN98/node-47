	.include "common.i"

    	.text

	.entry run
run:	Putmsg	greet
        Putmsg  hello
	Putmsg  name 
	ret

greet:.string "Hello World!\n"
hello:.string "Hello Sharma jii!\n" 
name :.int '122354!'
.end
