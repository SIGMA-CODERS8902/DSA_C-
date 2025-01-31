#include<iostream>
#include<vector>
using namespace std;

int SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]<arr[j]){
                minIndex=j;
            }
        }
    swap(arr[minIndex],arr[i]);
    }
}

int main(){
int size;
cout<<"enter the size of array :";
cin>>size;
int arr[100];
for(int i=0;i<size;i++){
    cin>>arr[i];
}
cout<<SelectionSort(arr,size);
}