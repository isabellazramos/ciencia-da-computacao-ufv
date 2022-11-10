//#include "../Header/queue.h"
#include "../Header/queue.h"

void initializeQueue(QueueT *Queue){
    Queue->Front = (Pointer)malloc(sizeof(CellT));
    Queue->Behind = Queue->Front;
    Queue->Front->Next = NULL;
}

int checkEmptyQueue(QueueT Queue){
    return(Queue.Front == Queue.Behind);
}

void toQueue(QueueT *Queue, PointerType Item){
    Queue->Behind->Next= (Pointer)malloc(sizeof(CellT));
    Queue->Behind = Queue->Behind->Next;
    Queue->Behind->Next = NULL;
    Queue->Behind->Item = Item;
}

void deQueue(QueueT *Queue, PointerType *Item){
    Pointer Aux;
    if(checkEmptyQueue(*Queue)){
        printf("Error: The queue is empty.\n");
        return;
    }
    Aux = Queue->Front;
    Queue->Front = Queue->Front->Next;
    *Item = Queue->Front->Item;
    free(Aux);
}

