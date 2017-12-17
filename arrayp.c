/**
 * @file arrayp.c
 * @brief The point use in c
 * @author jingli9703@gmail.com
 * @version lijing
 * @date 2017-12-17
 */

#include<stdio.h>

int main()
{
	int a[]={2,4,6,8,10};
	int *p1=a;
	printf("*p1=%d\n",*p1);
//	int *p2=a[0];编译不通过，原因是a[0]是数组的一个地址，需要加&
	int *p2=&a[0];
	printf("*p2=%d\n",*p2);

	//p1=p1+3;//指针地址加3,即指向a[3];

	//printf("%d",*p1);

	p1=a+5;
//	printf("%d",*p1);

	printf("%d\n",*(a+2));
	return 0;
}
