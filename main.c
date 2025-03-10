#include <stdio.h>
#include "data_structures/array_search_algorithms.c"
#include "data_structures/sorting_algorithms.c"

int main(void)
{
    //Add code here!
    int leftHalf[] = {4, 10, 23};
    int rightHalf[] = {8, 15, 30};
    int arr[6] = {0}; //Array holding final results

    MergeSort(arr, leftHalf, 3, rightHalf, 3);

    return 0;
}