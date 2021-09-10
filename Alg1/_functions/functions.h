#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct coordinates_ COORDINATES;
typedef struct path_ PATH;

int* read_points_number(int inNoOfPoints);
COORDINATES* read_points_coords(int *numberOfPoints);
float calc_distance_internal(COORDINATES *pointA, COORDINATES *pointB);
PATH calc_distance(int *numberOfPoints, COORDINATES *coords);
void print_distance(PATH distance);
void free_points_number(int *noOfPoints, COORDINATES *coordinates);

#endif //FUNCTIONS_H
