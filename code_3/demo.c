#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
// 全局变量作用域
int main(){
    extern int g_age;
    printf("g_age:%d\n", g_age);
    return 0;
}

// int num = 1;
// void test(){
//     printf("test() -->%d\n", num);
// }

// int main(){
//     test();
//     printf("main() -->%d\n", num);
// }

// // 变量作用域
// int main(){
//     {
//         // mum的作用域只在代码块（大括号）内部，此代码会编译失败
//         int num = 0;
//     }
//     printf("%d\n", num);
//     return 0;
// }

// int num = 0;
// int main(){
//     int num = 10;
//     // 建议局部变量和全局变量的值不要相同，容易产生误会，当全局变量和局部变量同事存在是，优先使用局部变量
//     printf("%d\n", num);
//     return 0;
// }

// int main(){
//     // C语言规定。所有定义的变量需要放到代码块前部
//     int num1 = 0;
//     int num2 = 0;
//     int sum1 = 0;
//     // scanf:输入函数 &：取地址符号
//     scanf("%d%d", &num1, &num2);
//     sum1 = num1 + num2;
//     printf("sum = %d\n", sum1);
//     return 0;
// }

