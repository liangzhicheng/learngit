#include <stdio.h>

int main(void)
{
	int a = 1200;
	int b = 1201;
	
	switch(b)
	{
		case 1200:
			printf("go to a()\n");
			break;
		case 1201:
			printf("go to b()\n");
			break;
		default:
			printf("default\n");
			break;
	}

	return 0;
}
