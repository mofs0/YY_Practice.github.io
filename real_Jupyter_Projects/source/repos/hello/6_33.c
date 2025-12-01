#include<stdio.h>
void fun(char** q, int x)
{
	int i;
	for (i = 0; i < x; i++)
	{
		printf("q[%d]=%s\n", i, q[i]);
	}
}


int main()
{
	char* p[3] = { "Hello","World","Kitty" };
	fun(p, 3);
	return 0;
}