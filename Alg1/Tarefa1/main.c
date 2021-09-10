// Arthur Nobre Kuwahara @ nUSP: 12563672

#include "_functions/functions.h"

int main(){
    int pointsNumber;
    scanf("%d", &pointsNumber);

    pointsNumber = read_points_number(pointsNumber);

    COORDINATES *coordinates = read_points_coords(pointsNumber);

    float total_distance = calc_distance(pointsNumber, coordinates);

    print_distance(total_distance);

    free_points_number(coordinates);

    return 0;
}