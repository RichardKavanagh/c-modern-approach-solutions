### C Loops - Exercise 6.14

Find the error in the following program fragment and fix it.

```c
if (n % 2 == 0);
    printf("n is even\n");
```

### Solution

Remove the trailing ```;``` at the end of the if statement, otherwise the ```print``` statement will always be run.
