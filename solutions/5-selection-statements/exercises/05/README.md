### C Selection Statements - Exercise 5.05

Is the following ```if``` statement legal?

```
if (n >= 1 <= 10)
	printf("%s\n", "n is between 1 and 10");
```

If so, what does it do when ```n``` is equal to 0?

### Solution

It is legal, but it will not operate as expected without and ```&&``` operator.
Instead the expression will become ```0 <= 10``` which will return ```1``` and execute the statment.

See ```05.c```