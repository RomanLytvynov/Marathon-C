all: copy CALC uninstall

copy:
	mkdir obj
	cp inc/*.h obj
	cp src/*.c obj

CALC: objects.o

objects.o:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/*.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o read_file obj/*.c

uninstall:
	rm *.o
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