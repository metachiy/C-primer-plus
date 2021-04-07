run : hotel.o usehotel.o
	gcc -o run hotel.o usehotel.o

hotel.o : hotel.c hotel.h
	gcc -c hotel.c

usehotel.o : usehotel.c hotel.h
	gcc -c usehotel.c

#windos下 del /s /q == rm -rf
clean :
	del /s /q *.exe *.o