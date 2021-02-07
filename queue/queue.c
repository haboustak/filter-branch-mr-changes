#include "queue.h"

static struct queue_item queue = {};

void queue_add(struct queue_item *item)
{
    queue.id = item->id;
}
