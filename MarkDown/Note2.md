# <1st class basic knowledge of C++>

>>1st variable(变量)
enable our programs to store some information
>kinds:
1 bool
true/false

2 char
e.g. 'a','c',' '(space),'\n'(enter(回车))
//store single character

3 int
-2147483648 ~ 2147483647
//-2^31~2^31-1(2^32 numbers in total)

4 float(浮点数)
e.g 1.12,2.5,1.235e2
//precision is relatively low,only 6~7 decimal places(小数位)

5 double(双精度浮点数)
//precision is 15~16 decimal places

6 long long
//-2^63~~2^63-1

7 long double
//more precise

*>filesize(文件大小)
B(Byte)
b(bit)

1Byte=8bit

bool-1byte
char-1byte
int-4byte
float-4byte
double-8byte
long long-8byte
long double-at least 8byte

>>2nd define and output variable

define
seen in "kinds" above and cpp document "difineandoutputvariable.cpp"

output
cin >> & cout <<

>summarize of scanf and printf

int:%d
float:%f
double:%lf
char:%c
long long:%lld

&(取地址符号)

//in some situations cin can be used to replace scanf

>>3rd expression(表达式)

1 calculate symbol
//+ - * / %

2 order
the same as math

3 some differences

/integer "/" will output the integer part of the result division(商的整数部分)

/float "/" will output the right the float result(显示浮点数)

/"%" will output the remainder of the division but is kind of different from math
"%" only calculate integer

//e.g.```cout << 5 % 2 << endl;``` will output 1
```cout << -5 % 2 << endl;``` will output -1
and if replace the "2" with "-2" the result wont change

>>4nd common error

1 accepted-green
2 wrong answer-red
3 time limit error-red(超时)
4 memory limit error-red(超内存)
5 segmentation fault-red(数组越界)
6 compile error-red(编写错误)

//don't leave ";" out,it will cause the error in the line or the next line

//markdown ```here is the program where you can write in .md```
