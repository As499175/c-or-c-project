#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#pragma(1)

struct node
{
    int data;
    struct node *link;
};

void add_the_data(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        /* code */
        ptr = ptr->link;
    }

    ptr->link = temp;
}

void print_the_data(struct node *head)
{
    if (head == NULL)
    {
        /* code */
        printf("Linked list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        /* code */
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

struct node* del_hole_list(struct node *head )
{
    struct node* temp = NULL;
    temp = head;
    
    while (temp != NULL)
    {
        /* code */
        temp = temp->link;
        free(head);
        head = temp;
    }
    

    return head;

}

int main()
{

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;

    add_the_data(head, 33);
    add_the_data(head, 67);
    add_the_data(head, 78);
    add_the_data(head, 99);
    printf("Before the deleting the last node and data :\n");
    print_the_data(head);
    printf("\n\n");
    printf("After the deleting the last node and data :\n");
    head = del_hole_list(head);
    print_the_data(head);
    printf("\n\n");
    getch();
    return 0;
}