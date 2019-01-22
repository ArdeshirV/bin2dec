# makefile: Binary to Decimal Conversion 4.0
# Copyright (c) 2015 e-job@protonmail.com, Licensed under GPLv3+
bin2dec: bin2dec.c
	gcc -Ofast bin2dec.c -o bin2dec
	i686-w64-mingw32-gcc -Ofast bin2dec.c -o bin2dec.exe \
	-Wl,--subsystem,windows -mwindows \
	-DWINVER=0x0400 -D__WIN95__ -D__GNUWIN32__ \
	-DSTRICT -DHAVE_W32API_H -D__WXMSW__ -D__WINDOWS__ \
	-lstdc++ -lgcc -lodbc32 \
	-lwsock32 -lwinspool -lwinmm -lshell32 \
	-lcomctl32 -lctl3d32 -lodbc32 -ladvapi32 -lodbc32 -lwsock32 \
	-lopengl32 -lglu32 -luuid -lole32 -loleaut32
	rm -f *~ ~* *.~*

run: bin2dec 
	./bin2dec

## -lzlib -ljpeg -ltiff -lpng -lregex -lfreeglut -lglut
