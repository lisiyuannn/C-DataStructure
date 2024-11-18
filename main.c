/********************************************/
/*  @author SIYUAN                          */
/********************************************/

#include "config.h"
#include "liner_list.h"
#include "link_list.h"
#include "liner_stack.h"
#include "link_stack.h"
#include "liner_queue.h"
#include "link_que.h"

int main(void)
{
    LinkQueList* queue = (LinkQueList*)malloc(sizeof(LinkQueList));
    if (queue == NULL)
    {
        printf("链队列初始化失败！");
    }
    else
    {
        printf("链队初始化成功！\n");
    }
    linkQueInit(queue);

    pushLinkQue(queue, 1);
    pushLinkQue(queue, 2);
    pushLinkQue(queue, 3);
    pushLinkQue(queue, 4);
    pushLinkQue(queue, 5);
    printLinkQue(queue);
    popLinkQue(queue);
    printLinkQue(queue);
    popLinkQue(queue);
    printLinkQue(queue);
    pushLinkQue(queue, 6);
    printLinkQue(queue);
    pushLinkQue(queue, 7);
    printLinkQue(queue);

    return 0;
}