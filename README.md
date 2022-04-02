# sentient

Generic model data serialization and ORM (to be added later) library and compiler

```TOML
toml
```

compile ↓

C++

```C++
namespace example
{

#pragma pack(push, 1)
struct example_model :
    sentient::type_traits::static_model_attr,
    sentient::type_traits::dbms_compatible_attr<static_model, 'o', 'i', 'o', 'i', '\0'>
{
    SENTIENT_DEFINE_MODEL(example::example_model,
        (sentient::u64_t, number),
        (sentient::str8_t<32>, email_address),
        (sentient::pass8_t<sentient::str8_t<33>, sentient::cred<sentient::sha_256>, password),
        (sentient::f64_t, health)
        (sentient::dt64_t, created_time)
        (sentient::dt64_t, updated_time));
    );
};
#pragma pack(pop)

}
```

C#

```C#
Console.WriteLine("ah");
```
