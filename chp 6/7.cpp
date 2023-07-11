#include<iostream>
using namespace std;
int main()
{
	char ch='1';
	int i,j,n;
	cout<<"enter the height of triangle:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
}
