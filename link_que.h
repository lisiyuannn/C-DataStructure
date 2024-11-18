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

//初始化队列
void linkQueInit(LinkQueList*);

//入队函数
int pushLinkQue(LinkQueList* queue, LinkQueElemType data);

//出队函数
LinkQueElemType popLinkQue(LinkQueList* queue);

//取栈顶元素
LinkQueElemType getLinkQue(LinkQueList* queue);

//打印队列元素
void printLinkQue(LinkQueList* queue);

