#include <stdio.h>
#include "matrix.h"

int dot(int A[1][3], int B[1][3]) {

    int c = 0;

    for (int j = 0; j <= 2; j++) {
        c += A[0][j] * B[0][j];
    }
    return c;
}

// Determine the cross product of two vectors with the help of Sarrus rule
int cross(int A[1][3], int B[1][3]) {
    return 0;
}

//
// 11 22
// 11 22
//
// 00 22
// 00 22
//
// 00 11
// 00 11
