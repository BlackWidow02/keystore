#include <stdio.h>
#include <assert.h>
#include "kv.h"

int main(){
    kv_t *table = kv_init(3);
    printf("%p\n", table);
    printf("%ld\n", table->capacity);

    kv_put(table, "hehe", "haha");

    for(int i = 0; i < table->capacity; i++){
        if(table->entries[i].key){
            printf("%s: %s\n", table->entries[i].key, table->entries[i].value);
        }
    }

    kv_t *db = kv_init(16);
    
    assert(db != NULL);
    assert(db->capacity == 16);
    assert(db->count == 0);
    
    kv_free(db);
    kv_free(table);

    

    return 0;
}
