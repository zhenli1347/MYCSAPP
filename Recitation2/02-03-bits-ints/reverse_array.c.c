 #include<stdio.h>
   2 #include<stdlib.h>
   3 #define MAX 10 
   4 #include<time.h>
   5 void
   6 inplace_swap(int *x,int* y)
   7 {
   8     *y=*x^*y;
   9     *x=*x^*y;
  10     *y=*x^*y;
  11 }
  12 
  13 void
  14 reverse_array(int a[],int cnt)
  15 {
  16     int first,last;
  17     for(first=0,last=cnt-1;first<last;first++,last--){
  18         inplace_swap(&a[first],&a[last]);
  19     }
  20 }
  21 void print_array(int a[],int len)
  22 {
  23     int i;
  24     for(i=0;i<len;i++){
  25         printf("%d ",a[i]);
  26     }
  27     printf("\n");
  28 }
  29 int
  30 main()
  31 {
  32     srand((unsigned)time(NULL));
  33     int array[MAX];
  34     int i;
  35     for(i=0;i<MAX;i++){
  36         array[i]=rand()%100;
  37     }
  38     print_array(array,MAX);
  39     reverse_array(array,MAX);
  40     print_array(array,MAX);
  41     return 0;
  42 }
                       