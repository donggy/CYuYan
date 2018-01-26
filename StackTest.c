#include <stdio.h>
#include "Stack.h"

int main()
{
    Stack stack = init(10);
    printf("%p\n",stack.head);

    for (int i = 0; i < 10; i++)
    {
        push(&stack, i + 1);
        printf("%p\t",stack.head);
    }
    printf("\n============\n");
    for (int i = 0; i < 10; i++)
    {
	printf("%d\t",pop(&stack));
        printf("%p\n",stack.head);
    }
    printf("%p\n",stack.head);
    freeStack(&stack);
}
