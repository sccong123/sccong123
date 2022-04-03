#include<stdio.h>

// int Add(int x,int y)
// {
//     return x+y;
// }
// int Sub(int x,int y)
// {
//     return x-y;
// }
// int Mul(int x,int y)
// {
//     return x*y;
// }
// int Div(int x,int y)
// {
//     return x/y;
// }
// int main()
// {
//     int z;
//     int (*p)(int,int)=Add;
//     int (*parr[4])(int,int)={Add,Sub,Mul,Div};
//     // printf("%d\n",z);
//     printf("%d\n",p(3,4));
//     int i=0;
//     for(i=0;i<4;i++)
//     {
//        z=parr[i](8,4);
//         printf("%d\n",z);
//     }
//     return 0;
// }

// char* (*pf)(char*,const char*)=my_strcpy;
// char* (*parr[4])(char*,const char*);
// int Add(int x,int y)
// {
//     return x+y;
// }
// int Sub(int x,int y)
// {
//     return x-y;
// }
// int Mul(int x,int y)
// {
//     return x*y;
// }
// int Div(int x,int y)
// {
//     return x/y;
// }
// void menu()
// {
//     printf("********************\n");
//     printf("****1.Add**2.Sub****\n");
//     printf("****3.Mul**4.Div****\n");
//     printf("*********0.exit*****\n");
//     printf("********************\n");
// }
// int main()
// {
//     int input=0;
//     int a=0;
//     int b=0;
//     int (*parr[5])(int x,int y)={0,Add,Sub,Mul,Div};
//     do
//     {
//         menu();
//         printf("请选择，输入");
//         scanf("%d",&input);
//         if(input>=1&&input<=4)
//         {
//             printf("请输入数字");
//             scanf("%d%d",&a,&b);
//             int ret=parr[input](a,b);
//             printf("%d\n",ret);
//         }
//         else if(input==0)
        
//             printf("退出");
//         else
//         printf("请重新输入\n");
        // switch(input)
        // {
        // case 1:
        //     printf("%d\n",Add(a,b));
        //     break;
        // case 2:
        //     printf("%d\n",Sub(a,b));
        //     break;
        // case 3:
        //     printf("%d\n",Mul(a,b));
        //     break;
        // case 4:
        //     printf("%d\n",Div(a,b));
        // case 0:
        //     printf("退出");
        //     break;
        // default:
        //     printf("输入错误");
        //     break;
        // }
    // }while(input);
// }
int main()
{
    int arr[10]={0};
    int (*p)[10]=&arr;
    int (*pfarr[4])(int,int);
    int (*(*pfarr)[4])(int,int)=&pfarr;
    return 0;
}