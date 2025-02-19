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
    int missingInt = -1;
    for (int i = 0; i < size; i++)
    {
        //In-place Cyclic Sort.
        while ( 1 )
        {
            //Ignore negative numbers.
            if (!(arr[i] < 0))
            {
                if(arr[i] != (i + 1))
                {
                    int temp;
                    int map = (arr[i] - 1);
                    temp = arr[map];

                    arr[map] = arr[i];
                    arr[i] = temp;
                }
                else
                {
                    break;
                }
            }
            else
            {
                //Negative number encountered, nothing more to do here!
                break;
            }
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
