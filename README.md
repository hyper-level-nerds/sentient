<a name="readme-top"></a>
<br/>

<div align="center">
    <a href="https://github.com/hyper-level-nerds/sentient">
        <img src="docs/resources/sentient_with_background.png" alt="logo">
    </a>
    <h1 align="center">Sentient</h1>
        <br />
    <p align="center">
        Application Layer Protocol Definition / Binary Serialization Toolset
        <br/>
        <a href="https://github.com/hyper-level-nerds/sentient/issues">Report Bug</a>·
        <a href="https://github.com/hyper-level-nerds/sentient/issues">Request Feature</a>
    </p>
</div>
    <summary>Table of Contents</summary>
    <ol>
        <li><a href="#about-the-sentient-project">About The Sentient Project</a></li>
        <ul>
            <li><a href="#concepts">Concepts</a></li>
            <li><a href="#brief-specifications">Brief Specifications</a></li>
                <ul>
                    <li><a href="#basic-types">Basic Types</a></li>
                    <li><a href="#time-types">Time Types</a></li>
                    <li>
                        <a href="#data-containers">Data Containers</a>
                        <ul>
                            <li><a href="#variable-sized-array">Variable-Sized Array</a></li>
                            <li><a href="#static-sized-array">Static-Sized Array</a></li>
                            <li><a href="#strings">Strings</a></li>
                            <li><a href="#dictionary">Dictionary</a></li>
                        </ul>
                    </li>
                </ul>
            <li><a href="#about-the-schema-language">About The Schema Language</a></li>
        </ul>
    <li>
        <a href="#getting-started">Getting Started</a>
        <ul>
            <li><a href="#prerequisites">Prerequisites</a></li>
            <li>
                <a href="#installation">Installation</a>
                <ul>
                    <li><a href="#sentient-compiler">Sentient Compiler</a></li>
                    <li><a href="#c-library">C Library</a></li>
                    <li><a href="#c++-library">C++ Library</a></li>
                    <li><a href="#csharp-library">C# Library</a></li>
                    <li><a href="#rust-library">Rust Library</a></li>
                    <li><a href="#python-library">Python Library</a></li>
                    <li><a href="#typescript-library">TypeScript Library</a></li>
                </ul>
            </li>
            <li><a href="#writing-in-the-sentient-schema-language">Sentiency - The Sentient Schema Language</a></li>
        </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
</ol>

# This project is still in a draft
# About The Sentient Project

## Concepts

This toolset is being written for those who wants to transmit models fast with both famous ready-made and custom application layer protocols. Application layer protocols you defined without the Sentient toolset would be annoying since you need to implement in various programming languages. however, with the Sentient library, you just need to compile the Sentient schema language source code and use it immediately. In addition, models for transmission could be serialized/deserialized easily with the Sentient library features even if the programming language has no reflection syntax <br/><br/>

This project is being researched to clarify the concepts and specific features. Some features that are clearly defined are <br/>
* Application layer protocol definition, model for transport definition
* Schema language
* Model/Protocol source code generation of various programming languages using schema compiler<br/><br/>

## Brief Specifications

In order to implement the Sentient library in a specific programming language, some common features must be implemented below

### Basic Types

In the implementation, the library should have 8/16/32/64 bit integer, 32/64 bit floating point types<br/>In some languages, they have the types as primitive types and it would be much better to have aliased to be the Sentient names(u8, u16, u32, u64, i8, i16, i32, i64, f32, f64) if they have the type name aliasing syntax<br/>
Also, In several languages having only simple number types(Python, TypeScript...), They should have all types u8 through f64 as wrapper classes. Whenever possible, operator overloading functions (if the syntax exists) should satisfy the user experience

<table>
    <thead>
        <tr>
            <th>Type</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><b>u8</b></td>
            <td>Unsigned 8 bit integer type</td>
        </tr>
        <tr>
            <td><b>u16</b></td>
            <td>Unsigned 16 bit integer type</td>
        </tr>
        <tr>
            <td><b>u32</b></td>
            <td>Unsigned 32 bit integer type</td>
        </tr>
        <tr>
            <td><b>u64</b></td>
            <td>Unsigned 64 bit integer type</td>
        </tr>
        <tr>
            <td><b>i8</b></td>
            <td>Signed 8 bit integer type</td>
        </tr>
        <tr>
            <td><b>i16</b></td>
            <td>Signed 16 bit integer type</td>
        </tr>
        <tr>
            <td><b>i32</b></td>
            <td>Signed 32 bit integer type</td>
        </tr>
        <tr>
            <td><b>i64</b></td>
            <td>Signed 64 bit integer type</td>
        </tr>
        <tr>
            <td><b>f32</b></td>
            <td>32 bit floating point type</td>
        </tr>
        <tr>
            <td><b>f64</b></td>
            <td>64 bit floating point type</td>
        </tr>
    </tbody>
