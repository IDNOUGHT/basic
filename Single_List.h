#pragma once
#ifndef SINGLE_LIST
#define SINGLE_LIST

//定义链表结点
typedef struct node
{
	int data;
	struct node *next;
}SLNode;

class SL {
public:
	SLNode *HEAD;

public:
	SL() {};
	SLNode* create_SList(int arr[], int N); 
	bool del_SList();
};

#endif 

