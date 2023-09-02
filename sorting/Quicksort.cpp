/*
In quick sort (devide and conquore):
1) we partition the array and place 1 element to its correct position
2) the element those are lessser than the already stored element are placed to the left of that element and the e
element those are grater are placed to the right of that element.


Algorithm:
1)select one element as pivot (generally 1st element )
2) count the total number of elements lesser to the pivot
3) change the position of pivot to start+(count of all the lesser element to the pivot );
4) Now take 2 pointers i and j (i points to qst element and j points to last element);
5) compare them if i>pivot them swap it with j one and if j<pivopt then swap it with i one else leave them as it is
6) Call it recurssively

Questions based on Quick sort:
1)what is the time complexity of quick sort?
ANS=>   Best case	O(n log n)  (pivot[choosen radomly] is meidan or array)
        Average case	O(n log n)  (pivot[chooosen randomly] is not madian of array)
        Worst case	O(n^2)  (pivot smallest or largest element of array)

*/

#include <bits/stdc++.h>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int c = 0;
    for (int i = s + 1; i < e; i++)
    {
        if (arr[i] < pivot)
        {
            c++;
        }
    }
    int pivotIndex = s + c;
    // changing position of pivot
    swap(arr[pivotIndex], arr[s]);
    int i = s, j = e;
    while (i < pivotIndex and j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if(i < pivotIndex and j > pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
}
void quickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    // for left part

    quickSort(arr, s, p - 1);

    // for right part
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {100,220,50,60,20,10,1};
    int n = 7;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}