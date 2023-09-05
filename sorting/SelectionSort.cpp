/*
one of the most easy sorting algorithm


it is comparision based sorting algorithm

In selectio sort we have number of rounds or passess, in each round we take one element and store it in its wright place

It is unstable algorithim  as relative order of element is changed
but it can be made stable by using couting sort or insertion sort
[1, 2, 2]
here 1st two will be swaped with 2nd and relative order will change  ?/???/???
use case:
when the size of array is small

Time and space somplexity:
space: O(1)
time: best case=:>  O(n^2)
      worst case=:> O(n^2)
*/


#include <iostream>
using namespace std;
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int mi = i;
        for (int j = i + 1; j < n; j++)
        {
            if (mi > arr[j])
                mi = j;
        }
        swap(arr[mi],arr[i]);
    }
}
int main()
{
    int arr[] = {1, 4, 5, 7, 8,9};
    int n = 6;

    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}