#include<iostream>
using namespace std;

int change(int n){
    int t[n+1];
    t[0]=0;
    for(int i=1;i<=n;i++){
        t[i]=INT8_MAX;
    }

    for(int i=1;i<=n;i++){
        if(1<=i){
            int res = t[i-1];
            if (res != INT8_MAX && res + 1 < t[i])
                t[i] = res + 1;
        }
        if(3<=i){
            int res = t[i-3];
            if (res != INT8_MAX && res + 1 < t[i])
                t[i] = res + 1;
        }
        if(4<=i){
            int res = t[i-4];
            if (res != INT8_MAX && res + 1 < t[i])
                t[i] = res + 1;
        }
    }
    if(t[n]==INT8_MAX){
        return -1;
    }
    return t[n];
}

int main(){
    int n;
    cin>>n;
    cout<<change(n);
    return 0;
}