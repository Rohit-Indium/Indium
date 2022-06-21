//rohit-nithish forever
#include<stdio.h>
#include<stdlib.h>
struct rev
{
    int r,x;
    struct rev*next;
}
main()
{
    int n,i,flag=0,item,flag1=0,x;
    struct rev*head,*new_node,*temp,*temp1,*temp2;
    printf("\nEnter the total nuber of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)//creation of N nodes
    {
        new_node=(struct emp *)malloc(sizeof(struct rev));
        printf("\nEnter the number:\n");
        scanf("%d",&new_node->r);
        if(flag==0)
        {
            head=new_node;
            new_node->next=0;
            temp=new_node;
            flag++;
        }
        else
        {
            flag++;
            temp->next=new_node;
            new_node->next=0;
            temp=new_node;
        }
    }
    temp1=head;
    flag=0;
    for(i=0;i<=n;i++)
    {
        temp2=temp1;
        temp1=temp1->next;
        if(flag==0)
        {
            temp2->next=0;
            flag++;
        }
        else
        {
            temp2->next=x;
        }
        x=temp2;
    }
    head=temp2;

    temp2=head;
    for(i=0;i<=n;i++)
    {
        printf("\n%d\n",temp2->r);
        temp2=temp2->next;
    }
}
