

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  //int check=99;
  Node *new_node=(Node*) malloc(sizeof(Node));
  if(new_node){ 
    new_node->data=x;
  
    new_node->nextPtr=NULL;
  
    if(q->size==0) {q->headPtr = new_node;}
  
  
    else q->tailPtr->nextPtr = new_node;
    q->tailPtr = new_node; 

    q->size++;
    /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
   //int check=99;
   NodePtr t=q->headPtr;
   if(t){
   int value= t->data;
   q->headPtr = t->nextPtr;
    
   if(q->size==1) { q->tailPtr == NULL; /*check=1; printf("%d ",check );*/}
   free(t);
   q->size--; 
   //printf("size : %d ",q->size);    
       /*Finish dequeue */
   return value;
   }
   q->size--;
   printf("Empty queue\n");
   
   return 0;
}

