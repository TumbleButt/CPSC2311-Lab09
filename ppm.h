#ifndef PPM_H
#define PPM_H

#include <stdio.h>
#include <assert.h>

typedef struct Header {
	char type[3];
	unsigned int width;
	unsigned int height;
	unsigned int maxVal;

}header_t;

typedef struct Pixel {
	char r, g, b;
}pixel_t;

void removeComments(FILE *);
void writeHeader(FILE *, FILE *, header_t *);
void writePixel(FILE *, FILE *);
#endif
