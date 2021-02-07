#include "queue.h"

static struct queue_item m_queue = {};

void queue_add(struct queue_item *item)
{
    m_queue.id = item->id;
}

void queue_del(struct queue_item *item)
{
    m_queue.id = 0;
}
