### C Selection Statements - Exercise 5.06

Is the following ```if``` statement legal?

```
if (n == 1 - 10)
	printf("%s\n", "n is between 1 and 10");

```

If so, what does it do when ```n``` is equal to 5?

### Solution

It is legal, the if statement will evaluate (5 == -9) which will return false, and the statement will not be executed.

See ```06.c```