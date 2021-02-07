#include "hash.h"

static struct hash_item m_hash = {};

void hash_add(struct hash_item *item)
{
    m_hash.id = item->id;
}
