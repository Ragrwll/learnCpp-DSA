#include<iostream>
using namespace std;

int main(){
    /*char ch;
    cin >> ch;
    if(ch >= 'a' && ch <= 'z'){
        cout << "This is lower case"<<endl;
    }else if(ch >= 'A' && ch <= 'Z'){
        cout<<"This is Upper case"<<endl;
    }else if(ch >= '0' && ch <= '9'){
        cout << "This is numeric"<<endl;
    }else{
        cout<<"Ab kuch nhi bacha!!!"<<endl;
    }*/
   int n;
   cin >> n;
   int sum =0;
   int i = 1;
   while(i<=n){
    if(i%2 ==0){
        sum += i;
   }
   i++;
}
   cout<< sum<<endl;
}