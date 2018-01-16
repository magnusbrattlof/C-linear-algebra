#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include "complex.h"
#include "vector.h"

int main() {

    matrix A = {2, 2, {{1, 2}, {3,4}}};
    matrix B = {3, 3, {{2, 4, 3}, {4, 5, 6}, {4, 2, 1}}};
    matrix C = {1, 1, {1}};
    matrix D = {2, 2, {{1, 2}, {1, 2}}};

    printf("%.1f\n", det(A));
    printf("%.1f\n", det(B));
    printf("%.1f\n", det(C));
    printf("%.1f\n", det(D));
    return 0;
}
