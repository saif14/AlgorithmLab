#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r, int size)
{
    int i=l;
    int j=m+1;
    int k=l;

    int temp[size];

    while (i<=m && j<=r) {
        if (arr[i]<= arr[j]) {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else {
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while (i<= m) {
        temp[k]=arr[i];
        i++;
        k++;
    }

    while (j<=r) {
        temp[k]=arr[j];
        j++;
        k++;
    }

    for (int p=l;p<=r;p++) {
        arr[p]=temp[p];
    }
}
//merge sort....................
void mergeSort(int arr[], int l, int r, int size)
{
    if (l < r) {
        int m = (l+r)/2;
        mergeSort(arr,l,m,size);
        mergeSort(arr,m + 1,r,size);
        merge(arr,l,m,r,size);
    }
}

int main()
{
    cout << "Enter size of array: " << endl;
    int size;
    cin >> size;
    int narr[size];

    cout << "Enter " << size << " integers in any order: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> narr[i];
    }
    cout << "Before Sorting" << endl;
    for (int i = 0; i < size; i++) {
        cout << narr[i] << " ";
    }
    cout << endl;
    mergeSort(narr, 0, (size - 1), size);

    cout << "After Sorting" << endl;
    for (int i = 0; i < size; i++) {
        cout << narr[i] << " ";
    }

    return 0;
}
