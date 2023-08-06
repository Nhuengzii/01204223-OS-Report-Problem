.PHONY: set1A set1D

set1-A: ./set1/A-memory_management/main.c
	@gcc -o set1A ./set1/A-memory_management/main.c

set1D: ./set1/D-timing_io/io.c ./set1/D-timing_io/noio.c
	@gcc -o set1D-io ./set1/D-timing_io/io.c
	@gcc -o set1D-noio ./set1/D-timing_io/noio.c
