#include <stdbool.h>

/*
4. First Missing Positive Integer:
Write a function to find the smallest positive integer missing from an unsorted array.

For example:
Input: {3, 4, -1, 1}
Output: 2
You should aim for a time complexity of O(n).
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
