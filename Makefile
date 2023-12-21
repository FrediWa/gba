GCC_FLAGS=-Wall -Wextra -Wpedantic -Werror

default:
	gcc main.c -o main $(GCC_FLAGS)
	./main test/test.gba