#pragma once
#include "config.h"

#define QueMaxSize 11

typedef int QueElemType;

typedef struct
{
	QueElemType data[QueMaxSize];
	int front, rear;
}LinerQueue;

//循环队列初始化
LinerQueue* initLinerQueue();

//判断队列是否为空
int isEmptyQue(LinerQueue* queue);

//判断队列是否已满
int isFullQue(LinerQueue* queue);

//入队
int pushQueue(LinerQueue* queue, int val);

//出队
QueElemType popQueue(LinerQueue* queue);

//获取队头元素
QueElemType getFrontQue(LinerQueue* queue);

//获取队尾元素
QueElemType getRearQue(LinerQueue* queue);
