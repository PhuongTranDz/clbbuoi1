#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n;
	cout<<"\t\t==>NHAP  n: ";cin>>n;
	float s4=0,s5,s6;
	if (n<0)
	{
		cout<<"\t\t==>NHAP LAI n!!";
	    return 0;
	}
	
	for (int i=1; i<n;i++)
	{
		s4 += i*i;
		s5 +=pow((2*i+1),3);
		s6 +=pow(2*1,4);
		
	}
	cout<<"\t\t==>TONG CAN CAU A ="<<s4<<endl;
	cout<<"\t\t==>TONG CAN CAU B ="<<s5<<endl;
	cout<<"\t\t==>TONG CAN CAU C ="<<s6<<endl;
}
