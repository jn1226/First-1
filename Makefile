procbar:ProcBar.c Main.c
	gcc ProcBar.c Main.c -o procbar

.PHONY:clean
clean:
	rm -f procbar



