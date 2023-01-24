#include<iostream>
using namespace std;

int change(int n){
    
    return (n/10 + (n%10)/5 + (n%5));

}

int main(){
    int m;
    cin>>m;
    cout<<change(m);
    return 0;
}