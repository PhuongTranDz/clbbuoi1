#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n; 
	cout << " Nhap so dong : ";
	cin >> n;
	for(int i=n; i>=1; i--)
	{
		for (int j=1; j<=i; j++)
		{
	     	cout << setw(3) << "*";
		}
	cout << endl;
	}
	return 0;
}
