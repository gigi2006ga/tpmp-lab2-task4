CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = main

all: $(TARGET)

$(TARGET): src/main.c src/task4.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(TARGET)
