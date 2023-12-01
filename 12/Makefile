DAY := $(shell basename "$$PWD")

prog: prog.c
	gcc prog.c -o prog -Wall -Wextra

test: prog
	cat in|./prog

example: prog
	cat testin| ./prog

# RUN ONLY ONCE!! I'm WARNING YOU
# make download s ="session=YOURCOOKIE"
download:
	curl https://adventofcode.com/2023/day/$(DAY)/input --cookie $(s) > in

clean:
	$(RM) prog
