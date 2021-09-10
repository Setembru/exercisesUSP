BINARY=main
MAIN=main.c _functions/functions.c

all:
	gcc -Wall -Wextra -Werror -g $(MAIN) -o $(BINARY)

run:
	./$(BINARY)

allrun:
	gcc -Wall - WExtra -Werror -g $(MAIN) -o $(BINARY) && ./$(BINARY)

valgrind:
	valgrind --tool=memcheck --leak-check=full --track-origins=yes --show-leak-kinds=all --show-reachable=yes ./$(BINARY)

clean:
	rm $(BINARY)

cleanmain:
	rm $(MAIN)

cleanall:
	rm *.c && rm *.h && rm $(BINARY)