#include "link_stack.h"

LinkStack initLinkStack(void)
{
	LinkStack stack = (LinkStack)malloc(sizeof(struct LinkStack));
	LinkStackNode node = (LinkStackNode)malloc(sizeof(struct LinkStackNode));
	node->prior = NULL;
	node->next = NULL;
	stack->base = node;
	stack->top = node;
	stack->LinkStackSize = LINKSTACK_MAXSIZE;
	return stack;
}


int pushLinkStack(LinkStack stack, LinkStackElemType val)
{
	if (stack->LinkStackSize <= 0)
	{
		printf("Õ»Âú£¡\n");
		return 0;
	}

	stack->top->data = val;
	LinkStackNode node = (LinkStackNode)malloc(sizeof(struct LinkStackNode));
	if (node == NULL)
	{
		printf("ÄÚ´æÉêÇëÊ§°Ü£¡\n");
		return 0;
	}
	stack->top->next = node;
	node->prior = stack->top;
	node->next = NULL;
	stack->top = node;
	stack->LinkStackSize -= 1;
	return 1;
}


LinkStackElemType popLinkStack(LinkStack stack)
{
	if (stack->LinkStackSize == LINKSTACK_MAXSIZE)
	{
		printf("Õ»¿Õ£¡\n");
		return 0;
	}

	LinkStackNode node = stack->top;
	stack->top = stack->top->prior;
	stack->top->next = NULL;
	stack->LinkStackSize += 1;
	free(node);
	return stack->top->data;
}


LinkStackElemType getLinkStack(LinkStack stack)
{
	if (stack->LinkStackSize == LINKSTACK_MAXSIZE)
	{
		printf("Õ»¿Õ£¡\n");
		return 0;
	}

	return stack->top->prior->data;
}