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

int sum(int arr[],int size){
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum += arr[i];
    }
    return sum;
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
//linear search
bool linear(int arr[],int size,int key){
    for(int i = 0;i<size;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

//reverse array
void reversing(int arr[],int size){
    int start = 0;
    int end = size-1;
    for(int i = 0;i<size;i++){
        while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        }
        
    }
}
void swapalter(int arr[],int size){
    int start = 0;
    int end = 1;
    for(int i = 0;i<size;i++){
        while(end<size){
        swap(arr[start],arr[end]);
        start = start+2;
        end = end+2;
        }
}
}

int main(){

    

    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;

    
    int arr[100];

    getip(arr,n);

    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;


    printArray(arr,n);
   
    cout<<"Maximmum value is "<< max(arr,n)<<endl;
    cout<<"Minimmum value is "<< min(arr,n)<<endl;
    
    cout<<"Sum is:"<<sum(arr,n)<<endl;
    cout<<linear(arr,n,key)<<endl;

    printArray(arr,n);
    reversing(arr,n);
    printArray(arr,n);

    printArray(arr,n);
    swapalter(arr,n);
    printArray(arr,n);

}