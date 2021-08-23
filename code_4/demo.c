#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

// 枚举型常量
/*
枚举————可以被一一列举的
枚举关键字----enum
*/
// 创建枚举类型
enum Sex
{
    MALE,
    FIMALE,
    SECRET
};
// MALE, FIMALE, SECRE为枚举常量
int main(){
    enum Sex sex = MALE;
    sex = FIMALE;
    // 只能修改枚举里的值
    // FIMALE = 6 是错误的error

    printf("%d\n", MALE);  //0
    printf("%d\n", FIMALE);//1
    printf("%d\n", SECRET);//2
    return 0;
}



// // #define定义的标识常量
// #define MAX 10
// int main(){

//     int arr[MAX] = {0};
//     printf("%d\n", arr[0]);
//     return 0;
// }


// int main(){
//     // const 常数项
//     // num为const修饰的常变量，不可被改变
//     // nun为变量，但是还有常属性，所以说num为常变量
//     const int num = 8;
//     return 0;
// }

// int main(){
//     // 字面常量
//     123;
//     return 0;
// }