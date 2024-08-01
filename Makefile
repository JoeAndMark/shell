MyShell.exe:main.o command.o
	gcc -o MyShell.exe main.o command.o

main.o:main.c command.h
	gcc -c main.c

command.o:command.c command.h
	gcc -c command.c

.PHONY:run clean
run:
	./MyShell.exe

clean:
	-rm -f main.o command.o  MyShell.exe
