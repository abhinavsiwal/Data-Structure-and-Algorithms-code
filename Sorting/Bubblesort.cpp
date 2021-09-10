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

void bubblesort(int arr[], int size)
{
    int issorted = 0;
    for (int i = 0; i < size; i++) //For no of passes
    {
        cout << "Working on Pass no = " << i+1 << endl;
        issorted = 1;
        for (int j = 0; j < size - 1 - i; j++) //To swap elements
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                issorted = 0;
            }
        }
    if (issorted)
    {
        return;
    }
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
    bubblesort(arr, size);
    cout << "Array after sorting is = " << endl;
    display(arr, size);
    getch();
    return 0;
}