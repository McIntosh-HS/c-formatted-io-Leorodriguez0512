# c-formatted-io

In C, both the printf and scanf functions handle *formatted* output and input. Each function uses a *format specifier* to the data type of IO. Format specifiers, like `%i` and `%s` are replaced by the constant or variable in the argument list of the function.

Example:
`printf("The 1st integer is %i. The 2nd is %i\n", 22, 45);`

The example above would print out:
`The 1st integer is 22. The 2nd is 45`

C allows the programmer to make modifications of a format specifier by allowing for *width* and *precision* specifications. Look at the sample programs in the repository for examples of format specifiers and some modifiers. Use gcc to compile each program, and then run them to check the results.

## Assignment

Write a program named `formatted-strings.c` that takes user input for two strings of length. Then print back the strings in reverse order with the following formatted output:

`2nd string: (20 character width field). 1st string: (20 character width field).`

