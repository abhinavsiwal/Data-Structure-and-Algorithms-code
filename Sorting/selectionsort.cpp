#include <iostream>
#include <conio.h>
using namespace std;

void swap(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

void selectionsort(int arr[],int n){
    int indexofmin;
    for (int i = 0; i < n; i++)
    {
        indexofmin=i;
        for (int j = i+1; j < n;j++)
        {
            if(arr[indexofmin]>arr[j]){
                indexofmin=j;
            }
        }
        swap(&arr[indexofmin],&arr[i]);
    }
    
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[10], size;
    cout << "Enter the size of Array" << endl;
    cin >> size;
    cout << "Enter the Elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
   selectionsort(arr,size);
    cout << "Array after sorting is = " << endl;
    display(arr, size);
    getch();
    return 0;
}