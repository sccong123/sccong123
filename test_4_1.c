#include<stdio.h>
// int main()
// {
//     // char 字符数据型
//     // short 短整型
//     // int  整形 
//     // long 长整形
//     // long long更长的整形
//     // float 单精度浮点数
//     // double 双精度浮点数。
//     int a=10;
//     float f=10.0;
//     short a =10;
//     short int a=10;
//     return 0;
// }

// void test()
// {
//     printf("hehe");
// }
// int main ()
// {
//     test();
//     return 0;
// }

// int test()
// {
//     int a=1;
//     char* p=(char*)&a;
//     // if(*p==1)
//     // return 1;
//     // else
//     // return 0;
//     return *p;
// }
// //指针类型意义    char*p *p访问一个字节   int*p  *p访问了4个字节。
// int main()
// {
//     //返回1小端
//     //返回0大端
//     int ret=test();
//     if(ret==1)
//     printf("小端");
//     else
//     printf("大端");

//     return 0;
// }

// int main()
// {   
//     char a=-128;
//     printf("%u",a);
//     return 0;
// }
// #include <windows.h>
// int main()
// {
//     unsigned int a;
//     for(a=9;a>=0;a--)
//     {
//         printf("%u\n",a);
//         Sleep(10);
//     }
//     return 0;
// }