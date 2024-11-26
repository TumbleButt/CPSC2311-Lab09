all: driver.c shape.c ppm.c
	gcc driver.c shape.c ppm.c -o driver -Wall
	@echo "Build complete."

clean:
	rm -f driver
