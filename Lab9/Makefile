CFLAGS = -g -Wall
CC = gcc

# if make followed by no target then will compile 'Hello'
all: 	task1   \
	task2 \
	goggamal-solution \
	longProgram \
	talk-to 


talk-to:talk-to.o
	$(CC) $(CFLAGS) $@.o -o $@ 

task1: 	task1.o
	$(CC) $(CFLAGS) $@.o -o $@

task2: 	task2.o
	$(CC) $(CFLAGS) $@.o -o $@

goggamal-solution: 	goggamal-solution.c
	$(CC) $(CFLAGS) $@.c -o $@ 

longProgram: longProgram.o
	$(CC) $(CFLAGS) $@.o -o $@ 


# generic
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f core *.o a.out 
	rm -f /tmp/gregory_0166 
	rm -f DIRECTORY.html
	rm -rf *.dSYM
	rm -f talk-to 
	rm -f goggamal-solution 
	rm -f longProgram
	rm -f task1
	rm -f task2
	rm -f task3o 
	rm -f task3i
