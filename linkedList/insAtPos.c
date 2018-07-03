#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;

void print(){
    struct node * temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void insert(int x,int p){
	int i;
	struct node * temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	
	if(p == 1){
    	
         temp->next = head;
         head = temp;        
    }
    else{
    	struct node * ptr = head;
    	for(i=0;i<p-2;i++){
    		ptr = ptr->next;   		
    	}
    	// struct node * temp1 = ptr;
    	// ptr = temp;
    	// ptr->next = temp1;
    	temp->next = ptr->next;
    	ptr->next = temp; 
    }

}


int main(void) {
	// your code goes here
	head = NULL;
	// int n,i,x,p;
	// scanf("%d",&n);


	// for(i=0;i<n;i++){
	//  scanf("%d",&x);
	//  insert(x);
	//  print();
	// }
	insert(2,1);//2
	print();
	printf("\n");
	insert(3,2);//2 3
	print();
	printf("\n");
	insert(5,1);//5 2 3
	print();
	printf("\n");
	insert(6,4);//5 2 3 6
	print();
	printf("\n");

	return 0;
}

