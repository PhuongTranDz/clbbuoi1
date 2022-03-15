#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n;
	cout<<"\t\t==>NHAP SO CAN KIEM TRA:";cin>>n;
	if(n<2)
	{
		cout<<"\t\t==>SO VUA NHAP KHONG PHAI SO NGUYEN TO!!!"<<endl;
	    return 0;
	}
    int dem=0;
    for(int i=2 ; i<= sqrt(n);i++)
    {
    	if (n%i==0)
    	{
    		dem++;
		}
	}
	if(dem==0)
	{
		cout<<"\t\t==>SO VUA NHAP "<<n<<" LA SO NGUYEN TO"<<endl;
	}
	else 
	{
		cout<<"\t\t==>SO VUA NHAP "<<n<<" KHONG PHAI SO NGUYEN TO"<<endl;
	}

	return 0;
}
