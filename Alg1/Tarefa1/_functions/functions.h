#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coordinates_ COORDINATES;


int read_points_number(int inNoOfPoints);
COORDINATES* read_points_coords(int numberOfPoints);

float calc_distance_internal(COORDINATES *pointA, COORDINATES *pointB);
float calc_distance(int numberOfPoints, COORDINATES *coords);

void print_distance(float distance);

void free_points_number(COORDINATES *coordinates);

#endif //FUNCTIONS_H
