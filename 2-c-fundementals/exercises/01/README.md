### C Fundementals - Exercise 2.01

Create and run Kernighan and Ritchie's famous "hello, world" program:

```
#include <stdio.h>

int main(void)
{
	
	printf("hello, world\n");
}
```

Do you get a warning message from the compiler? If so, what's needed to make it go away?

### Solution

Compiling the program produced no errors using gcc version 4.8.5. Here is the complete output of run commands:

```

$ gcc 1.c -O -Wall -W -pedantic -ansi -std=c99 -o 1 
(no output, no warnings or errors)

$ gcc 1.c -O -Wall -W -pedantic -ansi -std=c89 -o 1

1.c: In function ‘main’:
1.c:7:1: warning: control reaches end of non-void function [-Wreturn-type]
 }
 ^

```

This warning can be fixed by amending `return 0;` to the program (see `1b.c`):

```
$ gcc 1_b.c -O -Wall -W -pedantic -ansi -std=c89 -o 1_b
(no output, no warnings or errors)
```
