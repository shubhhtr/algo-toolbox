#include<iostream>
using namespace std;

int changedp(int n)
{
  int c[] = {1, 3, 4};
  int min[n + 1];
  min[0] = 0;
  int num = 0;
  for (int i = 1; i <= n; i++)
  {
    min[i] = 9999999;
    for (int j = 0; j < 3; j++)
    {
      if (i >= c[j])
      {
        num = min[i - c[j]] + 1;
        if (num < min[i])
        {
          min[i] = num;
        }
      }
    }
  }
  return min[n];
}

int main(){
    int x;
    cin>>x;
    cout<<changedp(x)<<endl;
    return 0;
}