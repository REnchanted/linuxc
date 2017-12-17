/**
 * @file compare.c
 * @brief The ->function
 * @author jingli9703@gmail.com
 * @version lijing
 * @date 2017-12-17
 */

#include<stdio.h>
#define GET_MAX 0
#define GET_MIN 1

/**
 * @brief get max value
 *
 * @param i
 * @param j
 *
 * @return max(i,j)
 */
int get_max(int i,int j)
{
	return i>j?i:j;
}

/**
 * @brief get min value
 *
 * @param i
 * @param j
 *
 * @return min(i,j)
 */
int get_min(int i,int j)
{
	return i>j?j:i;
}


/**
 * @brief cpmpare i,j 
 *
 * @param i
 * @param j
 * @param flag
 *
 * @return ret
 */
int compare(int i,int j,int flag)
{
	int ret;
	int (*p)(int,int);//定义函数指针,并声明其类型
	if(flag==GET_MAX)
	{
		p=get_max;//使其指向两个函数
	}
	else
	{
		p=get_min;
	}
	ret=p(i,j);
	return ret;
}
int main()
{
	int i=5,j=10,ret;
	ret=compare(i,j,GET_MAX);
	printf("The MAX is %d\n",ret);

	return 0;
}
