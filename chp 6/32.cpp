#include<iostream>
using namespace std;
int main()
{
	char choice;
	int x,y,count;
	cout<<"enter the charcter";
	cin>>choice;
	count=1;
	for(x=0;x<10;++x)
	{
		cout<<endl;
		for(y=0;y<10*2-1;++y)
		if(y==x || y==((10*2-1)-count))
		cout<<choice;
	     else
	     cout<<" ";
	     ++count;
	}
}
