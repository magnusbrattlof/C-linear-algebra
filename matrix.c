#include <stdio.h>
#include "matrix.h"
#include <math.h>

#define PI 3.14
#define R2D 180 / PI
#define D2R PI / 180

typedef struct _matrix {
    int i, j;
    int d[3][3];
} matrix;


int dot(int A[], int B[]) {

    int c = 0;

    for (int i = 0; i <= 2; i++) {
        c += A[i] * B[i];
    }
    return c;
}

int* cross(int A[], int B[]) {

    static int c[3];

    c[0] = A[1] * B[2] - A[2] * B[1];
    c[1] = -1 * (A[0] * B[2] - A[2] * B[0]);
    c[2] = A[0] * B[1] - A[1] * B[0];

    return c;
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
