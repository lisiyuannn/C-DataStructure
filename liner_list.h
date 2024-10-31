/********************************** */
/*@author   SIYUAN                  */
/*@project  C语言数据结构顺序表的实现 */
/*@date     2024/10/29              */
/********************************** */

#include <stdio.h>
#include <string.h>

#define SqList_MaxSize   100     //线性表最大容量
typedef int SqList_ElemType;


//线性表
typedef struct
{
    SqList_ElemType data[SqList_MaxSize];
    int cur_length;         //线性表当前容量
}SqList;

//初始化顺序表，将顺序表置空
int InitList(SqList *List);

//创建线性表函数，初始化前n个数据为val
int CreateList(SqList *list, SqList_ElemType val, int n);

//插入元素函数，在位置loc处插入一个元素，loc及以后元素后移
int InsertList(SqList *list, SqList_ElemType val, int loc);

//删除位于loc处的元素，loc以后的元素前移
int DeletList(SqList *list, int loc);

//查找函数，找到第一个元素为val的位置
int LocateElem(SqList *list, SqList_ElemType val);

//倒置顺序表位置
int Reverse(SqList *list);

//清空顺序表
int ClearList(SqList *list);

//打印顺序表
void PrintList(SqList *list);