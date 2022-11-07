CC = /usr/bin/g++
CFLAGS = -fdiagnostics-color=always -g -std=c++20

TARGET = "main"

all:
	$(CC) $(CFLAGS) "src/$(TARGET).cpp" -o "build/$(TARGET)"
