#include "Array.h"
#include <stdio.h>

int main()
{

     int a[5] = {1,3,5,7,2};
     // 冒泡排序
     printf("冒泡排序\n"); 
     sortByBubble(a,ARRAY_LEN(a));
     for(int index =0; index < ARRAY_LEN(a); index++)
     {
        printf("%d\t",a[index]);
     }
     printf("\n");
     
    // printf("运行时间为：%s\n",);
     // 选择排序 
     int b[5] = {1,3,5,7,2};
     printf("选择排序\n"); 
     sortBySelection(a,ARRAY_LEN(b));
     for(int index =0; index < ARRAY_LEN(b); index++)
     {
        printf("%d\t",a[index]);
     }
     printf("\n");
     
}
