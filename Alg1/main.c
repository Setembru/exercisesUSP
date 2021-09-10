// Arthur Nobre Kuwahara @ nUSP: 12563672

#include "_functions/functions.h"

int main(){
    int number, *pointsNumber;
    scanf("%d", &number);
    pointsNumber = read_points_number(number);

    COORDINATES *coordinates = read_points_coords(pointsNumber);

    PATH *distance = calc_distance(pointsNumber, coordinates);

    print_distance(distance->distance);

    free_points_number(pointsNumber, coordinates);

    return 0;
}