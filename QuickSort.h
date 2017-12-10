#ifndef QS_H
#define QS_H

void exchange(int &a1,int &a2);   //声明元素交换函数
//递增排序
void quicksort(int *a, int l, int r);  //声明快速排序函数
int partition(int* a, int l, int r); //划分函数

//递减排序
void quicksort_del(int *a, int l, int r);  //声明快速排序函数
int partition_del(int* a, int l, int r); //划分函数


#endif
