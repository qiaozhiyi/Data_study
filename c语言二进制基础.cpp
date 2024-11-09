//数据结构的单链表的创建
#include <stdio.h>
#define  ElemType int
typedef struct Lnode
{
	ElemType data;
	struct Lnode *next;
}LNode,*LinkList;

//初始化一个空的单链表
