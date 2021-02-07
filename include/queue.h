#pragma once
#include <stdint.h>

struct queue_item {
    uint32_t    id;
};

void queue_add(struct queue_item *item);
void queue_del(struct queue_item *item);
