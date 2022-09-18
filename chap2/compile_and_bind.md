# 编译和链接

- 编译并链接一个完全包含于一个源文件中的C程序
```bash
cc program.c
```
- 编译并链接几个C源文件
```bash
# 仅需要将源文件名列在一起，C编译器将会以最后一个C源文件为主，将其他的源文件链接起来
cc main.c sort.c lookup.c
```

- 编译一个C源文件，并把它和现有的目标文件链接起来
```bash
# 仅需要将源文件名列在一起，C编译器将会以最后一个C源文件为主，将其他的目标文件链接起来
cc main.o sort.o lookup.c
```
- 编译单个C源文件，并产生一个目标文件（本例中为program.o）,以后再进行链接
```bash
cc -c program.c
```
- 编译几个C源文件，并为每个文件产生一个目标文件
```bash
cc -c main.c sort.c lookup.c
```
- 链接几个目标文件
```bash
cc main.o sort.o lookup.o
```