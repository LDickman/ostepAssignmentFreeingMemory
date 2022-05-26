#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *data = (int *) malloc(sizeof(100));

    printf("%d\n", data[50]); /// *data); // all result in 0
    free(&data[50]);  /// results in error
    
    return 0;
}