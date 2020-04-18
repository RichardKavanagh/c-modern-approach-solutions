### C Selection Statements - Exercise 5.10

What output does the following program fragment produce? (Assume that ```i``` is an integer variable.)

```c
i = 1;
switch (i % 3) {
	case 0: printf("zero");
	case 1: printf("one");
	case 2: printf("two");
}
```

### Solution

one, two.  It falls through ```case 1:``` into the last case as there is no ```break``` statement.

See ```10.c```
