#include "link_que.h"

void linkQueInit(LinkQueList* list)
{
	list->front = (LinkQuePtr)malloc(sizeof(struct LinkQueNode));
	if (list->front)
	{
		list->rear = list->front;
	}
	else printf("�ڴ�����ʧ�ܣ�");

	return;
}

//���
int pushLinkQue(LinkQueList* queue, LinkQueElemType data)
{
	LinkQuePtr node = (LinkQuePtr)malloc(sizeof(LinkQueNode));
	if (node == NULL)
	{
		printf("�ڴ�����ʧ�ܣ�");
		return 0;
	}
	node->data = data;
	node->next = NULL;

	queue->rear->next = node;
	queue->rear = node;
	return 1;
}

//����
LinkQueElemType popLinkQue(LinkQueList* queue)
{
	if (queue->front == queue->rear)
	{
		printf("�ӿգ�");
		return 0;
	}
	LinkQueElemType data;
	LinkQuePtr node = queue->front;
	queue->front = queue->front->next;
	data = queue->front->data;
	free(node);
	return data;
}

//ȡջ��Ԫ��
LinkQueElemType getLinkQue(LinkQueList* queue)
{
	if (queue->front == queue->rear)
	{
		printf("�ӿգ�");
		return 0;
	}

	return queue->front->next->data;
}

//��ӡ����Ԫ��
void printLinkQue(LinkQueList* queue)
{
	if (queue->front == queue->rear)
	{
		printf("�ӿգ�");
		return;
	}
	LinkQuePtr index = queue->front->next;
	while(index != queue->rear)
	{
		printf("%d ", index->data);
		index = index->next;
	}
	printf("%d\n", index->data);
}






