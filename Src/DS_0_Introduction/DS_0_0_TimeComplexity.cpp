/*
   Author: 02Darling
   Date: 2022/10/1 15:13
   Description: 时间复杂度
 */

#include <stdio.h>

//下面四种函数的时间复杂度值得分析一二

//逐步递增型爱你
void LoveYou0(int n) {
    int i = 1;
    while (i <= n) {
        printf("I love you %d \n", i);
        i++;
    }
    printf("I love you more than %d\n", n);
}

//嵌套循环型爱你
void loveYou1(int n) {
    int i = 1;
    while (i <= n) {
        i++;
        printf("I love you %d\n", i);
        for (int j = 1; j < n; j++) {
            printf("I love you too\n");
        }
    }
    printf("I love you more than %d\n", n);
}

//指数递增型爱你
void loveYou2(int n) {
    int i = 1;
    while (i <= n) {
        printf("I love you %d\n", i);
        i = i * 2;
    }
    printf("I love you more than %d\n ", n);
}

//搜索数字型爱你
void loveYou3(int flag[], int n) {
    printf("I Am kim\n");
    for (int i = 0; i < n; i++) {
        //我觉这里应该是数组长度
        if (flag[i] == n) {
            printf("I love you %d\n", n);
            break;//找到之后就跳出循环
        }
    }
}

//递归型爱你
void loveYou4(int n) {
    int a, b, c;
    if (n > 1) {
        loveYou4(n - 1);
    }
    printf("I love you %d\n", n);
}//递归调用会带来多余的内存开销

/**实现模块**/

/**测试模块**/

//测试函数
void testModule() {
    LoveYou0(30);//O(n)
    loveYou1(30);//O(n^2)
    loveYou2(30);//O(logn)

    int array[5] = {2, 10, 100, 1000, 10000};
    //声明一个数组并初始化
    loveYou3(array, 10);//O(n)
    loveYou4(4);//O(n)
}

/**测试模块**/

int main() {
    testModule();
    return 0;
}
