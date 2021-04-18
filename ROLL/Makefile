#mingw32-make
run : diceroll.o manydice.o
	gcc -o run diceroll.o manydice.o

diceroll.o : diceroll.c diceroll.h
	gcc -c diceroll.c

manydice.o : manydice.c diceroll.h
	gcc -c manydice.c

#windows下 del /s /q == rm -rf
clean :
	del /s /q *.exe *.o
	
