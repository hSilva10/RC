CC = gcc
CFLAGS = -Wall -pedantic

# Source files in the current directory
SRCS := $(wildcard *.c) ../utils/utils.c

# Object files corresponding to source files
OBJS := $(SRCS:.c=.o)

TARGET = as

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) $(OBJS)
