#include "liner_stack.h"


int InitStack(sqStack* stack)
{
	if (stack == NULL)
	{
		printf("¿ÕÖ¸Õë\n");
		return 0;
	}

	stack->base = (stackElemType*)malloc(stackMaxsize * sizeof(stackElemType));
	if (stack->base == NULL)
	{
		printf("ÄÚ´æ·ÖÅäÊ§°Ü\n");
		return 0;
	}

	stack->top = stack->base;
	stack->stacksize = stackMaxsize;
	return 1;
}

int pushStack(sqStack* stack, stackElemType val)
{
	if (stack->stacksize == 0)
	{
		printf("Õ»Âú£¡²åÈëÊ§°Ü£¡\n");
		return 0;
	}
	stack->stacksize--;
	*(stack->top) = val;
	stack->top++;
	return 1;
}

stackElemType popStack(sqStack* stack)
{
	if (stack->stacksize == stackMaxsize)
	{
		printf("Õ»¿Õ£¡\n");
		return -1;
	}

	stackElemType data;
	stack->top--;
	data = *(stack->top);
	
	return data;
}

bool stackGetTop(sqStack* stack, stackElemType* val)
{
	if (stack->stacksize == stackMaxsize)
	{
		printf("Õ»¿Õ£¡\n");
		return false;
	}
	
	stackElemType* index = stack->top;
	index -= 1;
	*val = *(index);

	return true;
}