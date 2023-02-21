#include <stdint.h> 
#include <stdbool.h>

typedef struct item {
	struct item *next;
	uint8_t value; 
} item_t; 
	
item_t *lt_add (item_t *root, uint8_t val);
item_t *lt_remove (item_t *root, uint8_t val);
void lt_pritall(item_t *root);