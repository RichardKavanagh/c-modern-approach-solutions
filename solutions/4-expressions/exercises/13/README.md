### C Expressions - Project 4.13

Only one of the expressions ```++i``` and ```i++``` is exactly the same as ```(i += 1);``` which is it?
Justify your answer.

### Solution

```i++``` is a post-increment operation, it will increment the value of i, but return the orginal value that i held before being incremented.

```++i``` is a pre-increment operation, it will increment the value of i, then return the incremented value.

Therefore, ```++i``` is equivalent to  ```(i += 1);```, which is equivalent to ```i = i + 1;```
