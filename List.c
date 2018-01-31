#include "List.h"
#include <stdlib.h>
List * initList() {
	List *list =(List *) malloc(sizeof(List));
	if (NULL != list)
	{
		list->next = NULL;
	}
	return list;
}

int addList(List *list, int data) {
	List *newList =(List *) malloc(sizeof(List));
	if (NULL != newList)
	{
		newList->data = data;
		newList->next = list->next;
		list->next = newList;
		return 0;
	}
	return -1;
}

int getLenOfList(List *list)
{
	List *head = list->next;
	int len = 0;
	while (NULL != head)
	{
		len++;
		head = head->next;
	}
	return len;
}

int * getDataOfList(List *list)
{
	int len = getLenOfList(list);
	if (len <= 0)
	{
		return NULL;
	}
	int *rtnData = (int *)malloc(len * sizeof(int));
	if (NULL != rtnData)
	{
		List *head = list->next;
		for (int i = 0; (i < len && NULL != head); i++)
		{
			*(rtnData + i) = head->data;
			head = head->next;
		}
		return rtnData;
	}
	return NULL;
}
