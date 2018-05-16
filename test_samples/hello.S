global start	;This is where the instruction starts
section .text

start:		;Linker entry point

	mov rdx, len
	mov rcx, msg
	mov rbx, 1
	mov rax, 4
	int 0x80

	mov rbx, 0
	mov rax, 1
	int 0x80

section .data
	msg 

