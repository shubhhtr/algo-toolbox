#include<iostream>
using namespace std;

long long int fib(long long int n){
    if(n==0){
        return 0;
    }
    if(n==1 || n==2){
        return 1;
    }
    long long int a1=1, a2=1;
    for(int i=3;i<=n;i++){
        long long int temp=a2;
        a2=a1+a2;
        a1=temp;
    }
    return (long long int)a2;

}

int main(){
    
    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}