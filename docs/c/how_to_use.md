# How To Use the Sentient C Library

> 1. define a model schema

```
example: ns
    model: model
        number: u64
        name: str8[32]
        email_address: str8[64]
        password : str8[33]
        phone_number: str8[32]
        childs_size: u16
        childs: model[]
```

> 2. compile the model schema

```bash
sntc --language=c ./model.snt .
```

> 3. see the generated source files

**model.h**

```C
// ...
struct example_model
{
    sentient_u64     number;
    sentient_str8_32 name;
    sentient_str8_64 email_address;
    sentient_str8_32 phone_number;
    sentient_u16     childs_size;
    example_model*   childs;
} __attribute__((aligned(1), packed));

sentient_size
sentient_serialize_example_model(
    sentient_u8*,
    struct example_model*);

sentient_size
sentient_serialize_protocol_example_model(
    sentient_u8*,
    struct sentient_protocol_info*

// ...
```