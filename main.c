#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main() {


    matrix X = {3, 1, {{1}, {2}, {3}}};
    matrix Y = {3, 1, {{4}, {5}, {6}}};

    float* Z = cross(X, Y);

    printf("%.2fi %.2fj %.2fk\n", Z[0], Z[1], Z[2]);


    return 0;
}
