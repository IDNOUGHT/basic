#include <iostream>
#include "Single_List.h"

//Ϊ�򻯱��⣬����ֱ��ͨ�����������û���������н��ж�ȡ
//����д���Խ�������������ظ�ʹ��
SLNode* SL::create_SList(int arr[], int N) 
{
	SLNode *tmp,*n;
	HEAD = (SLNode*)malloc(sizeof(SLNode));
	n = HEAD;
	n->data = -1; //ͷ��㲻�洢����
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
