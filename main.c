#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"



int main() {

    int A[] = {1, 1, 1};
    int B[] = {1, 1, 1};

    int *p = cross(A, B);

    for (int i = 0; i <= 2; i++) {
        printf("%d\n", p[i]);
    }

}



    // int A[3][1] = {{1}, {1}, {1}};
    // int B[3][1] = {{1}, {1}, {1}};
    //
    // printf("%d\n", dot(A, B));
