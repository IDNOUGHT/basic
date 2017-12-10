# basic

*简单的单向链表
结构体struct SLNode :
    int型数据data
    下一结点指针next
类 SL:
    头结点指针HEAD
    create_SList(int arr[], int N) 创建链表函数，输入数组arr、元素个数N
    del_SList() 删除链表函数，若删除成功返回true

*快速排序（int型 数组）
递归与分治法思想
递增排序/递减排序

*双向循环链表
结构体struct DLNode：
    char型数据data
    上一结点指针pre
    下一结点指针next
类DL：
    头结点指针HEAD
    create_DList() 创建双向链表函数
    show_DList() 显示双向链表
    del_DList() 清空链表，若删除成功返回true
