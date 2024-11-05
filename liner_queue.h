#pragma once
#include "config.h"

#define QueMaxSize 11

typedef int QueElemType;

typedef struct
{
	QueElemType data[QueMaxSize];
	int front, rear;
}LinerQueue;

//ѭ�����г�ʼ��
LinerQueue* initLinerQueue();

//�ж϶����Ƿ�Ϊ��
int isEmptyQue(LinerQueue* queue);

//�ж϶����Ƿ�����
int isFullQue(LinerQueue* queue);

//���
int pushQueue(LinerQueue* queue, int val);

//����
QueElemType popQueue(LinerQueue* queue);

//��ȡ��ͷԪ��
QueElemType getFrontQue(LinerQueue* queue);

//��ȡ��βԪ��
QueElemType getRearQue(LinerQueue* queue);
