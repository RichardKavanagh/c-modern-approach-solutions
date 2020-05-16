### C Arrays - Exercise 7.01

We discussed using the expression ```sizeof(a) / sizeof(a[0])``` to calculate the number of elements in an array.
The expression ```sizeof(a) / sizeof(t)```, where ```t``` is the type of ```a```'s elements, would also work, but it's considered an inferior technique. 
Why?

### Solution

Because ```sizeof(t)``` isn't guaranteed to be of the same type as the array,  and if you wanted to change array types
you would need to change multiple elements.
