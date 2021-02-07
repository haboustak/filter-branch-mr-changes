#pragma once
#include <stdint.h>

#define MAX_LIST_ITEMS  128

struct list_item {
    uint32_t    id;
    uint32_t    size;
}

void list_add(struct list_item *item);
