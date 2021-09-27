all: copy CALC uninstall

copy:
	mkdir obj
	cp inc/*.h obj
	cp src/*.c obj

CALC: objects.o

objects.o:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o way_home obj/*.c

uninstall:
	rm obj/*.h
	rm obj/*.c
	rm -rf obj

clean:
	rm -rf src
	rm -rf inc
	rm -rf obj

reinstall:
	make uninstall
	make