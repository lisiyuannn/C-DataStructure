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
        printf("�����г�ʼ��ʧ�ܣ�");
    }
    else
    {
        printf("���ӳ�ʼ���ɹ���");
    }
    linkQueInit(queue);

    return 0;
}