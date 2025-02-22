#include <stdbool.h>

/*
4. First Missing Positive Integer:
Write a function to find the smallest positive integer missing from an unsorted array.

For example:
Input: {3, 4, -1, 1}
Output: 2
You should aim for a time complexity of O(n).

Additional Unit Tests:
    int arr [] = {3,4,-1,1};  //TEST 1 = PASS
    int arr[] = {1,2,0};      //TEST 2 = PASS
    int arr[] = {7,8,9,11,12}; //TEST 3 = PASS
*/
int FindMissingPosInteger(int arr[], int size)
{
    int missingInt = (size + 1);

    //Part 1: Sort array
    for (int i = 0; i < size; i++)
    {
        //Only perform a in place cyclic sort if:
        //1. The value in the current index is not a negative integer
        //2. The current value is not more than the expected size (preventing seg faults)
        //3. The current value in current index is not the same as value at mapped value.
        while ( (!(arr[i] <= 0)) && (arr[i] <= size) && (arr[i] != arr[(arr[i]-1)]))
        {
            //In-place Cyclic Sort.
            int temp;
            int map = (arr[i]-1);
            temp = arr[map];
            
            arr[map] = arr[i];
            arr[i] = temp;
        }
    }

    //Part 2: Look for missing integer
    for (int i = 0; i < size; i++)
    {
        //Update mising number value if 'i' is not -1
        if (arr[i] != (i + 1))
        {
            missingInt = (i + 1);
            break;
        }
    }
    return missingInt;
}



/*
5. Two-Sum Search:
Given a sorted array, find two distinct indices such that their elements sum up to a given target. Return the pair of indices.

Example:
Input: Array = {2, 7, 11, 15}, Target = 9.
Output: [0, 1].
*/
typedef struct 
{
    /* data */
    int indiceOne;
    int indicesTwo;
} indices;

indices TwoSumSearch(int arr[], int size, int target)
{
    indices data = {-1,-1};
    //Thoughts: It is possible by adding the same index twice, you could match the target,
    //          so I think it's reasonable to have both outer and inner loop look at the same element.
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                data.indiceOne = i;
                data.indicesTwo = j;

                //Thoughts: Break keyword only escapes the inner loop, not the outer one.
                //          Thus, set i to size then use break keyword, that way both loops will escape cleanly.
                i = size;
                break;
            }
        }
    }
    return data;
}