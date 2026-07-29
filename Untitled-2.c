#include<stdio.h>
#include<stdlib.h>
typedef int element;
typedef struct stack{
int maxsize;
element*data;
int top1,top2,top3,bottom
}stack;
stack create(int n)
{ 
    element*data=(element*)malloc sizeof(n*(element));
    stack s;
    s.maxsize=n;
    s.top1=-1;
    s.top3=n;
    s.top2=n/3;
    s.bottom=n/3;
    return s;
}
int isFull(stack s)
{
    return (s.top1==s.bottom-1) && (s.top2==s.top3-1);
}
int isEmpty(stack s, int nb)
{
    if(nb==1)
    {return s.top1==-1;}
    else if(nb==3)
    {return s.top3==s.maxsize;}
    else if(nb==2)
    {return s.top2==s.bottom;
    else return -1;}
}
int push(stack *s,element e)
{
    if(isFull(*s)) return 0;
    if (nb==1)
    {if(s->top1!=s->bottom)
    { s->data[++(s->top1)]=e;
        }}
        else {
            while(s->top1=s->bottom){
        s->data[++(s->top3)]=e;}
    else if (nb==2){while(s->top2!=s->top3){
    s->data[--(s->top3)]=e;
     } }
     s->data[--(s->bottom)]=e;
     return 1;}

     int pop(stack*s,int nb)
     {
        if(isEmpty(*s,nb))
    return 0;
    if(nb==1)
    {--(s->top1);
    return 1;}
     else if(nb==2)
    {++(s->top2);
    return 1;}
    else return -1;
     }
    

