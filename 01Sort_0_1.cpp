#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;  
}

void sortOne(int arr[], int n){
    int start = 0; int end=n-1;

    while (start < end){   

    while (arr[start] == 0 && start < end){
        start++;
    }
    while (arr[end] == 1 && start < end){
        end--;
    }
    // agr yah pahuch gye ho, iska mtlab;
    //arr[start] == 1 and arr[end] == 0
    if(start < end ){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    }
}

int main(){
    int arr[8] = {1,1,0,0,0,0,1,0};
    sortOne(arr, 8);
    print(arr, 8);
    
    return 0;
}