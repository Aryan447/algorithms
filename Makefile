CC = clang
CFLAGS = -Wall -Wextra -std=c17 -g -fsanitize=address,undefined
O = -O2

CPPC = clang++
CPPFLAGS = -Wall -Wextra -std=c++17 -fsanitize=address,undefined

main: main.c
	$(CC) $(CFLAGS) main.c -o main && ./main

maincpp: main.cpp
	$(CPPC) $(CPPFLAGS) main.cpp -o main && ./main

clean:
	rm -f main

.PHONY: main maincpp clean
