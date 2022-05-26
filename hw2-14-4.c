#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *x = (int *) malloc(sizeof(int));
    x = NULL;
    
    printf("%d\n", *x);
    // free(x);        /// solves the segemention error
    return 0;
}