#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num = abs(n);

    int ans = 0;
    int i =0;

    while (num != 0)
    {
        /* code */
        int bit = num&1;//and opr bw n - 1);
        ans = (bit*pow(10,i)+ans);
        
        num   = num>>1;
        i++;
    }
    if(n<0){
        cout<<"-"<<ans<<endl;
    }else{
        cout<<ans<<endl;
    }

}
