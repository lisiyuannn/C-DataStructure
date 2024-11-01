/********************************** */
/*@author   SIYUAN                  */
/*@project  C语言数据结构顺序表的实现 */
/*@date     2024/10/29              */
/********************************** */

#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int ElemType;

//节点定义
typedef struct LinkNode{
	ElemType data;
	struct LinkNode* next;
}LinkNode, *LinkList;

//初始化函数
LinkList NewLinkList();

//获取单链表长度函数，不算头节点，它没有数据
int LinkListLength(LinkList list);

//单链表插入节点，位置从0开始
int LinkListInsert(LinkList list, int loc, int val);

//打印链表
void LinkListPrint(LinkList list);

//删除链表节点
int LinkListDel(LinkList list, int loc);

//查找链表中第一个值为val的数据
int LinkListFind(LinkList list, int val);
