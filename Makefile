TARGET=menumain

CSRCS= $(TARGET).c
CSRCS+= calulate.c

COBJS=$(CSRCS:.c=.o)

CC=gcc
CFLAGS=
LDFLAGS=

# Rule 1 - for linking
$(TARGET): $(COBJS)
	$(CC) $(LDFLAGS) -o $@ $^

#Rule 2 - for compiling
%.o:%.c
	$(CC) $(CFLAGS) -c $<

# Rule 3 - for running
run:
	./$(TARGET)

# Rule 4 - for cleanning
clean:
	rm $(TARGET) $(COBJS)

.phony: run clean

