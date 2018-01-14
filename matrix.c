#include <stdio.h>
#include <math.h>
#include "matrix.h"

float dot(matrix A, matrix B) {

    float C = 0;

    for (int i = 0; i <= 2; i++) {
        C += A.d[i][0] * B.d[i][0];
    }

    return C;
}

float* cross(matrix A, matrix B) {

    if (A.i && B.i == 3 ) {
        static float C[3];
        C[0] = A.d[1][0] * B.d[2][0] - A.d[2][0] * B.d[1][0];
        C[1] = A.d[0][0] * B.d[2][0] - A.d[2][0] * B.d[0][0];
        C[2] = A.d[0][0] * B.d[1][0] - A.d[1][0] * B.d[0][0];

        return C;
    }
    return 0;
}

float det(matrix A) {
    float C;

    if (A.i && A.j == 2) {
        C = (A.d[0][0] * A.d[1][1]) - (A.d[0][1] * A.d[1][0]);
        return C;
    }
    else if (A.i && A.j == 3) {

        C = \
        A.d[0][0] * (A.d[1][1] * A.d[2][2] - A.d[1][2] * A.d[2][1]) + \
        -1 * A.d[0][1] * (A.d[1][0] * A.d[2][2] - A.d[1][2] * A.d[2][0]) + \
        A.d[0][2] * (A.d[1][0] * A.d[2][1] - A.d[1][1] * A.d[2][0]);

        return C;
    }
    return 0;
}

float* cofactor(matrix A) {

    return 0;
}


#define PI 3.14
#define R2D 180 / PI
#define D2R PI / 180

float* mycomplex(float a, float b, int format) {

    if (format != 0) {
        static float polar[2];
        float theta, argument;

        argument = sqrt(a*a + b*b);
        theta = atan(b / a) * R2D;
        polar[0] = argument;
        polar[1] = theta;

        return polar;
    }

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
