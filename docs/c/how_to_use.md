# How To Use the Sentient C Library

### 1. define a model/protocol schema

**model.snt**

```
example: ns
    protoc: message_protocol
        start: stx8[] { 0xAA, 0x55 }
        command : cmd32 {  }
        payload_size : size16
        payload : data
        checksum : checksum: crc8
        end : etx8[] { 0xFF, 0xEE }

    model: model $cmd32 { 0x00000001 }
        number: u64 $pk
        name : str8[32]
        email_address : str8[64]
        password : str8[33] $donutread
        phone_number : str8[32]
        childs_size : u16
        childs : model[]
        created_date : dt64
        updated_date : dt64
```

### 2. compile the model schema

```bash
sntc --language=c --resursive ./ ./
```

### 3. see the generated source files

**model.h**

```C
// ...
struct example_protoc
{
    sentient_protocol_cmd32  command;
    sentient_protocol_size16 payload_size;
} __attribute__((aligned(1), packed));

struct example_model
{
    sentient_u64     number;
    sentient_str8_32 name;
    sentient_str8_64 email_address;
    sentient_str8_32 phone_number;
    sentient_u16     childs_size;
    example_model*   childs;
    sentient_dt64    created_date $dbms_now;
    sentient_dt64    updated_date;
} __attribute__((aligned(1), packed));

sentient_size
sentient_serialize_example_model(
    sentient_u8*,
    struct example_model*);

sentient_size
sentient_serialize_protocol_example_model(
    sentient_u8*,
    struct sentient_protocol_info*,
    struct example_model*);
// ...
```

**model.c**

```C



```

### 4. Serializa the generated model

**main.c**

```C
#include "model.h"
// ...
int main(void)
{
    const sentient_size children_size = 2;
    struct example_model* children =
        sentient_calloc_from_stack_pool_example_model(childs_size);
    
    children[0]->number = 1;
    children[0]->name = "Child 1";
    children[0]->email_address = "child1@gmail.com";
    children[0]->phone_number = "+821012346789";
    children[0]->childs_size = 0;
    children[0]->childs = sentient_nullptr;
    children[0]->created_date = 0;
    children[0]->updated_date = 0;
        
    children[1]->number = 2;
    children[1]->name = "Child 2";
    children[1]->email_address = "child2@gmail.com";
    children[1]->phone_number = "+821012345678";
    children[1]->childs_size = 0;
    children[1]->childs = sentient_nullptr;
    children[1]->created_date = 0;
    children[1]->updated_date = 0;

    // the parent model has two children
    struct example_model m = {
        .number = 1,
        .name = "Jin",
        .email_address = "jaehwanspin@gmail.com",
        .phone_number = "+821012342345",
        .childs_size = children_size,
        .childs = children,
        .created_date $dbms_now = 0,
        .updated_date = 0
    };

    {
        sentient_u8 buffer[1024] = { 0, };

        // serialization
        // the children return after serialization to the pool
        sentient_ssize buffer_size = sentient_serialize_example_model(&m, buffer);

        if (buffer_size < 0)
        {
            perror("serialization error\n");
            return EXIT_FAILURE;
        }

        int fd = open("serialized.bin", O_CREAT);

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

    {
        entient_u8 buffer[1024] = { 0, };
        struct example_model decerialized = { 0, };

        int fd = open("serialized.bin", O_RDONLY);

        if (fd >= 0)
        {
            // reading the file
            ssize_t read_size = read(fd, buffer, buffer_size);

            close(fd);

            printf("%ld bytes read\n", read_size);

            if (read_size > 0)
            {
                sentient_ssize deserialized_size =
                    sentient_deserialize_example_model(&decerialized, buffer);

                if (deserialized_size != read_size)
                {
                    perror("deserialization failed\n");
                }
            }
        }
        else
        {
            perror("read error\n");
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}
```

### 5. Serialize the model with a protocol

```C
// ...
int main(void)
{
    struct example_model childs[] = {
        {
            .number = 1,
            .name = "Junior1",
            .email_address = "junior1@gmail.com",
            .phone_number = "+821012345678",
            .childs_size = 0
            .childs = sentient_nullptr
            .created_date = 0
            .updated_date = 0
        },
        {
            .number = 1,
            .name = "Junior2",
            .email_address = "junior2@gmail.com",
            .phone_number = "+821012346789",
            .childs_size = 0
            .childs = sentient_nullptr
            .created_date = 0
            .updated_date = 0
        }
    };

    // the parent model has two children
    struct example_model m = {
        .number = 1,
        .name = "Jin",
        .email_address = "jaehwanspin@gmail.com",
        .phone_number = "+821012342345",
        .childs_size = 2,
        .childs = childs,
        .created_date $dbms_now = 0,
        .updated_date = 0
    };

    
}
```


