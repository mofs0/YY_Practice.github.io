#include<stdio.h>
int max(int x, int y)
{
	int temp;
	if (x > y)
		temp = x;
	else
		temp = y;
	return temp;
}
int min(int x, int y)
{
	int temp;
	if (x < y)
		temp = x;
	else
		temp = y;
	return temp;
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mux(int x, int y)
{
	return x * y;
}
int main()
{
	int(*p[5])(int, int) = { mux,min,add,sub,max };
	int num;
	num = (*p[2])(10, 20);
	printf("num=%d\n", num);
	return 0;
}