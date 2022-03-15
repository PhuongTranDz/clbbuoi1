#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\t\t==>TINH KQ PHEP TOAN"<<endl;
	cout<<"\t\t==>NHAP VAO DO DAI CUA PHEP TOAN:";cin>>n;
	long p;
	for(int i = 2.0; i<=n ; i++)
	{
		p=((1+(2/3)+(2/3))*(4/5))+2*(i+1)/(2*i+3);
	}
	cout<<"\t\t==>KET QUA CUA YEU DA DE BAI = " << p << endl;
}
