# Simple command line argument or opt helper

See `main.c` for example. Compile using `gcc main.c opt.c -o opt`. Then try:

```sh
~/code/opt$ ./opt -h
help prepend or NULL

Options:
  -h, --help                  display this help and exit
  -f, --set-flag              set a flag
  -c, --callback              test callback
  -i, --int=VALUE             int
                              (default: 0)
  -s, --str=VALUE             str

help append or NULL

~/code/opt$ ./opt -f -c -i 2 -s qwerty
test callback called
flag: 1
int: 2
str: qwerty
```
