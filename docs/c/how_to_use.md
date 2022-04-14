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

    {
        sentient_u8 buffer[1024] = { 0, };

        // serialization
        sentient_size buffer_size = sentient_serialize_example_model(&m, buffer);

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

        // serialization
        sentient_size buffer_size = sentient_serialize_example_model(&m, buffer);

        if (buffer_size < 0)
        {
            perror("serialization error\n");
            return EXIT_FAILURE;
        }

        int fd = open("serialized.bin", O_RDONLY);

        if (fd >= 0)
        {
            // reading the file
            ssize_t read_size = read(fd, buffer, buffer_size);

            close(fd);

            printf("%ld bytes written\n", written_size);
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