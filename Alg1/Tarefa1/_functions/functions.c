#include "functions.h"

struct coordinates_ {
    float x;
    float y;
};

int read_points_number(int noOfPoints) {

    if (noOfPoints <= 1)
        exit(1);

    return noOfPoints;
}

COORDINATES* read_points_coords(int numberOfPoints) {
    COORDINATES *coords = (COORDINATES*)calloc(numberOfPoints, sizeof(COORDINATES));
    for (int i = 0; i < numberOfPoints; i++)
        if (scanf("%f %f", &coords[i].x, &coords[i].y) != 2)
            exit(1);

    return coords;
}

float calc_distance_internal(COORDINATES *pointA, COORDINATES *pointB) {

    float abscissa = (pointA->x - pointB->x);
    float ordinate = (pointA->y - pointB->y);

    float distance = sqrtf(abscissa*abscissa + ordinate*ordinate);

    return distance;
}

float calc_distance(int numberOfPoints, COORDINATES *coords) {
    float total_distance = 0;

    for (int i = 0; i < numberOfPoints; i++) {
        total_distance = calc_distance_internal(&coords[i], &coords[i + 1])
                + total_distance;
    }
    return total_distance;
}

void print_distance(float distance) {
    printf("\n%.2f", distance);
}

void free_points_number(COORDINATES *coordinates) {
    if (coordinates != NULL)
        free(coordinates);
}