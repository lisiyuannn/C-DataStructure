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
	LinkStackNode base;	//栈底
	LinkStackNode top;		//栈顶
	int LinkStackSize;
}*LinkStack;


//链栈初始化函数
LinkStack initLinkStack(void);

//入栈
int pushLinkStack(LinkStack stack, LinkStackElemType val);

//出栈
LinkStackElemType popLinkStack(LinkStack stack);

//获取栈顶元素
LinkStackElemType getLinkStack(LinkStack stack);