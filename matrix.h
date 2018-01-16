typedef struct _matrix {
    int i, j;
    float d[3][3];
} matrix;

float det(matrix A);

float* cofactor(matrix A);
