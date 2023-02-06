all: output input printf strings

output: formatted-output.c
	gcc formatted-output.c -o output
	./output

input: formatted-input.c
	gcc formatted-input.c -o input
	./input

printf:printf-specifiers.c 
	gcc printf-specifiers.c -o printf
	./printf

strings: formatted-strings.c
	gcc formatted-strings.c -o strings
	./strings
