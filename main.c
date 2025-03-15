#include <stdio.h>
#include "data_structures/array_search_algorithms.c"
#include "data_structures/sorting_algorithms.c"

int main(void)
{
    //Add code here!
    int arr[] = {4, 10, 23, 8, 15, 30};
    
    //Sort the array
    MergeSort(arr, 0, (sizeof(arr) / sizeof(int)));

    return 0;
}