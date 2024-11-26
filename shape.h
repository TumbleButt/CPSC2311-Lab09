#ifndef SHAPE_H
#define SHAPE_H

#include <stdio.h>
#include "ppm.h"

typedef struct Point {
	int x;
	int y;
}point_t;

typedef struct Circle {
	point_t center;
	int radius;
	pixel_t pixCircle;
}circle_t;

void writeCircInfo(FILE *, FILE *, circle_t *);
#endif
