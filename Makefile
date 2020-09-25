all:
	gcc -O -DLINUX loop.c -o loop
install:
	sudo cp loop /usr/local/bin/
clean:
	rm -f loop.o loop
stop:
	killall loop;