</table>
<br/>

### Time Types

There are a lot of way to transmit the time information in various programming languages and in many user space protocols not in text stream base, As far as I know, some type are mostly used as below<br>
In the implementation of the Sentient library of each programming language, all time info types should be convertible to the standard library time info types of each language<br>In addition, the time info types of Sentient do not necessarily have to be implemented using bit fields, and the fields can be compressed to the corresponding bit size when serialized to binary<br>


- t64 / PosixTime
    - unsigned 64 bit integer contains UNIX timestamp(in seconds)
- t128 / TimeSpec
    - unsigned 64 bit contains UNIX timestamp with unsigned 64 bit integer contains nanoseconds
    - Fields/Descriptions
    <table>
        <thead>
            <tr>
                <td>Field</td>
                <td>Signed ? / Size in bits</td>
                <td>Value Range</td>
                <td>Description</td>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>seconds</td>
                <td>unsigned / 64</td>
                <td>0~</td>
                <td>UNIX Timestamp</td>
            </tr>
            <tr>
                <td>nanoseconds</td>
                <td>unsigned / 64</td>
                <td>0~999,999,999</td>
                <td>nanoseconds</td>
            </tr>
        </tbody>
    </table>
- cg32 / CompactGregorianCalendar
    - There are several traditional ways to transmit time information in the Gregorian calendar format<br/>The most used way to transmit it is to put the year, month, day, hour, minute, and second values ​​excluding century into a 32-bit structure
    - Fields/Descriptions
    <table>
        <thead>
            <tr>
                <td>Field</td>
                <td>Signed ? / Size in bits</td>
                <td>Value Range</td>
                <td>Description</td>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>year</td>
                <td>unsigned / 7</td>
                <td>0~99</td>
                <td>year not containing century information</td>
            </tr>
            <tr>
                <td>month</td>
                <td>unsigned / 4</td>
                <td>1~12</td>
                <td>month</td>
            </tr>
            <tr>
                <td>day</td>
                <td>unsigned / 5</td>
                <td>1~31</td>
                <td>day</td>
            </tr>
            <tr>
                <td>hours</td>
                <td>unsigned / 5</td>
                <td>0~23</td>
                <td>hours</td>
            </tr>
            <tr>
                <td>minutes</td>
                <td>unsigned / 6</td>
                <td>0~59</td>
                <td>minutes</td>
            </tr>
            <tr>
                <td>seconds</td>
                <td>unsigned / 5</td>
                <td>0~29</td>
                <td>seconds increment by 2</td>
            </tr>
        </tbody>
    </table>
- cg64 / PrecisionCompactGregorianCalendar
    - Lengthened the seconds field to 6 bits in order to contain complete 0~59 second values and added an unsigned 64 bit integer field contains nanoseconds at the end of the cg32/CompactGregorianCalendar type
    - Fields/Descriptions
    <table>
        <thead>
            <tr>
                <td>Field</td>
                <td>Signed ? / Size in bits</td>
                <td>Value Range</td>
                <td>Description</td>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>year</td>
                <td>unsigned / 7</td>
                <td>0~99</td>
                <td>year not containing century information</td>
            </tr>
            <tr>
                <td>month</td>
                <td>unsigned / 4</td>
                <td>1~12</td>
                <td>month</td>
            </tr>
            <tr>
                <td>day</td>
                <td>unsigned / 5</td>
                <td>1~31</td>
                <td>day</td>
            </tr>
            <tr>
                <td>hours</td>
                <td>unsigned / 5</td>
                <td>0~23</td>
                <td>hours</td>
            </tr>
            <tr>
                <td>minutes</td>
                <td>unsigned / 6</td>
                <td>0~59</td>
                <td>minutes</td>
            </tr>
            <tr>
                <td>seconds</td>
                <td>unsigned / 6</td>
                <td>0~59</td>
                <td>seconds increment by 2</td>
            </tr>
            <tr>
                <td>nanoseconds</td>
                <td>unsigned / 64</td>
                <td>0~999,999,999</td>
                <td>nanoseconds</td>
            </tr>
        </tbody>
    </table>
