#include <stdio.h>
#include "matrix.h"

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

//
// 11 22
// 11 22
//
// 00 22
// 00 22
//
// 00 11
// 00 11
