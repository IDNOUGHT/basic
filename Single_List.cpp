#include <iostream>
#include "Single_List.h"

//为简化本题，可以直接通过本函数对用户输入的序列进行读取
//这样写可以将链表独立出来重复使用
SLNode* SL::create_SList(int arr[], int N) 
{
	SLNode *tmp,*n;
	HEAD = (SLNode*)malloc(sizeof(SLNode));
	n = HEAD;
	n->data = -1; //头结点不存储数据
	for(int i=0;i<N;i++)
	{
		tmp=(SLNode*)malloc(sizeof(SLNode));
		tmp->data = arr[i];
		tmp->is_finished = 0;
		n->next = tmp;
		n = tmp;
	}
	n->next = NULL;

	return HEAD;
}

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