- g64 / GregorianCalendar
    - If you guys wanna include century information in cg32 type, you can use this type
    - Fields/Descriptions
    <table>
        <thead>
            <tr>
                <td>Field</td>
                <td>Signed ? / Size in bits</td>
                <td>Value Range</td>
                <td>Description</td>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>year</td>
                <td>signed / 38</td>
                <td>-137,438,953,472~137,438,953,471</td>
                <td>BC~AD year</td>
            </tr>
            <tr>
                <td>month</td>
                <td>unsigned / 4</td>
                <td>1~12</td>
                <td>month</td>
            </tr>
            <tr>
                <td>day</td>
                <td>unsigned / 5</td>
                <td>1~31</td>
                <td>day</td>
            </tr>
            <tr>
                <td>hours</td>
                <td>unsigned / 5</td>
                <td>0~23</td>
                <td>hours</td>
            </tr>
            <tr>
                <td>minutes</td>
                <td>unsigned / 6</td>
                <td>0~59</td>
                <td>minutes</td>
            </tr>
            <tr>
                <td>seconds</td>
                <td>unsigned / 6</td>
                <td>0~59</td>
                <td>seconds</td>
            </tr>
        </tbody>
    </table>
- g128 / PrecisionGregorianCalendar
    - Nanoseconds with g64/GregorianCalendar!
    <table>
        <thead>
            <tr>
                <td>Field</td>
                <td>Signed ? / Size in bits</td>
                <td>Value Range</td>
                <td>Description</td>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>year</td>
                <td>signed / 38</td>
                <td>-137,438,953,472~137,438,953,471</td>
                <td>BC~AD year</td>
            </tr>
            <tr>
                <td>month</td>
                <td>unsigned / 4</td>
                <td>1~12</td>
                <td>month</td>
            </tr>
            <tr>
                <td>day</td>
                <td>unsigned / 5</td>
                <td>1~31</td>
                <td>day</td>
            </tr>
            <tr>
                <td>hours</td>
                <td>unsigned / 5</td>
                <td>0~23</td>
                <td>hours</td>
            </tr>
            <tr>
                <td>minutes</td>
                <td>unsigned / 6</td>
                <td>0~59</td>
                <td>minutes</td>
            </tr>
            <tr>
                <td>seconds</td>
                <td>unsigned / 6</td>
                <td>0~59</td>
                <td>seconds</td>
            </tr>
            <tr>
                <td>nanoseconds</td>
                <td>unsigned / 64</td>
                <td>0~999,999,999</td>
                <td>nanoseconds</td>
            </tr>
        </tbody>
    </table>
<br/>

### Data Containers

#### Variable-Sized Array
The reason why I started this project, serializing/deserializing variable sized data containers was a huge pain for me<br/>
However, it is also painful to modify objects in service logic without using the highly abstracted standard data containers provided by each programming language<br>
In binary serialization, variable-size arrays are usually divided into a size field and a data field, and the number of bytes in the size field must first be defined in the payload definition<br>
Let's say there is a payload definition has variable-sized array at the end of its fields, and the size field is 16 bit unsigned and each element field is 32 bit signed

```C
// example scenario in C language

struct example_variable_sized_array {
    uint8_t meaningless_field;
    uint16_t array_size;
    uint32_t* array;
};

const size_t size = 3;
char serialized_buffer[256] = { 0, };
struct example_variable_sized_array obj = { 0, };
obj.meaningless_field = 1;
obj.array_size = (uint16_t)size;
obj.array = calloc(size, sizeof(struct example_variable_sized_array));
obj.array[0] = 1;
obj.array[1] = 2;
obj.array[2] = 3;

*(uint8_t*)(&serialized_buffer[0]) = obj.meaningless_field;
*(uint16_t*)(&serialized_buffer[1]) = obj.array_size;
*(uint32_t*)(&serialized_buffer[3]) = obj.array[0];
*(uint32_t*)(&serialized_buffer[7]) = obj.array[1];
*(uint32_t*)(&serialized_buffer[11]) = obj.array[2];

//
// Some communication jobs...
//

free(obj.array);
obj.array = NULL;
```

The shape of the example variable-sized array in binary serialization (little-endian)
<table>
    <tr>
        <td>meaningless field</td>
        <td>size</td>
        <td>size</td>
        <td>elem0</td>
        <td>elem0</td>
        <td>elem0</td>
        <td>elem0</td>
        <td>elem1</td>
        <td>elem1</td>
        <td>elem1</td>
        <td>elem1</td>
        <td>elem2</td>
        <td>elem2</td>
        <td>elem2</td>
        <td>elem2</td>
    </tr>
    <tr>
        <td>1</td>
        <td>3</td>
        <td>0</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>2</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>3</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
    </tr>
</table>

<br/>