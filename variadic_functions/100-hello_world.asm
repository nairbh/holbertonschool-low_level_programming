section .data
	msg db "Hello, World", 0Ah
	section .text
	global main

main:
	mov edx, 13 ; length of the message
	mov ecx, msg ; pointer to the message
	mov ebx, 1 ; file descriptor for stdout
	mov eax, 4 ; system call number for sys_write

int 0x80 ; make the system call

; exit the program
	mov eax, 1 ; system call number for sys_exit
	xor ebx, ebx ; return value 0
	int 0x80 ; make the system call
