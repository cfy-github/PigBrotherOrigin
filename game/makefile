game:	start2.o lib.o ex1.o game.o load writeboot2
	cc -mi86 -.o -s -com -o game start2.o lib.o ex1.o game.o

start2.o:	start2.s
	cc -c -Was-ncc -mi86 -o start2.o start2.s
lib.o:	lib.s
	cc -c -Was-ncc -mi86 -o lib.o lib.s
ex1.o:	ex1.s
	cc -c -Was-ncc -mi86 -o ex1.o ex1.s
game.o:	game.c
	cc -c -mi86 -o game.o game.c

load:	load.s
	cc -Was-ncc -mi86 -.o -s -com -o load load.s

writeboot2:	writeboot2.c
	cc -o writeboot2 writeboot2.c
clean:
	exec rm *.o
install:
	exec ./writeboot2
