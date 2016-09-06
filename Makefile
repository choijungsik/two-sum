TARGET = test
OBJECTS = main.o
CC = gcc
CFLAGS = -Wall -g

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $<
.c.o :
	$(CC) $(CFLAGS) -c $<

clean :
	rm -rf $(TARGET) $(OBJECTS)
