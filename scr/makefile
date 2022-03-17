execute: message.out
		./message.out

message.out: main.obj type.obj
		gcc -no-pie main.obj type.obj -o message.out

type.obj: type.s
		nasm -f elf64 type.s -o type.obj

main.obj: main.c
		gcc -c -no-pie main.c -o main.obj
