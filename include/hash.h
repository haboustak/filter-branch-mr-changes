#pragma once
#include <stdint.h>

struct hash_item {
    uint32_t    id;
};

void hash_add(struct hash_item *item);
void hash_del(struct hash_item *item);
