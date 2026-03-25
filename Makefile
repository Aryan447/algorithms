CC = clang
CFLAGS = -Wall -Wextra -std=c17 -g -fsanitize=address,undefined

main: main.c
	$(CC) $(CFLAGS) main.c -o main && ./main
