#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void linktransversal(struct Node*ptr){
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);

        ptr=ptr->next;



    }
}

struct Node* delete_beg(struct Node *head){
    struct Node*ptr=head;
   head=head->next;
   free(ptr);
    
    return head;
}
struct Node* delete_end(struct Node *head){
    struct Node*p=head;
     struct Node*q=head->next;
   while(q->next!=NULL)
   {
   p=p->next;
   q=q->next;
   }
   p->next=NULL;
   free(q);
    
    return head;
}

int main(){


    struct Node* head;
    struct Node * second;
    struct Node * third;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
   

   head->data=5;
   head->next= second;


   second->data=10;
   second->next=third;


   third->data=15;
   third->next=NULL;
   printf("Before Deletion\n");

    linktransversal(head);
    head= delete_beg(head);
    printf("After Deletion\n");
    linktransversal(head);
    printf("Delete at end\n");
    head=delete_end(head);
    linktransversal(head);
}
