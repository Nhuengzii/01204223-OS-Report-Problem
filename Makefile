.PHONY: set1B set1D

set1B: ./set1/B-memory_management/main.c
	@gcc -o set1B ./set1/B-memory_management/main.c

set1D: ./set1/D-timing_io/io.c ./set1/D-timing_io/noio.c
	@gcc -o set1D-io ./set1/D-timing_io/io.c
	@gcc -o set1D-noio ./set1/D-timing_io/noio.c
