/********************************** */
/*@author   SIYUAN                  */
/*@project  C�������ݽṹ˳����ʵ�� */
/*@date     2024/10/29              */
/********************************** */

#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int ElemType;

//�ڵ㶨��
typedef struct LinkNode{
	ElemType data;
	struct LinkNode* next;
}LinkNode, *LinkList;

//��ʼ������
LinkList NewLinkList();

//��ȡ�������Ⱥ���������ͷ�ڵ㣬��û������
int LinkListLength(LinkList list);

//���������ڵ㣬λ�ô�0��ʼ
int LinkListInsert(LinkList list, int loc, int val);

//��ӡ����
void LinkListPrint(LinkList list);

//ɾ������ڵ�
int LinkListDel(LinkList list, int loc);

//���������е�һ��ֵΪval������
int LinkListFind(LinkList list, int val);
