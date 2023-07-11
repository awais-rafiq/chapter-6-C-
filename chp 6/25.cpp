#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
	cout<<setw(2)<<(i*j);
	cout<<endl;
		}
		for(i=5;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			cout<<setw(2)<<(i*j);
			cout<<endl;
		}
}

