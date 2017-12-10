#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

typedef struct node
{
	char data;
	struct node *pre, *next;
}DLNode;

class DL
{
public:
	DLNode *HEAD;

public:
	DL(){};
	DLNode * create_DList();    //创建双向链表函数
	void show_DList();                  //读取双向链表
    bool del_DList();                  //清空链表
};

#endif