#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int det(matrix A);

int main() {

    matrix A = {2, 2, {{5, 2}, {4, 2}}};
    matrix B = {3, 3, {{-1, 2, -1}, {1, 0, 1}, {3, 0, -2}}};

    printf("%d\n", det(A));
    printf("%d\n", det(B));
    return 0;
}
