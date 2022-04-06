#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <threads.h>

#include "./example_model.h"

void ahah(void* arg)
{

}

int main(int argc, char** argv)
{
    struct example_model m = { 123, "ahah", };
    
    struct sentient_type_info* info = 
        sentient_get_example_model_type_info();

    printf("field name: %s\n", info->name);

    for (size_t i = 0; i < info->fields_count; i++)
    {
        struct sentient_field_info* field_info = &info->fields[i];
        
        const char* field_name = field_info->field_name;
        
        printf("field name: %s, offset: %lu, type: %d\n",
            field_name, field_info->offset, field_info->data_type);
    }

    

    return 0;
};