#include<iostream>
using namespace std;
int main()
{
	int i,j,mul;
	for(i=1;i<=10;i++)
	{
		cout<<'1';
		mul=1;
		for(j=2;j<=i;j++)
		{
		 cout<<'*'<<j;
		 mul=mul*j;
		 	
		}
	cout<<"="<<mul<<endl;
	}
}
