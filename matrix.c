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

        float TMP[4];

        int p = 0;
        int a = 0;
        int x = 0;
        int n = -1;

        for (int q = 0; q <= 2; q++) {
            for (int row = 0; row <= 2; row++) {
                for (int col = 0; col <= 2; col++) {

                    // Check if row and column deviate from outer col and row
                    if (row != p && col != q) {
                        TMP[a++]= A.d[row][col];
                        x++;

                        if (x % 4 == 0) {
                            n = -1;

                            if (q % 2 == 0) {
                                n = 1;
                            }

                            C += (n * A.d[p][q]) * ((TMP[0] * TMP[3]) - (TMP[1] * TMP[2]));

                            // Clean up and reset
                            x = 0;
                            a = 0;
                            for (int i = 0; i <= 3; i++) {
                                TMP[i] = 0;
                                }
                            }
                        }
                    }
                }
            }
        return C;
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

// C = \
// A.d[0][0] * (A.d[1][1] * A.d[2][2] - A.d[1][2] * A.d[2][1]) + \
// -1 * A.d[0][1] * (A.d[1][0] * A.d[2][2] - A.d[1][2] * A.d[2][0]) + \
// A.d[0][2] * (A.d[1][0] * A.d[2][1] - A.d[1][1] * A.d[2][0]);
