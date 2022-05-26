#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *data = (int *) malloc(sizeof(100));

    // /// Adding print does not cause the program to abort
    // printf("Initialized malloc\n");

    // ///Doing the code ths way causes an error with the malloc size and causes the program to abort
    // for (int i = 0; i < 100; i++){
    //     data[i] = i; 
    // }

    // /// After adding these print lines actually shows the data index of 7. 
    // printf("Array Completed!\n");
    // printf("Index at data[7] get:\n");             
    // free(data);
    // printf("%d\n", data[7]);

    //---------------------------------------

    //doing just these few without adding anythoing to arrray just prints out 0 regardless of index or not even indexing the array
    free(data);
    printf("%d\n", data[7]); /// *data); // all result in 0
    return 0;
}