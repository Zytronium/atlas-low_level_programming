# C - Preprocessor

The preprocessor is the first stage of how GCC compiles your code into something the computer can read and execute.

-----------

From **ChatGPT**: (*with minor indentation corrections*)

The C preprocessor is a stage in the C compilation process that occurs before the actual compilation of the code. It's a separate step that prepares the source code for compilation.

The preprocessor reads the source code and performs the following operations:

1. **Macro expansion**: The preprocessor replaces macro invocations with their corresponding expansions. Macros are essentially shortcuts that expand into longer code snippets.
2. **File inclusion**: The preprocessor inserts the contents of included files (specified using the `#include` directive) into the source code.
3. **Comment removal**: The preprocessor removes all comments from the source code, so they don't get compiled.
4. **Conditional compilation**: The preprocessor evaluates conditional directives (such as `#ifdef`, `#ifndef`, `#if`, and `#else`) to determine which code blocks to include or exclude.

The preprocessor uses a set of directives, which are lines in the source code that start with `#`. These directives tell the preprocessor what to do. Some common directives include:

* `#include`: Includes a header file.
* `#define`: Defines a macro.
* `#ifdef`: Includes code if a macro is defined.
* `#ifndef`: Includes code if a macro is not defined.
* `#if`: Includes code if a condition is true.
* `#else`: Includes code if a condition is false.
* `#endif`: Ends a conditional directive.

The preprocessor outputs a modified version of the source code, which is then fed into the compiler. The compiler then compiles the preprocessed code into object code.

Here's an example of how the preprocessor works:
```c
#define PI 3.14

int main() {
    float area = PI * radius * radius;
    return 0;
}
```
The preprocessor expands the `PI` macro into its definition, `3.14`, resulting in:
```c
int main() {
    float area = 3.14 * radius * radius;
    return 0;
}
```
The preprocessor is an essential step in the C compilation process, and understanding how it works can help you write more efficient and effective code.