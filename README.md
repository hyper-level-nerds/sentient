<!--![image info](./docs/sentient_with_background.png)-->
<p align="center">
  <img src="https://github.com/hyper-level-nerds/sentient/blob/master/docs/sentient_with_background.png">
</p>

Generic model data serialization and ORM (to be added later) library and compiler

<br/>

Sentient schema language

```
ns example:
    model model:
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
struct example_model
{
	sentient_u64      number;
	sentient_str8_256 email_address;
	sentient_str8_33  password;
	sentient_f64      health;
	sentient_scdt64   created_date;
	sentient_scdt64   updated_date;
};

const struct sentient_model_info* sentient_get_model_info_example_model();
sentient_size sentient_serialize_example_model(const struct example_model*, sentient_u8*);
sentient_size sentient_protocol_serialize_example_model(const struct sentient_protocol_info*,
	const struct example_model*, sentient_u8*);
)
```

C++

```C++
namespace example
{

#pragma pack(push, 1)
struct model :
    sentient::type_traits::static_model_attr,
    sentient::type_traits::dbms_compatible_attr<static_model, 0>,
    sentient::type_traits::credential_dontread_attr<3>
{
    SENTIENT_DEFINE_MODEL(example::model,
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
namespace example;

[Serializable]
public struct Model
{
    SentientU64    Number;
    SentientStr8[] EmailAddress = new SentientStr8[256];
    ... // idk how to implement in the C# language
}
```
