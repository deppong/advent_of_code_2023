prog: prog.c
	gcc prog.c -o prog -Wall -Wextra

test: prog
	cat in|./prog

example: prog
	cat testin| ./prog

clean:
	$(RM) prog
