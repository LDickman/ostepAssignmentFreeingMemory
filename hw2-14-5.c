#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *data = (int *) malloc(sizeof(100));
    data[100] = 0;
    
    printf("%d\n", *data);
    //free(data);
    return 0;
}