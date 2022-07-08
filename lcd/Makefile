TARGET=display_lcd
TARGET_SOURCES=display_lcd.c

FLAGS=-O2 -Wall -MMD
LIBS=-lwiringPi -lwiringPiDev

CMP = gcc
LDFLAGS=$(LIBS)

all: $(TARGET) clean

$(TARGET): $(TARGET_SOURCES:.c = .o)
	$(CMP) $(FLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CMP) $(FLAGS) -c -o $@ $<

clean:
	@rm -rf *.o *.d *~
