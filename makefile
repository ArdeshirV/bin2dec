# makefile: Binary to Decimal Convertor 4.0
# Copyright (c) 2015-2019 ardeshirv@protonmail.com, Licensed under GPLv3+

PROG=bin2dec
CC=gcc
MINGW64=i686-w64-mingw32
CC_MINGW64=$(MINGW64)-gcc
OBJECTS=$@
CFLAGS=--std=c11 -Wall -Ofast
CINCS=-include $(PROG).h
RES=resources
LDLIBS=-lm
LDLIBS_MINGW=-Wl,--subsystem,windows -mwindows \
	-DWINVER=0x0400 -D__WIN95__ -D__GNUWIN32__ \
	-DSTRICT -DHAVE_W32API_H -D__WXMSW__ -D__WINDOWS__ \
	-lstdc++ -lgcc -lodbc32 \
	-lwsock32 -lwinspool -lwinmm -lshell32 \
	-lcomctl32 -lctl3d32 -lodbc32 -ladvapi32 -lodbc32 -lwsock32 \
	-lopengl32 -lglu32 -luuid -lole32 -loleaut32
	## -lzlib -ljpeg -ltiff -lpng -lregex -lfreeglut -lglut

$(PROG): $(PROG).o $(PROG)-win64.o $(RES).o
	$(CC) $(CFLAGS) $(LDLIBS) -o $@ $(PROG).o
	$(CC_MINGW64) $(CFLAGS) $(LDLIBS_MINGW) -o $@-win64.exe \
		$(PROG)-win64.o $(RES).o

$(PROG).o: $(PROG).c
	$(CC) $(CFLAGS) $(CINCS) -c -o $(PROG).o $(PROG).c

$(PROG)-win64.o: $(PROG).c
	$(CC_MINGW64) $(CFLAGS) $(CINCS) -c -o $(PROG)-win64.o $(PROG).c

$(RES).o: $(RES).rc
	$(MINGW64)-windres $(RES).rc $(RES).o

clean:
	rm -vf *~ -vf *.o *.exe $(PROG)

run:
	./$(PROG)
