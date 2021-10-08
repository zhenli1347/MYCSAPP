 #include<stdio.h>
   2 int
   3 main(int argc,char* argv[])
   4 {
   5     int i=0x01234567;
   6     char* p=(char*)&i;
   7     int number=0;
   8     for(;number<4;number++){
   9         printf("%p,%x\n",p,*p);
  10         p++;
  11     }
  12     return 0;
  13 }
             