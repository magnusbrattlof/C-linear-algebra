
typedef struct _vector {
    int i, j, k;
} vector;

// Returning a inting point number of two vectors in space
int dot(int A[], int B[]);

// Returning a new vector from the cross product (a x b)
int * cross(int A[], int B[]);
