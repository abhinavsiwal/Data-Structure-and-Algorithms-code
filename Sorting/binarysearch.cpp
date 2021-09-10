#include<iostream>
#include<conio.h>
using namespace std;

int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high = size-1;
    while (low<=high)
    {
    mid = (low+high)/2;
          
    if(arr[mid]==element){
        cout<<"Element Found at index = "<<mid<<endl;
        break;
    }
    if(element>arr[mid]){
        low = mid+1;
    }
    else{
        high = mid-1;
    }
    
}
return -1;
}

int main(){
    int arr[10],size,element;
    cout<<"Enter the size of Array"<<endl;
    cin>>size;
    cout<<"Enter the Elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Element to be searched"<<endl;
    cin>>element;
    binarysearch(arr,size,element);
    getch();
    return 0;

}