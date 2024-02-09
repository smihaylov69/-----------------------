all:help.exe strlenght.exe strconcat.exe strcompare.exe

help.exe:
	gcc help.c -o help.exe

strings.o:
	gcc -c strings.c -o strings.o

strlenght.exe:
	gcc strlenght.c strings.o -o strlenght.exe
	
strconcat.exe:
	gcc strconcat.c strings.o -o strconcat.exe

strcompare.exe:
	gcc strcompare.c strings.o -o strcompare.exe
clean:
	del *.exe *.о