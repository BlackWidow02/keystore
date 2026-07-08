CC = gcc
# -Iinc tells the compiler to look inside the inc/ directory for headers
CFLAGS = -Wall -g -Iinc

all: ./bin/test

# Updated paths to look inside src/
./bin/test: src/main.c src/keystore.c
	mkdir -p ./bin
	$(CC) $(CFLAGS) -o ./bin/test src/main.c src/keystore.c

run: ./bin/test
	./bin/test

clean:
	rm -rf ./bin