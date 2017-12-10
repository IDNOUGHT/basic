# Single-List

简单的单向链表
结构体struct SLNode :
    数据data
    下一结点指针next
类 SL:
    头结点指针HEAD
    create_SList(int arr[], int N) 创建链表函数，输入数组arr、元素个数N
    del_SList() 删除链表函数，若删除成功返回true
