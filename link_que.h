#pragma once
#include "config.h"

typedef int LinkQueElemType;

typedef struct LinkQueNode
{
	LinkQueElemType data;
	struct LinkQueNode* next;
}LinkQueNode, * LinkQuePtr;

typedef struct
{
	struct LinkQueNode* front;
	struct LinkQueNode* rear;
}LinkQueList;

//��ʼ������
void linkQueInit(LinkQueList*);

//��Ӻ���
int pushLinkQue(LinkQueList* queue, LinkQueElemType data);

//���Ӻ���
LinkQueElemType popLinkQue(LinkQueList* queue);

//ȡջ��Ԫ��
LinkQueElemType getLinkQue(LinkQueList* queue);

//��ӡ����Ԫ��
void printLinkQue(LinkQueList* queue);

