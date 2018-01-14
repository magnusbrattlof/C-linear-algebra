typedef struct _matrix {
    int i, j;
    float d[3][3];
} matrix;


// Returning a inting point number of two vectors in space
float dot(matrix A, matrix B);

// Returning a new vector from the cross product (a x b)
float* cross(matrix A, matrix B);

float* mycomplex(float a, float b, int format);

float det(matrix A);

float* cofactor(matrix A);
