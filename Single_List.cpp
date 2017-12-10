#include <iostream>
#include "Single_List.h"

//可以直接通过本函数对用户输入的序列进行读取
//通过数组创建链表
SLNode* SL::create_SList(int arr[], int N) 
{
	SLNode *tmp,*n;  //tmp为临时结点，n用于初始化头结点
	HEAD = (SLNode*)malloc(sizeof(SLNode));
	n = HEAD;
	n->data = -1; //头结点不存储数据
	for(int i=0;i<N;i++)
	{
		tmp=(SLNode*)malloc(sizeof(SLNode));
		tmp->data = arr[i];
		n->next = tmp;
		n = tmp;
	}
	n->next = NULL;

	return HEAD;
}
//删除整条链表
bool SL::del_SList()
{
	SLNode*tmp;
	tmp = HEAD->next;
	while(tmp->next!= NULL)
	{
		HEAD->next = tmp->next;
		free(tmp);
		tmp = HEAD->next;
	} 
	free(tmp);
	free(HEAD);
	return 1;
}
