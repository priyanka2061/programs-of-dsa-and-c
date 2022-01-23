// IMPLEMENTING  QUICK SORT ALGORITHM BY USING CPP
#include <bits/stdc++.h>
using namespace std;
int partioning(int arr[], int low, int hight)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = hight;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (pivot < arr[j])
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }

    } while (i < j);
    swap(arr[low], arr[j]);
    return j;
}
void quick_sort(int arr[], int low, int hight)
{
    int index;
    if (low < hight)
    {

        index = partioning(arr, low, hight);
        quick_sort(arr, low, index - 1);
        quick_sort(arr, index + 1, hight);
    }
}
void display_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int arr[] = {2, 8, 9, 1, 0, 6, 4, 2, 1};
int n = sizeof(arr) / sizeof(arr[0]);
int main()
{
    display_array(arr, n);
    quick_sort(arr, 0, n - 1);
    cout << "\n";
    display_array(arr, n);
    return 0;
} 
/*
   It is not stable algorithm. 
   it is inplace alogrithm.
   time complexity for average  and best case 0(nlogn).
   time complexity for worst case 0(n^2).

*/ 
