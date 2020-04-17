### C Formatted Input/Output - Exercise 3.04

Suppose that we call ```scanf``` as follows:

```scanf("%d%f%d", &i, &x, &j);```

If the user enters

```10.3 5 6```

what will be the values of ```i```, ```x``` and ```j``` after the call? (Assume that ```i``` and ```j``` are ```int``` variables and ```x``` is a ```float``` variable.)

### Solution

10, 0.300000 and 5

The first ```%d``` reads until the ```.```,  the ```%f``` reads .3,  the second ```%d``` reads the 5, the 6 is discarded.

See ```04.c```
