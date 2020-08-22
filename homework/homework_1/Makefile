CC=gcc
CFLAGS=-Wall
RM=rm -f

all: floatToDec ageToSec floatToCir

programs: floatToDec.c ageToSec.c floatToCir.c
	$(CC) $(CFLAGS) ageToSec.c -o ageToSec
	$(CC) $(CFLAGS) floatToDec.c -o floatToDec
	$(CC) $(CFLAGS) floatToCir.c -o floatToCir

clean:
	$(RM) floatToDec *~  ageToSec *~ floatToCir *~
