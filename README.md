# 0x19. C - Stacks, Queues - LIFO, FIFO

## monty program description

A language interpreter made in the C programming language to manage stacks and queues.
The aim is to interpret Monty bytecodes files.
is a language that aims to close the gap between scripting and programming languages.


## Compilation 

    gcc -Wall -Werror -Wextra -pedantic *.c -o monty

## Usage

    ./monty byte_file.m


## Allowable opcodes and what they do;
| opcode | functionality |
| --- | --- |
| queue, stack  | toggles the doubly link list implementation style. |
| push	| add element to the 'top' of stack and 'end' of queue. |
| pop	| remove element from 'top' of stack and 'end' of queue. |
| pall	| print every member of the structure. |
| pint	| prints the member value at the top of stack. |
| swap	| swaps the order of the 1st and 2nd elements in stack. |
| add	| add top two member values. |
| sub	| subtract the top element from the 2nd top element. |
| div	| divide the 2nd element by the top element. |
| mul	| multiply the top two elements of the stack. |
| mod	| the remainder when the 2nd element is divided by the top element. |
| comment	| there is the ability to parse comments found in bytecode ->'#'. | 
| pchar	| print character at the top of the stack. |
| pstr	| print the character at the top of the stack. | 
| rotl	| moves element at the top to the bottom of the stack. |
| rotr	| the bottom of the stack becomes the top. |
| nop	| opcode should do nothing. |


## Author
- Nadjib Mouhoun: <a href= "https://nadjib-coder.github.io/nadjib/"> Portfolio </a>

