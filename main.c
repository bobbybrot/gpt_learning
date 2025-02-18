#include "data_structures/array_search_algorithms.c"
#include <stdio.h>

int main(void)
{
    int arr [] = {3, 4, -1, 1};
    int size = (sizeof(arr) / sizeof(int));

    printf("Missing Integer = %d",FindMissingPosInteger(arr, size));
    //ADD CODE HERE TO UNIT TEST CREATED CODE
    return 0;
}