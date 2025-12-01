#include<stdio.h>
int main()
{
	char* name[5] = { "hello","China","beijing","project","Computer" };
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%s\n",name[i]);
	}
	return 0;
}