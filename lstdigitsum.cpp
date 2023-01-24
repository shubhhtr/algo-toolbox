#include<iostream>
using namespace std;

int lstdigi(int n){
    if(n==0 ||n==1){
        return n;
    }
    if(n==2){
        return 1;
    }
    int a1=1, a2=1;
    for(int i=3;i<=n;i++){
        int temp=a2;
        a2=(a1%10)+(a2%10);
        a1=temp%10;
    }
    return a2%10;
}

int main(){
    int n;
    cin>>n;
    int ans=lstdigi(n+2);
    if(ans==0){
        cout<<9;
    }
    else{
        cout<<ans-1;
    }
    return 0;
}