#include"dectohob.h"
#include<stdio.h>
#define MAXSIZE 32
void
dectohob(unsigned int dec,int hob)
{
     int tem[MAXSIZE]={0};
     int i=0;
     for(;i<MAXSIZE;i++){
         tem[i]=0;
     }

     int remainder,quotient;
     int location=0;
     unsigned int dectemp=dec;
     while(dectemp/hob||dectemp%hob){
         tem[location]=dectemp%hob;
         dectemp=dectemp/hob;
         location++;
     }

    switch(hob) {
    case 2:
    case 8:
        for(i=MAXSIZE-1;i>=0;i--){
         printf("%d",tem[i]);
         if(i%4==0){
             printf(" ");
         }
        }
         break;
    /*case 16:
        for(i=MAXSIZE-1;i>=0;i--){
        if(tem[i]==10)
            printf("a");
        if(tem[i]==11)
            printf("b");
        if(tem[i]==12)
            printf("c");
        if(tem[i]==13)
            printf("d");
        if(tem[i]==14)
            printf("e");
        if(tem[i]==15)
            printf("f");
        printf("%d",tem[i]);
         }*/
    }
}
