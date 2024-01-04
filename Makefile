GCC_FLAGS=-Wall -Wextra -Wpedantic -Werror

default:
	gcc src/main.c -o main $(GCC_FLAGS)
	./main test/test.gba
