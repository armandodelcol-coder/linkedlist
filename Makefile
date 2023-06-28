CC=gcc

all: compile_program run_program clean

compile_program: main_program.c
	$(CC) -o program main_program.c

run_program:
	./program

clean:
	rm program