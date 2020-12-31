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

struct Node* insert_any(struct Node *head,int index,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
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
    linktransversal(head);
    head =insert_any(head,1,55);
    linktransversal(head);
}
