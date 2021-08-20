#include <stdio.h>
// 数据类型

// char        字符类型
// short       也叫short int 短整型 
// int         整型
// long        常正新
// long long   更长的整型
// float       浮点型
// double      双精度浮点型

// int main(){
//     // 定义变量ch为字符类型，将字符A赋值给ch变量
//     char ch = 'A';
//     // %c打印字符类型的格式
//     printf("%c\n",ch); 
//     int age = 20;
//     // %d打印整型类型的格式
//     printf("%d\n", age);
//     return 0;
// }

// 字节
// 计算机的单位 bit byte kb mb gb 
// bit计算机中最小的单位只能存放0或者1
// 一个字节等于8个比特位：byte=8bit
// 1kb=1024bit
// 1mb=1024kb
// 1gb=1024mb
int main(){
    // sizeof 函数的作用是XX的大小
    // 打印每种类型的字节
    printf("Print the size of each data type\n");
    printf("char type size: %lu\n", sizeof(char));
    printf("int type size: %lu\n", sizeof(int));
    printf("long type size: %lu\n", sizeof(long));
    printf("long long type size: %lu\n", sizeof(long long));
    printf("float type size: %lu\n", sizeof(float));
    printf("double type size: %lu\n", sizeof(double));
    return 0;
}