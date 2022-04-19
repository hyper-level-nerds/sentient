#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/unistd.h>
#include <sys/fcntl.h>

#include <sentient/core/field_info.h>

#include "./example_model.h"

struct ah
{
    sentient_u32 fucking;
} __attribute__((align_value(64)));

int main(int argc, char** argv)
{
    struct ah ah = { 0, };

    sizeof(struct ah);

    const struct sentient_model_info* mi =
        sentient_model_info_get_example_dynamic_model();
    const struct sentient_field_info* fi =
        sentient_field_info_get_example_dynamic_model();

    printf("model name : %s\n", mi->model_name);
    for (int i = 0; i < mi->fields_count; i++)
    {
        printf("filed name : %s\n", fi[i].field_name);
        printf("field offset : %lu\n\n", fi[i].field_offset);
    }

    printf("%d %d\n", SENTIENT_FIELD_TYPES_EXAMPLE_DYNAMIC_MODEL, SENTIENT_FIELD_TYPES_EXAMPLE_DYNAMIC_MODEL_PTR);

    // allocate two child models
    const sentient_size children_size = 2;
    struct example_dynamic_model* children =
        calloc(children_size, sizeof(struct example_dynamic_model));
    
    children[0].number = 2;
    strcpy(children[0].name, "Child 1");
    strcpy(children[0].email_address, "child1@gmail.com");
    strcpy(children[0].phone_number, "+821012346789");
    children[0].children_size = 0;
    children[0].children = sentient_nullptr;
    sentient_scdt64_local_now(&children[0].created_date);
    sentient_scdt64_local_now(&children[0].updated_date);
        
    children[1].number = 3;
    strcpy(children[1].name, "Child 2");
    strcpy(children[1].email_address, "child2@gmail.com");
    strcpy(children[1].phone_number, "+821012345678");
    children[1].children_size = 0;
    children[1].children = sentient_nullptr;
    sentient_scdt64_local_now(&children[1].created_date);
    sentient_scdt64_local_now(&children[1].updated_date);

    // the parent model has two children
    struct example_dynamic_model m = {
        .number = 1,
        .name = "Jin",
        .email_address = "jaehwanspin@gmail.com",
        .phone_number = "+821012342345",
        .children_size = children_size,
        .children = children,
    };
    sentient_scdt64_local_now(&m.created_date);
    sentient_scdt64_local_now(&m.updated_date);

    {
        sentient_u8 buffer[1024] = { 0, };

        // serialization
        // the children deacllocated after serialization
        sentient_ssize buffer_size =
            sentient_serialize_example_dynamic_model(buffer,
                &m);

        if (buffer_size < 0)
        {
            perror("serialization error\n");
            return EXIT_FAILURE;
        }

        int fd = open("serialized.bin", O_CREAT | O_WRONLY);

        if (fd >= 0)
        {
            // saving the file
            ssize_t written_size = write(fd, buffer, buffer_size);

            close(fd);

            printf("%ld bytes written\n", written_size);
        }
        else
        {
            perror("write error\n");

            return EXIT_FAILURE;
        }
    }

    return 0;
};