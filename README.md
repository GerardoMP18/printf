
![Logo](https://blog.holbertonschool.com/wp-content/uploads/2021/06/Fichier-13.png)


# 0x11. C - printf

This project recreates a printf function will print out formats of,
type char (c), string (s), percentage symbol (%), signed decimal
integers (d), integers (i), etc.

 

#### Get all items


| Type     | Description                              |
| :------- | :--------------------------------------- |
|    %c    | Print the corresponding ASCII character  |
|    %s    | Character string (terminated in '\0')    |
|  %d, %i  | Signed decimal conversion of an integer  |
|    %%    | Prints the % symbol                      |
|    %u    | Unsigned decimal conversion of an integer| 
|    %o    | Unsigned octal conversion of an integer  | 
|  %x, %X  | Unsigned hex conversion                  | 
|    %p    | Memory address (pointer)                 | 
|    %b    | Unsigned binary                          | 

## Tasks

### [0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life.](./_printf.c)
Write a function that produces output according to a format.

- Prototype: int _printf(const char *format, ...);
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
    - c
    - s
    - %
- You don’t have to reproduce the buffer handling of the C library printf function
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

### [1. Education is when you read the fine print. Experience is what you get if you don't](./_printf.c)
 Handle the following conversion specifiers:

- d
- i
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

### [2. Just because it's in print doesn't mean it's the gospel](./_printf.c)
Create a man page for your function.

## Authors

- [Gerardo Marin](https://github.com/GerardoMP18)
- [Juan Salinas](https://github.com/JSM788)
