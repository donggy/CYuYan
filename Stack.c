#include "Stack.h"
#include <stdlib.h>

Stack init(size_t length)
{
	Stack stack;
	stack.isFull = FALSE;
	stack.isEmpty = TRUE;
	stack.length = length;
	stack.dataCount = 0;
        stack.head = (int *)malloc(sizeof(int) * length);
	return stack;
}

int push(Stack *stack, int data)
{
    if (NULL != stack->head)
    {
	if (stack->dataCount == 0)
	{
            *stack->head = data;
	    stack->dataCount++;
	}
	else if (stack->dataCount > 0 && stack->dataCount < stack->length)
	{
            stack->head += 1;
	    *stack->head = data;
	    stack->dataCount++;
	}
    }
    return 0;
}

int pop(Stack *stack)
{
    int rtnData = 0;
    if (stack->dataCount > 0 && NULL != stack->head)
    {
  	rtnData = *stack->head;
        if(stack->dataCount > 1)
        {
           stack->head--;
        }
	stack->dataCount--;
    }
    return rtnData;
}

int freeStack(Stack *stack)
{
    if (NULL != stack->head)
    {
	free(stack->head);
        stack->head = NULL;
    }
    return 0;
}
