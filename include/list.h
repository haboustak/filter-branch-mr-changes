#pragma once
#include <stdint.h>

struct list_item {
    uint32_t    id;
    uint32_t    size;
}

void list_add(struct list_item *item);
