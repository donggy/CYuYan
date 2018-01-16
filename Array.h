#ifndef ARRAY
#define ARRAY
  #define ARRAY_LEN(array)  sizeof(array) / sizeof(array[0])
#endif


// 冒泡排序法
void sortByBubble(int a[], int arrayLength);

// 选择排序法
void sortBySelection(int a[], int arrayLength); 
