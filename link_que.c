#include "link_que.h"

void linkQueInit(LinkQueList* list)
{
	list->front = (LinkQuePtr)malloc(sizeof(struct LinkQueNode));
	if (list->front)
	{
		list->rear = list->front;
	}
	else printf("ÄÚ´æÉêÇëÊ§°Ü£¡");

	return;
}

//Èë¶Ó
int pushLinkQue(LinkQueList* queue, LinkQueElemType data)
{
	LinkQuePtr node = (LinkQuePtr)malloc(sizeof(LinkQueNode));
	if (node == NULL)
	{
		printf("ÄÚ´æÉêÇëÊ§°Ü£¡");
		return 0;
	}
	node->data = data;
	node->next = NULL;

	queue->rear->next = node;
	queue->rear = node;
	return 1;
}

//³ö¶Ó
LinkQueElemType popLinkQue(LinkQueList* queue)
{
	if (queue->front == queue->rear)
	{
		printf("¶Ó¿Õ£¡");
		return 0;
	}
	LinkQueElemType data;
	LinkQuePtr node = queue->front;
	queue->front = queue->front->next;
	data = queue->front->data;
	free(node);
	return data;
}

//È¡Õ»¶¥ÔªËØ
LinkQueElemType getLinkQue(LinkQueList* queue)
{
	if (queue->front == queue->rear)
	{
		printf("¶Ó¿Õ£¡");
		return 0;
	}

	return queue->front->next->data;
}

//´òÓ¡¶ÓÁĞÔªËØ
void printLinkQue(LinkQueList* queue)
{
	if (queue->front == queue->rear)
	{
		printf("¶Ó¿Õ£¡");
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






