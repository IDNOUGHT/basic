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
	DLNode * create_DList();    //����˫��������
	void show_DList();                  //��ȡ˫������
    bool del_DList();                  //�������
};

#endif