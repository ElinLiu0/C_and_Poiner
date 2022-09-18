# 相等的整形声明说明符 
|`short`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`signed short`<br>`short int` `unsigned short`|`unsigned short`<br>`unsigned short int`|
|-|-|
|**`int`**&nbsp;&nbsp;**`signed int`**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**`singned`**|**`unsigned int`**<br>**`unsigned`**|
|**`long`**&nbsp;&nbsp;**`singed long`**<br>**`long int`**&nbsp;**`signed long int`**|**`unsigned long`**<br>**`unsigned long int`**|

### 同时，在声明整型变量时，如果生命中已经至少有一个其他的说明符，关键字int可以省略。因此，下面两个声明的效果是相同的
```c
unsigned short int a;
unsigned short     a;
```