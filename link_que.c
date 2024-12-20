#include "link_que.h"

void linkQueInit(LinkQueList* list)
{
	list->front = (LinkQuePtr)malloc(sizeof(struct LinkQueNode));
	if (list->front)
	{
		list->rear = list->front;
	}
	else printf("内存申请失败！");

	return;
}

//入队
int pushLinkQue(LinkQueList* queue, LinkQueElemType data)
{
	LinkQuePtr node = (LinkQuePtr)malloc(sizeof(LinkQueNode));
	if (node == NULL)
	{
		printf("内存申请失败！");
		return 0;
	}
	node->data = data;
	node->next = NULL;

	queue->rear->next = node;
	queue->rear = node;
	return 1;
}

//出队
LinkQueElemType popLinkQue(LinkQueList* queue)
{
	if (queue->front == queue->rear)
	{
		printf("队空！");
		return 0;
	}
	LinkQueElemType data;
	LinkQuePtr node = queue->front;
	queue->front = queue->front->next;
	data = queue->front->data;
	free(node);
	return data;
}

//取栈顶元素
LinkQueElemType getLinkQue(LinkQueList* queue)
{
	if (queue->front == queue->rear)
	{
		printf("队空！");
		return 0;
	}

	return queue->front->next->data;
}

//打印队列元素
void printLinkQue(LinkQueList* queue)
{
	if (queue->front == queue->rear)
	{
		printf("队空！");
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






