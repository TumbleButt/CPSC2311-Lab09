#include "ppm.h"
#include "shape.h"

void removeComments(FILE *ppm) {
    char ch;
    
    do {
        ch = getc(ppm);
        if (ch == '#') {
            while (ch != '\n' && ch != EOF)
            {
                ch = getc(ppm);
            }
        }
    } while (ch == ' ' || ch == '#');
    ungetc(ch, ppm);
}

void writeHeader(FILE *in, FILE *out, header_t *header) {
	fscanf(in, "%2s %u %u %u", header->type, &header->width, &header->height,
			&header->maxVal);
	removeComments(in);
	fprintf(out, "%2s %u %u %u\n", header->type, header->width, header->height,
			header->maxVal);
}


void writePixel(FILE *in, FILE *out) {

}
