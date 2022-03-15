#include<iostream>
using namespace std;
int main()
{
	int CD,CR;
	cout<<"\t\t==>NHAP CHIEU RONG: ";cin>>CR;
	cout<<"\t\t==>NHAP CHIEU DAI: ";cin>>CD;
	for(int i=1 ; i<=CR;i++)
	{
		for(int j=1; j<=CD;j++)
		{
			cout<<"*";
		}
	cout<<endl;
	}
	return 0;
}
