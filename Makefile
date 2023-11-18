run:
	gcc ld_hostname.c -o ld_hostname.o; ./ld_hostname.o; gcc -shared -fPIC ./o_gethostname.c -o o_hostname.o; LD_PRELOAD=$PWD/o_hostname.o ./ld_hostname.o
