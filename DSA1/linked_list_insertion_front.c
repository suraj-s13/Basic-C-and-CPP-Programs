#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linklist(struct node *ptr){

    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr-> data);
        ptr = ptr->next;
    }
    
    
};

struct node * insertatfirst(struct node* head, int data){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));

    ptr->next = head;
    ptr->data = data;
    return ptr;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 13;
    third->next = fourth;
    fourth->data= 14;
    fourth->next = NULL;

    linklist(head);
    
    head = insertatfirst(head, 01);
    linklist(head);

return 0;
}