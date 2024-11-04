#pragma once

#include "config.h"


#define LINKSTACK_MAXSIZE 10
typedef int LinkStackElemType;


typedef struct LinkStackNode
{
	LinkStackElemType data;
	struct LinkStackNode* next;
	struct LinkStackNode* prior;
}*LinkStackNode;


typedef struct LinkStack
{
	LinkStackNode base;	//ջ��
	LinkStackNode top;		//ջ��
	int LinkStackSize;
}*LinkStack;


//��ջ��ʼ������
LinkStack initLinkStack(void);

//��ջ
int pushLinkStack(LinkStack stack, LinkStackElemType val);

//��ջ
LinkStackElemType popLinkStack(LinkStack stack);

//��ȡջ��Ԫ��
LinkStackElemType getLinkStack(LinkStack stack);