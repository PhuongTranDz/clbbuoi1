#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n;
	cout<<"\t\t==>NHAP  n: ";cin>>n;
	long s=0;
	for (int i=0; i<n;i++)
	{
		s+=pow(i,3);
	}
	cout<<"\t\t==>TONG CAN TINH="<<s<<endl;
}
