#include<stdio.h>

int main()
{
	int x, y, z;
	for (x = 1; x <= 3; x++)
		for (y = 1; y <= 3; y++)
			for (z = 1; z <= 3; z++)
			{
		if (x == 1){ continue; }
		if (z == 3){ continue; }
		if (x == 3){ continue; }
		if (x != y&&x != z&&y != z){ ; }
		else continue;
		printf("%d %d %d \n", x, y, z);
			}
	return 0;
}