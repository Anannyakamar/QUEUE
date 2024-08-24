#include<stdio.h>
#include<stdlib.h>
int main(){
    int CQUEUE[10],MAXSIZE=10,item,front=-1,rear=-1,i,n;
    do{
        printf("Enter your choice:\n1.Insert Item\n2.Delete Item\n3.Display\n4.Exit\n");
        scanf("%d",&n);
    switch(n)
    {
    //Insert
        case 1:
            if ((rear>=MAXSIZE-1 && front ==0)||(front =(rear+1)%MAXSIZE))
			{
            printf("Overflow\n");
            break;
            }
            else{
            printf("Enter an element:\n",item);
            scanf("%d",&item);
            if(front ==-1 && rear==-1)
            front=rear=0;
            else if(rear>=MAXSIZE-1 && front!=0)
            rear==0 || (rear=(rear+1)%MAXSIZE);
             else
               rear=rear+1;
              CQUEUE[rear]=item;
              printf("Item inserted sucessfully\n");
                 }
        break;
    //Delete
        case 2:
            if((front==-1 &&rear==-1)||(front==rear+1)){
            printf("Underflow\n");
            break; 
            }
            else{
            item=CQUEUE[rear];
            if(front==rear){
            front=-1;
            rear=-1;
             }
            else if (front=MAXSIZE-1){
            front ==0 ||( front=(front+1)%MAXSIZE);
            }else{
            front=front +1;
            printf("Item deleted sucessfully");
            }
        }
        break;
    //display
        case 3:
        	if(front<rear){
        		for(i=front;i<=rear;i++)
        		printf("%d",CQUEUE[i]);
			}
			else{
				for(i=front;i<=MAXSIZE-1;i++)
				printf("%d",CQUEUE[i]);
				for(i=0;i<rear;i++)
				printf("%",CQUEUE[i]);
			}
                break;
    //exit
        case 4:
           exit(0);
        default : printf("Wrong Input");
    }
 } while(1);
 return 0;
}