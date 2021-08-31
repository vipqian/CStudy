#define _CRT_SECURE_NO_WARNING
// 选择语句，循环语句, 函数、数组
#include <stdio.h>

int main()
{
    // 定义存在10个整型的数组，并且赋值
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char ch[10];
    // 访问元素可以通过下标的方式进行访问
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", arr[i]);
        i++;
    }

    return 0;
}

// int add(int x, int y)
// {
//     int z = x + y;
//     return z;
// }

// int main()
// {
//     int x = 10;
//     int y = 10;
//     int sum = 0;
//     sum = add(x, y);
//     printf("%d\n", sum);
//     return 0;
// }

// 循环语句
// int main(){
//     int line = 0;
//     while(line < 100){
//         line++;
//         printf("写一行代码: 代码行数：%d\n", line);
//     };
//     if (line == 100){
//         ("拿到好的offer\n");
//     }else{
//         printf("error\n");
//     };
//     return 0;
// }

// // 选择语句
// int main(){
//     int code = 0;
//     printf("你好好好学习吗？<0/1> >:");
//     scanf("%d", &code);
//     if(code == 0)
//         printf("没有选择好好学习，回家卖红薯\n");
//     else
//         printf("好好学习 天天向上\n");
//     return 0;
// }