/********************************** */
/*@author   SIYUAN                  */
/*@project  C�������ݽṹ˳��ջ��ʵ�� */
/*@date     2024/10/29              */
/********************************** */

#pragma once
#include "config.h"


#define stackMaxsize 20
typedef int stackElemType;


typedef struct
{
	stackElemType* base;
	stackElemType* top;
	int stacksize;
}sqStack;

//��ʼ������
int InitStack(sqStack* stack);

//��ջ
int pushStack(sqStack* stack, stackElemType val);

//��ջ
stackElemType popStack(sqStack* stack);

//��ȡջ��Ԫ��
bool stackGetTop(sqStack* stack, stackElemType* val);