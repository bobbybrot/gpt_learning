#include <stdio.h>
#include "data_structures/array_search_algorithms.c"

int main(void)
{
    //int arr [] = {3,4,-1,1};  //TEST 1 = PASS
    //int arr[] = {1,2,0};      //TEST 2 = PASS
    int arr[] = {7,8,9,11,12}; //TEST 3 = PASS
    int size = (sizeof(arr) / sizeof(int));

    printf("Missing Integer = %d\n",FindMissingPosInteger(arr, size));
    return 0;
}