#include <stdio.h>
#include "data_structures/array_search_algorithms.c"

int main(void)
{
    int arr [] = {1,2,0};
    int size = (sizeof(arr) / sizeof(int));

    printf("Missing Integer = %d\n",FindMissingPosInteger(arr, size));
    return 0;
}