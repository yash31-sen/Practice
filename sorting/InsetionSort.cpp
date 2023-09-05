/*
Insertion sort is simply an iterative algorithm that sorts an array by repetedly inserting an array into the already sorted array
It does not make use of new array which makes it more sutable in space complexity



Algorithm:

1)Take first element in round 1;
2) compare it with 2nd element if 1st>2nd shift 1st to second and put 2nd to first  (now array till 2nd index is sorted)
3) comapre the 3rd element with the sorted array elements and place it after the element whcih is just lesses to it and before the element which is just greater to it.
Note=:>  if the space is not there in between the elements then shift them one step right to put that element



Notes:

1) for n number of inputs there are n-1 number of rounds in this algorithm





Why insertion sort?
ANS=> it is very adaptive algorithm
because with the time the array is getting sorted so we don't have to traverse to the whole array to sort other elements again unlike selection sort where we have to traverse whole array again and again
also it is stable algorithm

spcae complexity:     O(1)
Time complexity:  Best Case=:> O(n) (already sorted)
                  Worst Case=:> (n^2)
*/

#include <iostream>
using namespace std;

void insertionSort1(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (j; j > 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

void insertionSort(int *arr, int n)
{
    int i = 0;
    while (i < n)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] >= temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            else
            {
                break;
            }
        }
        i++;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 3};
    int n = 7;

    insertionSort1(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}