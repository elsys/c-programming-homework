# Assignment report
```
Points earned: 10
Maximum points: 20
```

## Task 1: Squares & Cubes [5/5 points]
https://github.com/elsys/c-programming-homework/tree/master/A/02#%D0%97%D0%B0%D0%B4%D0%B0%D1%87%D0%B0-1---squares--cubes

### Testcase 1 passed
### Testcase 2 passed

## Task 2: Biggest of 3 [0/5 points]
https://github.com/elsys/c-programming-homework/tree/master/A/02#%D0%97%D0%B0%D0%B4%D0%B0%D1%87%D0%B0-2---biggest-of-3

Failed compiling

Exit code: 1

Error
```
task02.c:3:3: error: use of undeclared identifier 'flaot'
  flaot a, b ,c;
  ^
task02.c:4:22: error: use of undeclared identifier 'a'
  scanf("%f %f %f", &a, &b, &c);
                     ^
task02.c:4:26: error: use of undeclared identifier 'b'
  scanf("%f %f %f", &a, &b, &c);
                         ^
task02.c:4:30: error: use of undeclared identifier 'c'
  scanf("%f %f %f", &a, &b, &c);
                             ^
task02.c:5:6: error: use of undeclared identifier 'a'
  if(a>=b && a>=c) printf("%.1f\n", a);
     ^
task02.c:5:9: error: use of undeclared identifier 'b'
  if(a>=b && a>=c) printf("%.1f\n", a);
        ^
task02.c:5:14: error: use of undeclared identifier 'a'
  if(a>=b && a>=c) printf("%.1f\n", a);
             ^
task02.c:5:17: error: use of undeclared identifier 'c'
  if(a>=b && a>=c) printf("%.1f\n", a);
                ^
task02.c:5:37: error: use of undeclared identifier 'a'
  if(a>=b && a>=c) printf("%.1f\n", a);
                                    ^
task02.c:6:12: error: use of undeclared identifier 'b'
  else if (b>=a && b>=c) printf("%.1f", b);
           ^
task02.c:6:15: error: use of undeclared identifier 'a'
  else if (b>=a && b>=c) printf("%.1f", b);
              ^
task02.c:6:20: error: use of undeclared identifier 'b'
  else if (b>=a && b>=c) printf("%.1f", b);
                   ^
task02.c:6:23: error: use of undeclared identifier 'c'
  else if (b>=a && b>=c) printf("%.1f", b);
                      ^
task02.c:6:41: error: use of undeclared identifier 'b'
  else if (b>=a && b>=c) printf("%.1f", b);
                                        ^
task02.c:7:25: error: use of undeclared identifier 'c'
  else printf("%.1f\n", c);
                        ^
15 errors generated.

```

## Task 3: Number to Text [5/5 points]
https://github.com/elsys/c-programming-homework/tree/master/A/02#%D0%97%D0%B0%D0%B4%D0%B0%D1%87%D0%B0-3---number-to-text

### Testcase 1 passed
### Testcase 2 passed

## Task 4: Symmetric letters [0/5 points]
https://github.com/elsys/c-programming-homework/tree/master/A/02#%D0%97%D0%B0%D0%B4%D0%B0%D1%87%D0%B0-4---symmetric-letters

Compiled with warning(s)
```
task04.c:4:15: warning: format specifies type 'int *' but the argument has type 'char *' [-Wformat]
  scanf("%d", &a);
         ~~   ^~
         %s
1 warning generated.

```
### Testcase 1 failed
### Testcase 2 failed
### Testcase 3 failed
