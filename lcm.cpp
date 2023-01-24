#include<iostream>
using namespace std;

long long int fstgcd(long long int a, long long int b){
    if(a<b){
        swap(a,b);
    }
    if(b==0){
        return a;
    }
    int rem=a%b;
    return (long long int)fstgcd(b,rem);
}

int main(){
    long long int a,b;
    cin>>a>>b;
    
    cout<<(long long int)(a*b)/fstgcd(a,b);
    
    return 0;
}