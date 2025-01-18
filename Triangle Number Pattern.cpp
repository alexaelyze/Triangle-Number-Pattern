#include <iostream>
using namespace std;
int main()
{
	int x,y,z,Y,N;
	cout << "Enter the Size of Right Triangle:";
	cin >> x;
	for(y=1;y<=x;y++)
	{
		for(z=1;z<=y;z++)
		{
			cout << z;
		}
		cout << endl;
	}
	cout << "Return to Main Menu? [Y/N]:";
	cin >> Y;
	cin >> N;
}
