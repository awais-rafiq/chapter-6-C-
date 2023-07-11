#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j,k,s,c=5;
	for(int i=1;i<=5;i++)
     {
     	for(k=1;k<=c;k++)
	 cout<<(" ");
	 for(j=1;j<=i;j++)
	 cout<<setw(2)<<i;
	 cout<<endl;
	 c--;
	 
	 }
}
