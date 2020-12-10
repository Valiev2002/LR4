#include <iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int Left[n1], Right[n2];
    for (int i = 0; i < n1; i++)
        Left[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        Right[j] = arr[mid + 1 + j];
    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (Left[i] <= Right[j]) {
            arr[k] = Left[i];
            i++;
        } else {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = Left[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = Right[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int left,int right){
    if(left>=right){
        return;
    }
    int m = (left+right-1)/2;
    mergeSort(arr,left,m);
    mergeSort(arr,m+1,right);
    merge(arr,left,m,right);
}
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main()
{
    int arr[] = { 3,5,8,74,5,6,52,45,54,2,65,0,45, };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, arr_size - 1);

    cout << "Sorted array is: ";
    printArray(arr, arr_size);
    return 0;
}
