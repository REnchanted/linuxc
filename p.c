#include<stdio.h>

int main()
{
	/*char a='A';
	char *p=&a;
	putchar(a);
	putchar('\n');
	putchar(*p);
	char c2=*p+1;
	putchar(c2);
	return 0;*/
	int a[]={2,4,6,8,10};
	int *p1=a;
	int *p2=&a[0];

	printf("p1address=%x\n",&p1);
	printf("p2address=%x\n",&p2);
	printf("a[0]address=%x\n",&a[0]);
	printf("p1=%x\n",&p1);
	printf("p2=%x\n",&p2);
	p1=p1+3;

	printf("p1=%d",p1);
	return 0;
		
}
