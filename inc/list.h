#ifndef __LIST_H__
#define __LIST_H__

typedef struct _ListItem {
    struct _ListItem *next;
    struct _ListItem *prev;
    void *data;
} ListItem;

typedef struct _List {
    ListItem *first;
    ListItem *last;
} List;

List *listCreate();
void listDestroy(List *list);
void listAdd(List *list, void *data);
void listRemove(List *list, ListItem *item);
void listClear(List *list);

#endif