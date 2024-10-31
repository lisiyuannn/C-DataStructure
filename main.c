/********************************************/
/*  @author SIYUAN                          */
/********************************************/

#include <stdio.h>
#include <string.h>
#include "liner_list.h"

int main(void)
{
    SqList mylist;
    InitList(&mylist);
    PrintList(&mylist);
    CreateList(&mylist, 3, 10);
    PrintList(&mylist);

    InsertList(&mylist, 4, 10);
    PrintList(&mylist);

    InsertList(&mylist, 1, 0);
    PrintList(&mylist);

    DeletList(&mylist, 9);
    PrintList(&mylist);

    printf("%d\n", LocateElem(&mylist, 3));

    Reverse(&mylist);
    PrintList(&mylist);

    return 0;
}