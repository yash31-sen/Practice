/*
merge sort is diveide and conqure technique in which
1) we divide the array form the mid unitll we got 1 element in each part
2) then sombine these devide parts by sorting them one by one
in an reccurssive way


=> if the dataset is sorted (rev also) then it is better than quick sort also


approaches ->
1) with 2 arrays (divide the array into two parts recurssion will sort them and them combine them)
2) with pointers



Questions:

1) What is the complexity of merge sort ?
Ans=> 

2) why merge sort has same complexity for al of the cases 
Ans=>    Merge sort always divides the array in half, so the number of comparisons and merges is always the same, regardless of the initial order of the elements.

*/

#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s+(e-s)/2;
    int l1 = mid - s + 1;
    int l2 = e - s;
    int arr1[l1];
    int arr2[l2];
    int k = s;
    for (int i = 0; i < l1; i++)
    {
        arr1[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < l2; i++)
    {
        arr2[i] = arr[k++];
    }
    k = s;
    int id1 = 0;
    int id2 = 0;
    while (id1 < l1 and id2 < l2)
    {
        if (arr1[id1] > arr2[id2])
        {
            arr[k++] = arr2[id2++];
        }
        else
        {
            arr[k++] = arr1[id1++];
        }
    }
    while (id1 < l1)
    {
        arr[k++] = arr1[id1++];
        
    }
    while (id2 < l2)
    {
        arr[k++] = arr2[id2++];
        
    }
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s+(e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}
int main()
{
    int arr[] = {1, 3, 5, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}