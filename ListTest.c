#include "List.h"

int main()
{
    List *list = initList();
    addList(list, 1);
    addList(list, 3);
    addList(list, 2);
    int *data = getDataOfList(list);
    int len = getLenOfList(list);
    if (NULL != data)
    {
	for (int i = 0; i < len; i++)
	{
             printf("%d\n", *data++);
	}
    } 
    return 0;
}
