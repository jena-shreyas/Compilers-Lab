a.out: main.o libass2_20CS30049.a
	cc main.o -L. -lass2_20CS30049

main.o :
	cc -c main.c

libass2_20CS30049.a : ass2_20CS30049.o
	ar -rcs libass2_20CS30049.a ass2_20CS30049.o

ass2_20CS30049.o :
	cc -c ass2_20CS30049.c

clean:
	rm a.out main.o libass2_20CS30049.a ass2_20CS30049.o
	
