 #include<stdio.h>
 #define TURE 1
 #define FALSE 0
 #define MAXSIZE 32
 void hextobin(unsigned int hex);
//十进制转换为二进制，亦可转换为八进制和十六进制
//（只需将函数中的2更换为8/16），
//进制转换需要将有符号数强制转换为无符号数
//之后再进行除法计算
 
  int
 main(int argc,char* argv[])
 {
     int val=0xFEDCBA98;
     int lval=val<<32;
     int aval=val>>36;
     unsigned int uval=0xFEDCBA98u>>40;
 
     printf("0xFEDCBA98<<32=%x,%d\t",lval,lval);
     hextobin(lval);printf("\n");
     printf("0xFEDCBA98>>36=%x,%d\t",aval,aval); 
     hextobin(aval);    printf("\n");
     printf("0xFEDCBA98>>40=%x,%u\t",uval,uval); 
     hextobin(uval); printf("\n");
 return 0;
 }
 void
 hextobin(unsigned int hex)
 {
     int tem[MAXSIZE]={0};
     int i=0;
     for(;i<MAXSIZE;i++){
         tem[i]=0;
     }
 
     int remainder,quotient;
     int location=0;
     unsigned int hextemp=hex;
     while(hextemp/2||hextemp%2){
         tem[location]=hextemp%2;
         hextemp=hextemp/2;
         location++;
     }
 
     for(i=MAXSIZE-1;i>=0;i--){
                 printf("%d",tem[i]);
         }
 }
 
                             
