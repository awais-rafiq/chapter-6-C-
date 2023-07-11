#include<iostream>
using namespace std;
int main()
{
	int i,j,num,s=1;
	cout<<"enter the number.";
	cin>>num;
	cout<<"product components of "<<num<<"are."<<endl;
	for(i=num;i>=s;i--)
	 for(j=1;j<=num;j++)
	 {
	 	if(i*j==num)
	 	{
	 		cout<<i<<"*"<<j<<endl;
	 		s=j+1;
		 }
	 }
}
