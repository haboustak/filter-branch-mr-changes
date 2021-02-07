#pragma once
#include <stdint.h>
#include <stdbool.h>

struct list_item {
    uint32_t    id;
    bool        present;
}

void list_add(struct list_item *item);
void list_del(struct list_item *item);
