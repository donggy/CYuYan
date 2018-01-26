#ifndef __STACK_H__
#define __STACK_H__
#include <stdio.h>
typedef enum
{
	FALSE, TRUE
} Bool;

typedef struct
{
	size_t length; // 栈的长度，单位字节数
	int *head; // 索引指针
        int *start; // 开始指针
	Bool isFull;
	Bool isEmpty;
	size_t dataCount; // 含有的数据数量
} Stack;

// 初始化一个栈
 Stack init(size_t legth);

 // 将一个数据压入栈
 int push(Stack *stack,int data);

 // 从栈中 弹出一个数据
 int pop(Stack *stack);

 // 释放栈
 int freeStack(Stack *stack);
#endif
