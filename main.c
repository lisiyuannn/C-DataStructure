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
    //����ѭ���б�
    LinerQueue* queue = NULL;
    queue = initLinerQueue();
    if (!queue)
    {
        printf("ѭ�����г�ʼ��ʧ�ܣ�\n");
        return 0;
    }

    printf("ѭ�����г�ʼ���ɹ���\n");

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