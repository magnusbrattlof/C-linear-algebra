#include <stdio.h>
#include <math.h>
#include "matrix.h"

float det(matrix A) {
    float C;

    if (A.i && A.j == 2) {
        C = (A.d[0][0] * A.d[1][1]) - (A.d[0][1] * A.d[1][0]);

        if (C != 0) {
            return C;
        }

        return 0;

    }
    else if (A.i && A.j == 3) {

        C = \
        A.d[0][0] * (A.d[1][1] * A.d[2][2] - A.d[1][2] * A.d[2][1]) + \
        -1 * A.d[0][1] * (A.d[1][0] * A.d[2][2] - A.d[1][2] * A.d[2][0]) + \
        A.d[0][2] * (A.d[1][0] * A.d[2][1] - A.d[1][1] * A.d[2][0]);

        if (C != 0) {
            return C;
        }

        return 0;
    }

    else {
        printf("Your matrix is in %dx%d format\n", A.i, A.j);
        printf("You'll have to change it to a 2x2 or 3x3 matrix\n");
        return 0;
    }

    return 0;
}

float* cofactor(matrix A) {

    return 0;
}
