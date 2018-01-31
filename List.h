#ifndef __LIST_H__
#define __LIST_H__

#include <stdio.h>

typedef struct Node
{
	int data;
	struct Node *next;
} List;

// ¿¿¿¿¿list
List * initList();

// ¿list¿¿¿¿¿¿¿
int addList(List *list, int data);

// ¿¿list¿¿¿
int getLenOfList(List *list);

// ¿¿list¿¿¿¿¿¿
int * getDataOfList(List *list);

#endif // !__LIST_H__
