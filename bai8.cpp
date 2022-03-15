#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n;
	cout<<"\t\t==>NHAP  n: ";cin>>n;
	float s1=0,s2,s3;
	if (n<0)
	{
		cout<<"\t\t==>NHAP LAI n!!";
	    return 0;
	}
	
	for (int i=1; i<n;i++)
	{
		s1 += i*((i+1)/2);
		s2 +=((i+1)*2-1)/2;
		s3 +=(i*i+i)/2;
		
	}
	cout<<"\t\t==>TONG CAN CAU A ="<<s1<<endl;
	cout<<"\t\t==>TONG CAN CAU B ="<<s2<<endl;
	cout<<"\t\t==>TONG CAN CAU C ="<<s3<<endl;
}
