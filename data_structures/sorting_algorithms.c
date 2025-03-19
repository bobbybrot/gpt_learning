/*
Problem:
Given the array {45, 12, 89, 33, 77, 2, 18}, implement Quick Sort and show the array after the first partition step when choosing the last element as the pivot.

Steps:
1. Choose the pivot.
2. Rearrange the array such that elements smaller than the pivot are on the left and larger ones on the right.
3. Return the partitioned array after this step.

Expected Output Format:
    1.Chosen pivot: X
    2.Array after partitioning: [ ..., ..., ..., pivot, ..., ...]
✅ Use Quick Sort for this exercise.
*/
#if 0
void SwapHelper(int *arrOne, int *arrTwo)
{
    int temp = *arrOne;
    *arrOne = *arrTwo;
    *arrTwo = temp;
}

int QuickSortPartition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            //Swap elements
            SwapHelper((arr+i), (arr+j));
        }
    }
    SwapHelper((arr+i+1), &arr[high]);
    return i+1; //Return index for next iteration to start from.
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = QuickSortPartition(arr, low, high);
        QuickSort(arr, low, pivotIndex - 1);
        QuickSort(arr, pivotIndex + 1, high);
    }
}
#endif

/*
Problem:
Given two sorted halves of an array:

leftHalf = {4, 10, 23}
rightHalf = {8, 15, 30}
Manually merge these two halves into a single sorted array using Merge Sort's merging step.

Expected Output: A merged array {4, 8, 10, 15, 23, 30}

✅ Use Merge Sort for this exercise.
*/
#if 1
void Merge(int *arr, int left, int mid, int right)
{
    //STEP 1: Setup Temporary arrays
    const int L1 = mid - left+1; //Left side will also cover var at midpoint index
    const int R1 = right - mid;

    //STEP 2: Create and copy original array into respective elements

    //STEP 3: ...

    //STEP 4: ...

}

void MergeSort(int *arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        MergeSort(arr, left, mid); //Split left
        MergeSort(arr, mid + 1, right); //Split right
        Merge(arr, left, mid, right);
    }
}
#endif

/*
Problem:
Given the nearly sorted array {2, 5, 8, 10, 7, 15, 20}, apply Insertion Sort only for the misplaced number(s) to restore the sorted order.

Expected Output: Show array before and after fixing the order.

Show the array before and after fixing the order.
✅ Use Insertion Sort for this exercise.
*/