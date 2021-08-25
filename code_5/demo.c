#define _CRT_SECURE_NO_WARNING
// 字符串、转义字符、注释
#include <stdio.h>
#include <string.h>


int main(){
    // 转义字符
    // printf("c:\\code\\demo.c\n");
    printf("%d\n", strlen("c:/code/32/demo.c"));
    // /32标识八进制的数字，八进制转换十进制后在ASCII码中代表的字符
    return 0;
}



// int main(){
//     char arr1[] = "abc";
//     char arr2[] = {'a', 'b', 'c'};
//     // strlen() 获取字符串长度
//     printf("%d\n", strlen(arr1)); //3
//     printf("%d\n", strlen(arr2)); //随机值
//     return 0;
// }



// int main(){
//     // 默认添加了\0
//     char arr[] = "abc";
//     char arr2[] = {'a', 'b', 'c', 0};
//     printf("%s\n", arr);
//     printf("%s\n", arr2);
//     return 0;
// }


