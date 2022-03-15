#include <iostream>
using namespace std;
int main ()
{
	int n;
	cout << " Nhap n : ";
	cin >> n;
	cout << " Cac so hoan hao la : ";
	for (int i = 1; i <= n; i++)
	{
	  int s = 0;
	  for (int j = 1; j <= (i/2); j++)
	  {
		if(i%j == 0)
		{
		s += j;
		}
	  } 
  	if(s == i)
  	{
		cout << i << " , ";
	}
	}
	cout << endl;
	return 0;
}
