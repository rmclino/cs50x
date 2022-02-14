all: hello.exe

hello.exe: hello_word.o
	 gcc -o hello.exe hello_word.o

hello.o: hello.c
	 gcc -c hello_word.c
     
clean:
	 rm hello_word.o hello.exe