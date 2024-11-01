#include "link_list.h"

LinkList NewLinkList()
{
	//声明头节点
	struct LinkNode *head = (struct LinkNode*)malloc(sizeof(struct LinkNode));
	if (head == NULL)
	{
		printf("内存分配失败！\n");
		return NULL;
	}
	head->data = 0;
	head->next = NULL;

	return head;
}

int LinkListLength(LinkList list)
{
	int sum = 0;
	LinkList index = list;
	index = index->next;
	while (index)
	{
		sum++;
		index = index->next;
	}

	return sum;
}

int LinkListInsert(LinkList list, int loc, int val)
{

	if (list == NULL)
	{
		printf("无效链表\n");
		return 0;
	}
	LinkList index = list;
	if (loc < 0 || loc > LinkListLength(list))
	{
		printf("loc error!\n");
		return 0;		//插入位置越界，返回错误代码
	}

	while (loc--)
	{
		index = index->next;
	}

	struct LinkNode* newNode = (struct LinkNode*)malloc(sizeof(struct LinkNode));
	if (newNode == NULL)
	{
		printf("newNode内存分配失败！");
		return 0;
	}
	else
	{
		newNode->data = val;
		newNode->next = index->next;
		index->next = newNode;
	}
	

	return 1;
}

void LinkListPrint(LinkList list)
{
	struct LinkNode* index = list;
	if ((index->next) == NULL)
	{
		printf("LinkList is empty!\n");
		return;
	}

	index = index->next;
	while (index)
	{
		printf("%d ", index->data);
		index = index->next;
	}
	printf("\n");

	return;
}


int LinkListDel(LinkList list, int loc)
{
	LinkNode* index = list;
	LinkNode* oldNode = NULL;
	if (index->next == NULL)
	{
		printf("LinkList is empty!");
		return 0;
	}

	while (loc--)
	{
		index = index->next;
	}

	oldNode = index->next;
	index->next = oldNode->next;
	free(oldNode);
	return 1;
}

int LinkListFind(LinkList list, int val)
{
	LinkNode* index = list;
	int loc = 0;
	if (index == NULL)
	{
		printf("Invalid LinkList!\n");
		return -1;
	}
	else
	{
		if (index->next == NULL)
		{
			printf("LinkList is empty!");
			return -1;
		}
		else
		{
			index = index->next;
			while (index)
			{
				if (val == index->data)
				{
					return loc;
				}
				index = index->next;
				loc++;
			}
			if (index == NULL)
			{
				printf("Target does not exist!\n");
				return -1;
			}
			return -1;
		}
	}
}