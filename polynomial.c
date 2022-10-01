#include<stdio.h>
#include<stdlib.h>
 

//  typedef struct node{
//      float coeff;
//      int expo;
//      struct node *link;
//  }node;
// //  node *head=NULL;


// node *createnew(node* head){
//     int n,i,expo;
//     float coeff;
//     printf("enter number of terms\n");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("enter the ceffiecient\n");
//         scanf("%d",&coeff);
//         printf("enter the exponent\n");
//         scanf("%d",&expo);
//          node *temp=head;
//     node *newnode=(node*)malloc(sizeof(node));
//     newnode->coeff=coeff;
//     newnode->expo=expo;
//     newnode->link=head;

//     if(head==NULL||expo>head->expo){
//         newnode->link=head;
//         head=newnode;
//     }

//     else{
//         while(temp->link!=NULL&&temp->link->expo>expo){
//             temp =temp->link;
//             newnode->link=temp->link;
//             temp->link=newnode;
//             return head;
            
//         }
//         // head = insert(head,coeff,expo);
//         // print(head);
//     }
// }
// }

//     void print(node *head){
//         if(head==NULL){
//             printf("not found\n");
//         }
//         else{
//             node *temp=head;
//             while(temp!=NULL){
//                 printf("%.1fx^%d",temp->coeff,temp->expo);
//                 temp=temp->link;
//             }
//             if(temp!=NULL){
//                 printf("+");
            
//                     printf("\n");
               
//             }
//         }

//     }


// // node *insert(node *head,float coeff,int expo){
// //     node *temp=head;
// //     node *newnode=(node*)malloc(sizeof(node));
// //     newnode->coeff=coeff;
// //     newnode->expo=expo;
// //     newnode->link=NULL;

// //     if(head==NULL||expo>head->expo){
// //         newnode->link=head;
// //         head=newnode;
// //     }

// //     else{
// //         while(temp->link!=NULL&&temp->link->expo>expo){
// //             temp =temp->link;
// //             newnode->link=temp->link;
// //             temp->link=newnode;
// //             return head;
            
// //         }
// //     }

    







//  int main(){
//      node *head =NULL;
//      printf("enter the polynomial\n");
//      head = createnew(head);
//       print(head);
//  }


struct node
{
    int cof;
    int exp;
    struct node *link;
};

struct node * insert(struct node *ptr,struct node *p)
 {
  struct node *temp,*b;
  if(p==NULL)
  p=ptr;
  else
  {
      if((p->exp)<(ptr->exp))
      {
                              ptr->link=p;
                              p=ptr;
      }
      else
      {
          temp=p;
          while((temp!=NULL)||((temp->link->exp)<(ptr->exp)))
          temp=temp->link;
          b=temp->link;
          temp->link=ptr;
          ptr->link=b;
      }
  }
  return p;
  }
struct node * create(struct node *q)
 {
  int i,n;
  printf("enter the number of nodes");
  scanf("%d",&n);
  struct node *ptr=(struct node *)malloc (sizeof(struct node));
  for(i=0;i<n;i++)
  {
                  printf("entre the coefficient and exponent respectivly");
                  scanf("%d%d",&ptr->cof,&ptr->exp);
                  ptr->link=NULL;
                  q=insert(ptr,q);
  }
  return q;
 }




void display(struct node *ptr)
 {
   struct node *temp;
  temp=ptr;
  while(temp!=NULL)
  {
                   printf("%d x ^ %d + ",temp->cof,temp->exp);
                   temp=temp->link;
  }
 }

 int main()
  {
  printf("enter the first polynomial");
  struct node *p1=NULL,*p2=NULL; 
  p1=(struct node *)malloc(sizeof(struct node));
  p2=(struct node *)malloc(sizeof(struct node));

  p1=create(p1);

  printf("entr secon dpolynimial");
  create(p2);

  display(p1);
  display(p2);

//   getch();
  return 0;
 }