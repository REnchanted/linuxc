/**
 * @file arrayppp.c
 * @brief int (*p)[] in c
 * @author jingli9703@gmail.com
 * @version lijing
 * @date 2017-12-17
 */

#include<stdio.h>

/**
 * @brief int(*p)[5]表示p是一个指针，它指向含有5个元素的一维数组。p也只能指向一个包含5个元素的一维数组，p就是该一维数组的首地址，由于[]的优先级高于(),所以()，不能省略，
 * p=a,使得P指向二位数组a的第一行，而然后通过(*p)[i]访问该行的每一个元素，
 * p++使p指向二位数组的第二行
 * @return 
 */
int main()
{
	int a[2][5]={1,3,5,7,9,2,4,6,8,10};
	int (*p)[5],i;
	p=a;
	for(i=0;i<5;i++)
	{
		printf("%d ",(*p)[i]);
	}
	printf("\n");
	p++;

	for(i=0;i<5;i++)
	{
		printf("%d ",(*p)[i]);
	}
	printf("\n");
	return 0;


}

