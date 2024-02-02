#include <stdio.h>

// Define macro to compute the volume of a sphere
#define SPHERE_VOLUME(radius) ((4.0 / 3.0) * 3.14159265358979323846 * (radius) * (radius) * (radius))

int main() {
    // Calculate the volume for spheres with different radii
    double radius1 = 5.0;
    double volume1 = SPHERE_VOLUME(radius1);
    printf("Volume of sphere with radius %.2f meters: %.2f cubic meters\n", radius1, volume1);

    double radius2 = 10.0;
    double volume2 = SPHERE_VOLUME(radius2);
    printf("Volume of sphere with radius %.2f meters: %.2f cubic meters\n", radius2, volume2);

    double radius3 = 15.0;
    double volume3 = SPHERE_VOLUME(radius3);
    printf("Volume of sphere with radius %.2f meters: %.2f cubic meters\n", radius3, volume3);

    return 0;
}

