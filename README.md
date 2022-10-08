<a name="readme-top"></a>

<br/>
<div align="center">
    <a href="https://github.com/hyper-level-nerds/sentient">
        <img src="docs/resources/sentient_with_background.png" alt="logo">
    </a>
    <h2 align="center">Sentient</h2>
        <br />
    <p align="center">
        It will allow you to define message protocols and transmit models easily, and can be used in multiple programming languages
        <br/>
        <a href="https://github.com/hyper-level-nerds/sentient/issues">Report Bug</a>·
        <a href="https://github.com/hyper-level-nerds/sentient/issues">Request Feature</a>
    </p>
</div>

<!-- TABLE OF CONTENTS -->
<!-- <details> -->
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#about-the-sentient-project">About The Sentient Project</a></li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li>
            <a href="#installation">Installation</a>
            <ul>
                <li><a href="#sentient-compiler">Sentient Compiler</a></li>
                <li><a href="#c">C Library</a></li>
                <li><a href="#c++">C++ Library</a></li>
                <li><a href="#csharp">C# Library</a></li>
                <li><a href="#rust">Rust Library</a></li>
                <li><a href="#python">Python Library</a></li>
            </ul>
        </li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>


## About The Sentient Project

This toolset is being written for those who wants to transmit models fast with both famous ready-made and custom application layer protocols. Application layer protocols you defined without the Sentient toolset would be annoying since you need to implement in various programming languages. however, with the Sentient library, you just need to compile the Sentient schema language source code and use it immediately. In addition, models for transmission could be serialized/deserialized easily with the Sentient library features even if the programming language has no reflection syntax <br/><br/>

This project is being researched to clarify the concepts and specific features. The three main functions that are clearly defined are <br/>
* Application layer protocol definition, model for transport definition
* Schema language
* Model/Protocol source code generation of various programming languages using schema compiler<br/><br/>

In order to implement the Sentient library in a specific programming language, some common features must be implemented below
* some types, utilities as below

|  C | C++ | C# | Python |  |
|---|---|---|---|---|
| snt_u8 | snt::u8 | System.Byte | sentient.u8 | unsigned 8 bit integer |
| snt_u16 | snt::u16 | System.UInt16 | sentient.u16 | unsigned 16 bit integer |
| snt_u32 | snt::u32 | System.UInt32 | sentient.u32 | unsigned 32 bit integer |
| snt_u64 | snt::u64 | System.UInt64 | sentient.u64 | unsigned 64 bit integer |
| snt_i8 | snt::i8 | System.SByte | sentient.i8 | signed 8 bit integer |
| snt_i16 | snt::i16 | System.Int16 | sentient.i16 | signed 16 bit integer |
| snt_i32 | snt::i32 | System.Int32 | sentient.i32 | signed 32 bit integer |
| snt_i64 | snt::i64 | System.Int64 | sentient.i64 | signed 64 bit integer |
| snt_f32 | snt::f32 | System.Single | sentient.f32 | 32 bit floating point |
| snt_f64 | snt::f64 | System.Double | sentient.f64 | 64 bit floating point |
| snt_t64 | snt::t64 | Sentient.PosixTimeStamp | sentient.t64 | unsigned 64 bit contains posix timestamp |
| snt_t128 | snt::t128 | Sentient.TimeSpec | sentient.t128 | unsigned 64 bit contains posix timestamp with unsigned 64 bit contains nanoseconds |
| snt_g32 | snt::g32 | Sentient.GregorianDateTime | sentient.g32 |  |
| snt_g64 | snt::g64 | Sentient.GregorianDateTimeExt | sentient.g64 |  |
| snt_arr_{model}_{elements_size} | snt::array<T, n> | Sentient.Array<T, n> | sentient.arr |  |
| snt_vec_{model}_{size_type} | snt::vector<T, S> | Sentient.List<T, S> | sentient.varr |  |
| snt_list_{model}_{size_type} | snt::list<T, S> | Sentient.LinkedList<T, S> | sentient.llist |  |
| snt_str_{model}_{size_type} | snt::string<S> | Sentient.String<S> | sentient.s8 |  |

* Generic (tuple if no generic syntax) data containers with a size type of specific bytes, e.g.  <b>snt::vector&lt;T, snt::u16&gt;</b> in <b>the Sentient C++ </b> implementation
* 

<br/>

Sentient schema language <br/>
model.snt
```
ns example:
    arr_pl(65536)
    mdl my_model:
        number : u64
        email_address : sstr8[256]
        password: sstr8[33]
        gender: u8,
        created_time: ts128
        updated_time: ts128
}
    
```

compile ↓ <br/><br/>

C <br/>
model.h
```C
#include <sentient/sentient.h>

SNT_DECL_MODEL(example_my_model
    (snt_u64, number),
    (snt_char8, email_address, SNT_ARRAY, 256),
    (snt_char8, password, SNT_ARRAY, 33, SNT_PASSWORD),
    (snt_u8, gender),
    (snt_ts128, created_time),
    (snt_ts128, updated_time),
    SNT_HAS_ARRAY_POOL(65536)
);
```
model.c
```C
#define SNT_IMPL_MODEL
#include "model.h"
```

C++ <br/>
model.hpp

```C++
#include <sentient/sentient.hpp>

namespace example {
class model
{
    SNT_DEFINE_MODEL(example::model,
        (snt::u64, number),
        (snt::static_string<256>, email_address),
        (snt::static_string<33>, password),
        (snt::u8, gender),
        (snt::ts128, created_time),
        (snt::ts128, updated_time),
        SNT_HAS_ARRAY_POOL(65536)
    );
};
}
```

C# <br/>
Model.cs

```C#
using System;
using Sentient;

namespace example
{
    [Model]
    public class Model
    {
        [Field]
        public UInt64 Number;
        [Field]
        public StaticString<IntConstant256> EmailAddress;
        [Field]
        public StaticString<IntConstant33> Password;
        [Field]
        public Byte Gender;
        [Field]
        public TimeSpec CreatedTime;
        [Field]
        public TimeSpec UpdatedTime;

        public Model() {}
    }
}

```


