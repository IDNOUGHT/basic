#include<iostream>

void exchange(int &a1, int &a2 )
{
	int t;
	t=a1;
	a1=a2;
	a2=t;
}

int partition(int *a, int l, int r)
{
	int i=l-1, j=r; //i是左扫描指针，初值在第一个元素左侧，下标-1；j是右扫描指针，下标位于划分元素a[r]处
	
	int v = a[r];
	for(;;)
	{
		while ( a[++i] <=v)    //从左侧扫描，一旦元素大于a[r]则停止扫描
			if (i==r)break;
		while( a[--j] >v )    //从右侧扫描，一旦元素小于a[r]则停止扫描
			if ( j==0) break;
		if(i >= j) break; //如果两个指针相遇或者错位,退出循环
		exchange(a[i],a[j]);  //如果未相遇，那么将扫描指针指向的两个元素交换
	}
	exchange(a[i],a[r]);  //将划分元素换到中间的位置
	return i; //返回划分元素的下标（最后i==j因此返回哪个都可以）
}

void quicksort(int *a, int l, int r)
{
	int i; //记录划分元素的下标

	if (r <= l) return;   //只要最小元素小于等于最大元素，都可以进行快速排序

	i=partition(a, l, r); //确定划分元素的位置

	quicksort(a,  l,  i-1); //对划分元素a[i]左侧的子数组进行快速排序
	quicksort(a, i+1, r);//对划分元素a[i]右侧的子数组进行快速排序

}

int partition_del(int* a, int l, int r)
{
	int i = l - 1, j = r; //i是左扫描指针，初值在第一个元素左侧，下标-1；j是右扫描指针，下标位于划分元素a[r]处

	int v = a[r];       
	for (;;)
	{
		while (a[++i] > v)    //从左侧扫描，一旦元素小于a[r]则停止扫描
			if (i == r)break;
		while (a[--j] <=v)    //从右侧扫描，一旦元素大于a[r]则停止扫描
			if (j == 0) break;
		if (i >= j) break; //如果两个指针相遇或者错位,退出循环
		exchange(a[i], a[j]);  //如果未相遇，那么将扫描指针指向的两个元素交换
	}
	exchange(a[i], a[r]);  //将划分元素换到中间的位置
	return i; //返回划分元素的下标（最后i==j因此返回哪个都可以）
}


void quicksort_del(int *a, int l, int r)
{
	int i; //记录划分元素的下标

	if (r <= l) return;   //只要最小元素小于等于最大元素，都可以进行快速排序

	i = partition_del(a, l, r); //确定划分元素的位置

	quicksort_del(a, l, i - 1); //对划分元素a[i]左侧的子数组进行快速排序
	quicksort_del(a, i + 1, r);//对划分元素a[i]右侧的子数组进行快速排序
}
