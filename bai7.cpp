#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n;
	cout<<"\t\t==>NHAP  n: ";cin>>n;
	float s=0;
	for (int i=1; i<n;i++)
	{
		s += (1/i);
	}
	cout<<"\t\t==>TONG CAN TINH="<<s<<endl;
}
