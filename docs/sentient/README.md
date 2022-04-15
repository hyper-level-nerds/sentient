# the Sentient compiler

## The generic model schema compiler/library collection for various languages

###  How to use the Sentient schema compiler

0. Compiler info

```bash
sntc { -h | --help }

sntc { -v | --version }
```

1. Compilation

```bash
sntc --language=[ <c> | <cpp> | <csharp> | <rust> ] <schema file path> --output-dir <generated directory>

# shorts
sntc --lg=[ <c> | <cc> | <cs> | <rs> ] <schema file path> -o <generated directory>
```

1. **C language options**

```bash
sntc --language=c # ...
     --memory-type=[ <stack> | <heap> ] # default stack
     --object-pool-size=<pool size: number> # default 32
     --

```