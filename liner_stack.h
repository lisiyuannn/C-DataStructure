/********************************** */
/*@author   SIYUAN                  */
/*@project  C语言数据结构顺序栈的实现 */
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

//初始化函数
int InitStack(sqStack* stack);

//入栈
int pushStack(sqStack* stack, stackElemType val);

//出栈
stackElemType popStack(sqStack* stack);

//获取栈顶元素
bool stackGetTop(sqStack* stack, stackElemType* val);