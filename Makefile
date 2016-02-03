FILES= hello test_hello

all: ${FILES}

hello: hello.c
	gcc hello.c -o hello

test_hello: test_hello.c
	gcc test_hello.c -o test_hello

clean: 
	-rm -f *.o
	-rm -f ${FILES}

test: ${FILES}
#	echo "World" | ./test_hello
	./hello | ./test_hello

