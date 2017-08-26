#include <stdio.h>
int fx(int val);
int main()
{
	int i = 0;
	while(i<100)
	{
		printf("%d",i++);
	}
	fx(5);
}

int fx(int val)
{
	printf("%d %d",val,val&(val<<1));
	return 0;
}
