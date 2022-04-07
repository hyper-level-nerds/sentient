<!--![image info](./docs/sentient_with_background.png)-->
<p align="center">
  <img src="https://github.com/hyper-level-nerds/sentient/blob/master/docs/sentient_with_background.png">
</p>

Generic model data serialization and ORM (to be added later) library and compiler

<br/>

Sentient schema language

```
ns example:
    example_model:
        number : u64 $pk
        email_address : str8[256]
        password : str8[33] $dontread
        health : f64
        created_time : scdt64
        updated_time : scdt64
```

compile ↓

C

```C
SENTIENT_DEFINE_MODEL(example_example_model
    (u64, number),
    (str8, email_address, 256),
    (str8, password, 33),
    (f64, health),
    (scdt64, created_time),
    (scdt64, updated_time),
)
SENTIENT_DEFINE_ATTR(example_example_model
    (0, PK)
)
```

C++

```C++
namespace example
{

#pragma pack(push, 1)
struct example_model :
    sentient::type_traits::static_model_attr,
    sentient::type_traits::dbms_compatible_attr<static_model, 0>,
    sentient::type_traits::credential_dontread_attr<3>
{
    SENTIENT_DEFINE_MODEL(example::example_model,
        (sentient::u64_t, number),
        (sentient::str8_t<256>, email_address),
        (sentient::str8_t<33>, password),
        (sentient::f64_t, health)
        (sentient::scdt64_t, created_time)
        (sentient::scdt64_t, updated_time));
    );
};
#pragma pack(pop)

}
```

C#

```C#
Console.WriteLine("ah");
```
