#include <stdio.h>
#include <stdlib.h>
typedef struct count
{
    int data;
    struct count *next;
} NODE;

NODE *creatlink(int n)
{
    NODE *h = NULL, *p, *s;
    p = (NODE *)malloc(sizeof(NODE));
    h = p;
    p->next = NULL;
    for (int i = 1; i <= n; i++)
    {
        /*创建下一个结构体s并赋值*/
        s = (NODE *)malloc(sizeof(NODE));
        s->data = i;
        s->next = p->next;

        /*p指向下个结构体s*/
        p->next = s;
        p = p->next; //下一个p指针初始化赋值为s
    }
    /**********found***********/
    return h;
}
void outlink(NODE *h)
{
    NODE *p;
    p = h->next;
    while (p)
    {
        printf("->%d ", p->data);
        p = p->next;
    }
}
int main()
{
    NODE *head;
    head = creatlink(10);
    outlink(head);
    getchar();
    return 0;
}
