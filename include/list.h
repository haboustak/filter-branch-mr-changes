#pragma once
#include <stdint.h>

struct list_item {
    uint32_t    id;
}

void list_add(struct list_item *item);
