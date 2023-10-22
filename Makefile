CC = g++
CFLAGS = -Wall

all: renderer

renderer: main.cpp
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f renderer
