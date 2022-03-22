all: copy object.o move clear parse_agents
copy:
	mkdir obj
	cp inc/*.h obj
	cp src/*.c obj

object.o:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/*.c

move:
	cp *.o obj

clear:
	rm *.o
	rm obj/*.h
	rm obj/*.c

parse_agents:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o parse_agents obj/*.o

uninstall:
	rm -rf obj
	rm parse_agents
	rm -rf *.o

reinstall:
	make uninstall
	make
