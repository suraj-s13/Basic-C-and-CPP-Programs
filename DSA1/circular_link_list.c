#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;

};

int main()
{
    int n,a;
    scanf("%d %d",&n,&a);
    struct node* head=(struct node*)malloc(sizeof(struct node)),*ptr;
    head->data=a;
    head->next=NULL;
    ptr=head;
    n--;
    while (n--)
    {
        scanf("%d",&a);
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=a;
        temp->next=NULL;
        ptr->next..3
    }
    

return 0;
}