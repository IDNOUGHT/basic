#include <iostream>
#include <cstdlib>
#include "Double_List.h"

DLNode * DL::create_DList()
{
	char ch;
	DLNode* p,*n;  
	HEAD=(DLNode*)malloc(sizeof(DLNode));
	n=HEAD;
	printf("请输入数字，以'#'结束：");
	ch=getchar();
	if(ch!='#') n->data =ch;
	ch=getchar();

	while(ch!='#')
	{
		p=(DLNode*)malloc(sizeof(DLNode));
		p->data =ch;
		p->pre  =n;
		n->next=p;
		n=p;
		ch=getchar();
	}
	n->next=HEAD;
	HEAD->pre =n;

	return HEAD;
}

void DL::show_DList ()
{
	DLNode* p;
	p=HEAD;
	do
	{
		printf("%c",p->data);
		p=p->next;
	}while(p!= HEAD);
	printf("\n");
	do
	{
		printf("%c",p->data);
		p=p->pre ;
	}while(p!= HEAD);
}

bool DL::del_DList ()
{
	DLNode* p=HEAD;
	do
	{
		p=HEAD->next ;
		HEAD->next =p->next; 
		p->next->pre=HEAD;
		free(p);
	}while(p!=HEAD);
	return true;
} 