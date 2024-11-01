/********************************************/
/*  @author SIYUAN                          */
/********************************************/

#include <stdio.h>
#include <string.h>
#include "liner_list.h"
#include "link_list.h"

int main(void)
{
    
    LinkList head = NULL;
    head = NewLinkList();
    if (head == NULL)
    {
        printf("New LinkList Filed!");
        return 0;
    }
    //printf("%d", head->data);
    LinkListPrint(head);
    LinkListInsert(head, 0, 0);
    LinkListPrint(head);
    LinkListInsert(head, 0, 1);
    LinkListInsert(head, 0, 2);
    LinkListInsert(head, 0, 3);
    LinkListInsert(head, 0, 4);
    LinkListPrint(head);
    printf("链表长度为：%d\n", LinkListLength(head));
    LinkListDel(head, 0);
    LinkListPrint(head);
    LinkListDel(head, LinkListLength(head) - 1);
    LinkListPrint(head);
    printf("loc is %d\n", LinkListFind(head, 0));
    printf("loc is %d\n", LinkListFind(head, 2));
    printf("loc is %d\n", LinkListFind(head, 3));





    return 0;
}