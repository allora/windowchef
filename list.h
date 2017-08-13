/* Copyright (c) 2016, 2017 Tudor Ioan Roman. All rights reserved. */
/* Licensed under the ISC License. See the LICENSE file in the project root for full license information. */

#ifndef _LIST_H
#define _LIST_H

#include <stdbool.h>

struct list_item {
	void *data;
	struct list_item *prev;
	struct list_item *next;
};

void list_move_to_head(struct list_item **, struct list_item *);
struct list_item* list_add_item(struct list_item **);
void list_delete_item(struct list_item **, struct list_item *);
void list_delete_all_items(struct list_item **, bool);

#endif
