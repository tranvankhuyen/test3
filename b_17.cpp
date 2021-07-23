#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a : ";
	cin>>a;
	int k = a - 1;
	for (int i = 0; i <= a; i++)
	{
		if (i == (a - 1))
		{
			// cout<<" ";
			for(int j = 0; j <= ((2*a)-2); j++)
			{
				cout<<"*";
			}
		}
		else
		{
		for (int j = 0; j <= (2*a - 2); j++)
		{
			if (j == k + i || j == k - i )
			{
				cout<<"*";
			} 
			else 
			{
				cout<<" ";
			}
		}
		}
	cout<<"\n";
	}
	system("pause");
	return 0;
}