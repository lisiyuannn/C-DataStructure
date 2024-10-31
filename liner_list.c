#include "liner_list.h"

int InitList(SqList *List)
{
    memset((*List).data, 0, sizeof(SqList));
    List->cur_length = 0;
    return 1;
}


int CreateList(SqList *list, SqList_ElemType val, int n)
{
    if (n < 0 || n > SqList_MaxSize) return 0;  //非法初始化数据长度

    for (int i = 0; i < n; i++)
    {
        (*list).data[i] = val;
    }
    (*list).cur_length = n;
    return 1;
}


int InsertList(SqList *list, SqList_ElemType val, int loc)
{
    if (loc < 0 || loc > (*list).cur_length) return 0;      //非法的插入位置
    if ((*list).cur_length >= SqList_MaxSize) return 0;     //顺序表已满

    int i;

    for (i = (*list).cur_length-1; i >= loc; i--)
    {
        (*list).data[i+1] = (*list).data[i];
    }

   
    (*list).data[loc] = val;
    (*list).cur_length += 1;
    return 1;
    

}


int DeletList(SqList *list, int loc)
{
    if ((*list).cur_length == 0) return 0;      //无数据可删
    if ((*list).cur_length == 1)
    {
        (*list).cur_length = 0; 
        return 1;                               //删除成功
    }

    if (loc < 0 || loc > (*list).cur_length-1) return 0;     //删除地址非法

    int i = loc;                //定位删除元素位置
                  
    for ( ; i < (*list).cur_length-1; i++)
    {
        (*list).data[i] = (*list).data[i+1];
    }

    (*list).cur_length -= 1;
    return 1;
}


int LocateElem(SqList *list, SqList_ElemType val)
{
    for (int i = 0; i < (*list).cur_length; i++)
    {
        if ((*list).data[i] == val)
        {
            return i;                   //返回元素位置
        }
    }

    return -1;
}


int Reverse(SqList *list)
{
    if ((*list).cur_length <= 1) return 1;

    int temp;

    for (int i = 0; i < (*list).cur_length; i++)
    {
        if (i < (*list).cur_length-1-i)
        {
            temp = (*list).data[i];
            (*list).data[i] = (*list).data[(*list).cur_length-i-1];
            (*list).data[(*list).cur_length-i-1] = temp;
        }
        else break;
    }

    return 1;
}


int ClearList(SqList *list)
{
    (*list).cur_length = 0;
    return 1;
}

void PrintList(SqList *list)
{
    for (int i = 0; i <= (*list).cur_length-1; i++)
    {
        printf("%d", (*list).data[i]);
        if (i < (*list).cur_length-1)
        {
            printf(" ");
        }
    }
    printf("\n");
}


