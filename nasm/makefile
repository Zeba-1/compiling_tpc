trad: trad.o utils.o
	gcc -o $@ $^ -nostartfiles -no-pie

%.o: %.asm
	nasm -f elf64 -o $@ $<