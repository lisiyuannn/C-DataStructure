/********************************** */
/*@author   SIYUAN                  */
/*@project  C�������ݽṹ˳����ʵ�� */
/*@date     2024/10/29              */
/********************************** */

#include <stdio.h>
#include <string.h>

#define SqList_MaxSize   100     //���Ա��������
typedef int SqList_ElemType;


//���Ա�
typedef struct
{
    SqList_ElemType data[SqList_MaxSize];
    int cur_length;         //���Ա�ǰ����
}SqList;

//��ʼ��˳�����˳����ÿ�
int InitList(SqList *List);

//�������Ա�������ʼ��ǰn������Ϊval
int CreateList(SqList *list, SqList_ElemType val, int n);

//����Ԫ�غ�������λ��loc������һ��Ԫ�أ�loc���Ժ�Ԫ�غ���
int InsertList(SqList *list, SqList_ElemType val, int loc);

//ɾ��λ��loc����Ԫ�أ�loc�Ժ��Ԫ��ǰ��
int DeletList(SqList *list, int loc);

//���Һ������ҵ���һ��Ԫ��Ϊval��λ��
int LocateElem(SqList *list, SqList_ElemType val);

//����˳���λ��
int Reverse(SqList *list);

//���˳���
int ClearList(SqList *list);

//��ӡ˳���
void PrintList(SqList *list);