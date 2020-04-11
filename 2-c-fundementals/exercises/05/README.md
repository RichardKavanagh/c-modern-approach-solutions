### C Fundementals - Exercise 2.05

Which of the following are not legal C identifiers?

(a) 100_bottles
(b) _100_bottles
(c) one_hundres_bottles
(d) bottles_by_the_

###  Solution

(a) had an invalid suffix, identifiers cannot begin with an number (must begin with a letter or underscore)

```
1.c: In function ‘main’:
1.c:4:6: error: invalid suffix "_bottles" on integer constant
  int 100_bottles;
```