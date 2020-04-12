### C Formatted Input/Output - Exercise 3.03

For each of the following pairs of `scanf` format strings, indicate whether or
not the two strings are equivalent. If they're not, show how they can be
distinguished.

```
(a) "%d"       versus " %d"
(b) "%d-%d-%d" versus "%d -%d -%d"
(c) "%f"       versus "%f "
(d) "%f,%f"    versus "%f, %f"
```

### Solution

- (a) Both are functionally equivalent, white-space characters in the format string do not force white-space characters to be read.
- (b) Both are functionally equivalent for the same reason given in (a)
- (c) Is not equivalent because the trailing space is required in input
- (d) Both are functionally equivalent for the same reason given in (a)