#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *data = (int *)malloc(sizeof(int)*10);
   int *data_new;

   data_new = (int *)realloc(data, sizeof(int)*11);
   
   // Creating a list that the user can add to
   printf("\nOriginal List: ");

   for (int i=0; i < 11; i++){
        *(data_new + i) = i;  
        printf("%d \n", *(data_new + i));          
    }

  //*(data_new + 1) = getchar(); /// user input do not need

   /// Checking if there is a spot from realloc to the list
   printf("\nFinal List: Adding another Number to list ");

   for (int i = 0; i < 11; i++){ 
        printf("%d \n", *(data_new + i));          
    }

    *(data_new + 12) = 11;
    printf("%d \n", *(data_new +12));

   free(data_new);
   return 0;
}