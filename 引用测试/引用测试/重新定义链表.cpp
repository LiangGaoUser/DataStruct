

#define ElemType int
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
}*Link,*Position;

typedef struct
{
	Link head, tail;//����ָ�������ͷ�������һ������
	int len;//��������ĳ��ȣ��ڵ���������û��
};