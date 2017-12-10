#pragma once
#ifndef SINGLE_LIST
#define SINGLE_LIST

typedef struct node
{
	int is_finished;
	int data;
	struct node *next;
}SLNode;

class SL {
public:
	SLNode *HEAD;

public:
	SL() {};
	SLNode* create_SList(int arr[], int N);  //��������������
	bool del_SList();
};

#endif 

