#include "shape.h"
#include "ppm.h"

int main (int argc, char *argv[]) {
	FILE *output, *input;
	header_t header;
	circle_t circle;

	input = fopen(argv[1], "rb");
	output = fopen("output2.ppm", "wb");
	assert(output != NULL && input != NULL);

	writeHeader(input, output, &header);
	

	fclose(input);
	fclose(output);
	return 0;
}
