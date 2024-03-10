#include<stdio.h>
int main(){
    int x,y;
    printf("enter x axis: \n");
    scanf("%d",&x);
    printf("enter y axis: \n");
    scanf("%d",&y);
    if (x>0 && y>0)
    {
        printf("this lies on first quadant");
    }
    else if (x<-0 && y>0)
    {
        printf("this lies on second quadant");
    }
    else if (x<-0 && y<-0)
    {
        printf("this lies on third quadant");
    }
    else if (x>0 && y<-0)
    {
        printf("this lies on forth quadant");
    }
    
        
    
    return 0;
}