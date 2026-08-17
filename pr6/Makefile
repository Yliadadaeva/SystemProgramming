CC = gcc
CFLAGS = -Wall
TARGET = app
SOURCES = main.c filelib.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET) log.txt myfile.txt out.txt err.txt stdout.txt stderr.txt all.txt