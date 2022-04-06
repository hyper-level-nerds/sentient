#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "./example_model.h"

int main(int argc, char** argv)
{
    struct example_model m = { 0, };
    m.model_no = 0;

    struct sentient_type_info* info = 
        sentient_get_example_model_type_info();

    for (size_t i = 0; i < info->fields_count; i++)
    {
        struct sentient_field_info* field_info = &info->fields[i];
        
        const char* field_name = field_info->field_name;

        printf("field name %s", field_name);
    }

    

    return 0;
};