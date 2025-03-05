#include <stdio.h>
#include "data_structures/array_search_algorithms.c"
#include "data_structures/sorting_algorithms.c"

int main(void)
{
    //Add code here!
    int arr[] = {45, 12, 89, 33, 77, 2, 18};
    QuickSort(arr, 0, (sizeof(arr) / sizeof(int)) - 1);
    return 0;
}