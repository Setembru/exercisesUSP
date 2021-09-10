#include "functions.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordinates_ {
    float x;
    float y;
};

struct path_ {
    float distance;
};

int* read_points_number(int inNoOfPoints) {

    if (inNoOfPoints <= 1)
        return NULL;

    int *outNoOfPoints = (int*)malloc(sizeof(int));
    outNoOfPoints = &inNoOfPoints;
    return outNoOfPoints;
}

COORDINATES* read_points_coords(int *numberOfPoints) {
    COORDINATES *coords = (COORDINATES*)calloc(*numberOfPoints, sizeof(COORDINATES));
    for (int i = 0; i < *numberOfPoints; i++)
        if (scanf("%f %f", &coords[i].x, &coords[i].y) != 2)
            return NULL;

    return coords;
}

float calc_distance_internal(COORDINATES *pointA, COORDINATES *pointB) {

    float abscissa = (pointA->x - pointB->x);
    float ordinate = (pointA->y - pointB->y);

    float distance = sqrtf(abscissa*abscissa + ordinate*ordinate);

    return distance;
}

PATH* calc_distance(int numberOfPoints, COORDINATES *coords) {
    PATH total_distance.distance = 0;

    for (int i = 0; i < numberOfPoints; i++) {
        total_distance->distance += calc_distance_internal(coords[i].x, coords[i].y);
    }
    return total_distance;
}


void print_distance(PATH distance) {
    printf("%.2f", distance.distance);
}

void free_points_number(int *noOfPoints, COORDINATES *coordinates) {
    if (noOfPoints != NULL)
        free(noOfPoints);
    if (coordinates != NULL)
        free(coordinates);
}