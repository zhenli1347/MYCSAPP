#include"dectohob.h"
#include<stdio.h>
#define TURE 1
#define FALSE 0
                                //之后再进行计算
    
 int 
main(int argc,char* argv[])
{
    int val=0xFEDCBA98;
    int lval;
    int rval;
    lval=rval=val;

    unsigned int uval=0xFEDCBA98u;
    unsigned int luval,ruval;
    luval=ruval=uval;
    int i;
    for(i=0;i<=40;i++){
    printf("0xFEDCBA98<<%d=%x,%d\t",i,lval<<i,lval<<i);
    dectohob(lval<<i,2);printf("\n");
    }
    for(i=0;i<=40;i++){
    printf("0xFEDCBA98>>%d=%x,%d\t",i,rval>>i,rval>>i); 
    dectohob(rval>>i,2);printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");



    for(i=0;i<=40;i++){
    printf("0xFEDCBA98u<<%d=%x,%d\t",i,luval<<i,luval<<i);
    dectohob(luval<<i,2);printf("\n");
    }
    for(i=0;i<=40;i++){
    printf("0xFEDCBA98u>>%d=%x,%d\t",i,ruval>>i,ruval>>i); 
    dectohob(ruval>>i,2);printf("\n");
    }
    
    return 0;
}

