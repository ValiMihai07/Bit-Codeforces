#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	int n;
	string operatii[150];
	int y = 0;
	int i, j;
	cin >> n;

	for (i = 0; i < n; i++)
	{
			cin >> operatii[i];
	}
	for (i = 0; i < n; i++)
		{
		if ( operatii[i] == "++X" )
		{
			y++;
		}
		else if ( operatii[i] == "X++" )
		{
			y++;
		}
		else
			y--;
		}

	cout << y;

	return 0;
}