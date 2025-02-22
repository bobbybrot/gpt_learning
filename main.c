#include <stdio.h>
#include "data_structures/array_search_algorithms.c"

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int target = 8;
    indices data = TwoSumSearch(arr, (sizeof(arr)/4), target);

    printf("[%d, %d]", data.indiceOne, data.indicesTwo);
    return 0;
}