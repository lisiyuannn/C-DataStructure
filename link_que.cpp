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





