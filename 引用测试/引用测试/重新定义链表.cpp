

#define ElemType int
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
}*Link,*Position;

typedef struct
{
	Link head, tail;//定义指向链表的头结点和最后一个结点的
	int len;//定义链表的长度，在单链表中则没有
};