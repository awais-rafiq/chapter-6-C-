#include<iostream>
using namespace std;
int main()
{
	int m,n;
	m=10;
	do
	{
     n=m;
	 do
	 {
	   cout<<m<<"\t";
	    n--;
	 	}
	 	while(n>=1);
	 	cout<<endl;
	 	m=m-2;
	}
	while(m>=1);
}
