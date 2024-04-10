#include <stdio.h>
#include <stdlib.h>
#include <vector.h>

Vector createVector(size_t n) {
    Vector v;
    v.size = n;
    v.data = (double*)malloc(n * sizeof(double)); // выделение памяти
    if (v.data == NULL && n != 0) {
        fprintf(stderr, "bad alloc\n");
        exit(1);
    }
    return v;
}

int main() {
    Vector myVector = createVector(10); 
    free(myVector.data); // Освобождаем память, когда вектор больше не нужен
    return 0;
}