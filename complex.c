#include <stdio.h>
#include <math.h>
#include "complex.h"

#define PI 3.14

// Converter for radians to degrees
#define R2D 180 / PI
// Converter for degrees to radians
#define D2R PI / 180

// Converting between polar and rectangular form
float* mycomplex(float a, float b, int format) {

    // Expecting the complex number in rectangular form and returns polar
    if (format != 0) {
        static float polar[2];
        float theta, argument;

        argument = sqrt(a*a + b*b);
        theta = atan(b / a) * R2D;
        polar[0] = argument;
        polar[1] = theta;

        return polar;
    }

    // Expecting the complex number in polar form and returns rectangular form
    else {
        float re, im;
        static float rect[2];
        b = b * D2R;
        re = (a * cos(b));
        im = (a * sin(b));
        rect[0] = re;
        rect[1] = im;

        return rect;
    }
    return 0;
}
