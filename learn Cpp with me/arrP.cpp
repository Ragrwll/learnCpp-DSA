#include<iostream>
#include <climits>
using namespace std;

//gives min
int min(int arr[],int size){
    int min = INT_MAX;
    for(int i = 0;i<size;i++){
     if(min>arr[i]){
        min = arr[i];
     }
    }
    return min;
}

//gives max
int max(int arr[],int size){
    int max = INT_MIN;
    for(int i = 0;i<size;i++){
     if(max<arr[i]){
        max = arr[i];
     }
    }
    return max;
}

//takes ip
void getip(int arr[],int size){
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}


//prints array
void printArray(int arr[],int size){
    cout<<"Printing Array!!"<<endl;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}

int main(){

    int n;
    cin>>n;

    int arr[100];
    //getip(arr,n);
    //printArray(arr,n);
    getip(arr,n);
    cout<<"Maximmum value is "<< max(arr,n)<<endl;
    cout<<"Minimmum value is "<< min(arr,n)<<endl;

}