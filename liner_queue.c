#include "liner_queue.h"

LinerQueue* initLinerQueue()
{
	LinerQueue* queue = NULL;
	queue = (LinerQueue*)malloc(sizeof(LinerQueue));
	if (queue == NULL)
	{
		printf("ѭ�������ڴ����ʧ�ܣ�\n");
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
		printf("ѭ������Ϊ�գ�\n");
		return 1;
	}
	else
	{
		printf("ѭ�����в�Ϊ�գ�\n");
		return 0;
	}
}


int isFullQue(LinerQueue* queue)
{
	int index;
	index = queue->front;
	if ((index + 1) % QueMaxSize == queue->rear)
	{
		printf("ѭ������������\n");
		return 1;
	}
	else
	{
		printf("ѭ�����в�����\n");
		return 0;
	}
}


int pushQueue(LinerQueue* queue, int val)
{
	//���ж϶����Ƿ�����
	if (isFullQue(queue))
	{
		return 0;	//���ʧ��
	}

	queue->data[queue->front] = val;
	queue->front += 1;
	queue->front %= QueMaxSize;

	return 1;	//��ӳɹ�
}

QueElemType popQueue(LinerQueue* queue)
{
	//���ж϶����Ƿ�Ϊ��
	if (isEmptyQue(queue))
	{
		return 0;	//����ʧ��
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
		return 0;	//����Ϊ��
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
		return 0;	//����Ϊ��
	}

	return queue->data[queue->rear];
}




