#include "liner_queue.h"

LinerQueue* initLinerQueue()
{
	LinerQueue* queue = NULL;
	queue = (LinerQueue*)malloc(sizeof(LinerQueue));
	if (queue == NULL)
	{
		printf("循环队列内存分配失败！\n");
		return NULL;
	}

	queue->front = 0;
	queue->rear = 0;

	return queue;
}


int isEmptyQue(LinerQueue* queue)
{
	if (queue->front == queue->rear)
	{
		printf("循环队列为空！\n");
		return 1;
	}
	else
	{
		printf("循环队列不为空！\n");
		return 0;
	}
}


int isFullQue(LinerQueue* queue)
{
	int index;
	index = queue->front;
	if ((index + 1) % QueMaxSize == queue->rear)
	{
		printf("循环队列已满！\n");
		return 1;
	}
	else
	{
		printf("循环队列不满！\n");
		return 0;
	}
}


int pushQueue(LinerQueue* queue, int val)
{
	//先判断队列是否已满
	if (isFullQue(queue))
	{
		return 0;	//入队失败
	}

	queue->data[queue->front] = val;
	queue->front += 1;
	queue->front %= QueMaxSize;

	return 1;	//入队成功
}

QueElemType popQueue(LinerQueue* queue)
{
	//先判断队列是否为空
	if (isEmptyQue(queue))
	{
		return 0;	//出队失败
	}

	QueElemType data = queue->data[queue->rear];
	queue->rear += 1;
	queue->rear %= QueMaxSize;
	return data;
}

QueElemType getFrontQue(LinerQueue* queue)
{
	if (isEmptyQue(queue))
	{
		return 0;	//队列为空
	}

	int index = queue->front;
	index += QueMaxSize;
	index -= 1;
	index %= QueMaxSize;
	return queue->data[index];
}


QueElemType getRearQue(LinerQueue* queue)
{
	if (isEmptyQue(queue))
	{
		return 0;	//队列为空
	}

	return queue->data[queue->rear];
}




