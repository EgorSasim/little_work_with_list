#include <stdio.h>
#include <stdlib.h>




typedef int listData;

typedef struct singleList
{
	listData		 pData;
	struct singleList 	*pNext;
}singleList;


int data = 0;

void append(singleList **);
void showList(singleList *);

int main(void)
{

	struct singleList *pHead;

	//init
	pHead = NULL;

	// isEmpty
	// return (phead == NULL)

	append(&pHead);
	append(&pHead);
	append(&pHead);
	append(&pHead);
	showList(pHead);
	//append

	return 0;
}


void append(singleList **head)
{

	if((*head) == NULL)
	{
		*head = (singleList *)malloc(sizeof(singleList));
		(*head)->pData = data++;
		(*head)->pNext = NULL;
	}
	else
	{
		singleList *tmp = *head;
		while(tmp->pNext)
		{
			tmp = tmp->pNext;
		}
		tmp->pNext = (singleList *)malloc(sizeof(singleList));
		tmp->pNext->pData = data++;
		tmp->pNext->pNext = NULL;
	}
}


void showList(singleList *pHead)
{
	if(pHead == NULL)
	{
		printf("Empty list\n");
	}
	else
	{
		while(pHead)
		{
			printf("List el data: %i\n", pHead->pData);
			pHead = pHead->pNext;
		}
	}
}
