CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp Activity.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Paerchenfinder

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
