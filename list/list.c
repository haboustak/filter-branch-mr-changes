#include "list.h"

static struct list_item m_list = {};

void list_add(struct list_item *item)
{ 
    m_list.id = item->id;
}
