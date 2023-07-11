#include<iostream>
using namespace std;
int main()
{
int x,y,n,f,sum=0;
cout<<"enter a number.";
cin>>n;
for(x=1;x<=n;x++)
{
 f=1;
 for(y=1;y<=x;y++)
 f=f*y;
 sum=sum+f;
}
cout<<"Sum is."<<sum;
}
