#include "list.h"

static struct list_item m_list = {};

void list_add(struct list_item *item)
{ 
    m_list.id = item->id;
    m_list.present = true;
}

void list_del(struct list_item *item)
{
    m_list.id = 0;
    m_list.present = false;
}
