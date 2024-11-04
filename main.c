/********************************************/
/*  @author SIYUAN                          */
/********************************************/

#include "config.h"
#include "liner_list.h"
#include "link_list.h"
#include "liner_stack.h"
#include "link_stack.h"

int main(void)
{
    //��ʼ����ջ
    LinkStack stack;
    stack = initLinkStack();
    if (stack == NULL)
    {
        printf("stack == NULL!");
    }
    printf("init success!\n");

    if (!pushLinkStack(stack, 1))
    {
        printf("��ջʧ�ܣ�\n");
    }
    if (!pushLinkStack(stack, 2))
    {
        printf("��ջʧ�ܣ�\n");
    }
    if (!pushLinkStack(stack, 3))
    {
        printf("��ջʧ�ܣ�\n");
    }

    int val = popLinkStack(stack);
    printf("%d\n", val);

    printf("%d\n", getLinkStack(stack));




    return 0;
}