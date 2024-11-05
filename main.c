/********************************************/
/*  @author SIYUAN                          */
/********************************************/

#include "config.h"
#include "liner_list.h"
#include "link_list.h"
#include "liner_stack.h"
#include "link_stack.h"
#include "liner_queue.h"

int main(void)
{
    //创建循环列表
    LinerQueue* queue = NULL;
    queue = initLinerQueue();
    if (!queue)
    {
        printf("循环队列初始化失败！\n");
        return 0;
    }

    printf("循环队列初始化成功！\n");

    isEmptyQue(queue);

    isFullQue(queue);

    pushQueue(queue, 1);
    pushQueue(queue, 2);
    pushQueue(queue, 3);
    pushQueue(queue, 4);
    pushQueue(queue, 5);
    pushQueue(queue, 6);
    pushQueue(queue, 7);
    pushQueue(queue, 8);
    pushQueue(queue, 9);
    pushQueue(queue, 10);

    printf("%d\n", getFrontQue(queue));
    printf("%d\n", getRearQue(queue));


    printf("%d\n", popQueue(queue));
    printf("%d\n", popQueue(queue));
    printf("%d\n", popQueue(queue));
    printf("%d\n", popQueue(queue));
    printf("%d\n", popQueue(queue));
    printf("%d\n", popQueue(queue));
    printf("%d\n", popQueue(queue));
    printf("%d\n", popQueue(queue));
    printf("%d\n", popQueue(queue));
    printf("%d\n", popQueue(queue));
    printf("%d\n", popQueue(queue));
    printf("%d\n", popQueue(queue));


    return 0;
}