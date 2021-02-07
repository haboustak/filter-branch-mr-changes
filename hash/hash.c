#include "hash.h"

static struct hash_item hash = {};

void hash_add(struct hash_item *item)
{
    hash.id = item->id;
}
