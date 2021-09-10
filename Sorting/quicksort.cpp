#include <iostream>
#include <conio.h>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }while(i<j);
    swap(&arr[low],&arr[j]);
    return j;
}

void quickSort(int arr[],int low,int high){
    
    int partitionIndex; 
    if(low<high){
        partitionIndex=partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
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
    quickSort(arr,0,size-1);
    cout << "Array after sorting is = " << endl;
    display(arr, size);
    getch();
    return 0;
}