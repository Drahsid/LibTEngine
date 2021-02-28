# Contributing
If you wish to contribute, just submit a pull request.

While the only prerequisite for contributions is that they are accurate, there are some guidlines you should follow so that the library is as close to Acclaim's source as possible.<br>

## Structure Definitions and Member Variables
Acclaim pretended that C was C-With-Classes. As such, the formatting of structure names and their member variables follow a more object-oriented naming scheme, despite the source actually being C code.<br>
To illustrate this, the Vector3 class is titled `CVector3` meaning `Class Vector3`.<br>
Furthermore, these "classes" have their member variables. Each member variable's name is (usually) prepended with `m_`, and followed by a lowercase letter (or letters) that represent the type of the member.<br>
You might recognize this as [Hungarian Notation](https://en.wikipedia.org/wiki/Hungarian_notation). Despite the fact that this is frowned upon these days, I am still following this to stay accurate to Acclaim's formatting.
To avoid circular includes, I am also prepending all typed pointers with struct, and omitting said include if possible.

If you are confused, this is an example of a structure definition:

```c
typedef struct CFoo_s {
    /* 0x00 */ int m_nCount;
    /* 0x04 */ struct CFoo_s** m_pFoos;
    /* 0x08 */ CVector3 m_vPosition;
} CFoo; /* sizeof = 0x14 */
```

## Function Definitions
Acclaim structured their function names in an object-oritented way. Generally, function names that are in the context of a structure are formatting in the same way that non-static c++ functions are. <br>
In this case, the function names follow this naming format: [structure]__[function name]. If you are confused, `CEngineApp__Update` is a function whose purpose is to update a structure of they type `CEngineApp`.<br>
The signature for these functions always fill A0 with a pointer to the structure. So in the example of `CEngineApp__Update`, the first argument is `CEngineApp* pThis`.

A full example of a function signature:
```c
void CEngineApp__Update(struct CEngineApp* pThis);
```

