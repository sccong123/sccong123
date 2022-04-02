// int main()
// {
//     int a=10;
//     int b=20;
//     int c=30;
//     int d=40;
//     int* arr[4]={&a,&b,&c,&d};
//     int i=0;
//     for(i=0;i<4;i++)
//     {
//         printf("%d\n", *(arr[i]));
//     }
//     return 0;
// }
// int main()
// {
//     int arr1[]={1,2,3,4,5};
//     int arr2[]={2,3,4,5,6};
//     int arr3[]={3,4,5,6,7};
//     int* paar[]={arr1,arr2,arr3};
//     int i=0;
//     for(i=0;i<3;i++)
//     {
//         int j=0;
//         for(j=0;j<5;j++)
//         {
//             printf("%d",*(paar[i]+j));
//         }
//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     char* arr[5];
//     char* (*pa)[5]=&arr;
//     return 0;
// }
// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int (*pa)[10]=&arr;
//     int i=0;
//     for(i=0;i<10;i++)
//     {
//         printf("%d",(*pa)[i]);
//     }
//     return 0;
// }
// void print1(int arr[3][5],int x,int y)
// {
//     int i=0;
//     int j=0;
//     for(i=0;i<x;i++)
//     {
//         for(j=0;j<y;j++)
//         {
//             printf(" %d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// void print2(int (*p)[5],int x,int y)
// {
//     int i=0;
//     for(i=0;i<x;i++)
//     {
//         int j=0;
//         for(j=0;j<y;j++)
//         {
//             // printf(" %d ",*(*(p+i)+j));
//             printf("%d",(*(p+i))[j]);
//         }
//         printf("\n");
//     }

// }
// int main()
// {
//     int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//     print1(arr,3,5);
//     print2(arr,3,5);
//     return 0;
// }
// int main()
// {
//     char a='w';
//     char* p=&a;
//     char* p2="abcdef";  //p2存放的是首元素a的地址。
//     int* arr[10];   //指针数组   数组有10个元素  为指针类型
//     char* arr[5];
//     //数组指针
//     int* p3; //整形指针 指向整形
//     char* p4;//字符指针 指向字符的
//     int arr2[5];
//     int (*p)[5]=&arr2;
//     //int (*)[5];  数组指针类型
//     return 0;
// }
// void print(int* p,int sz)
// {
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d\n",*(p+i));
//     }
// }
// int main()
// {

//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int* p=arr;
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     print(p,sz);
//     return 0;
// }
// void print(char* str)
// {
//     printf("%s\n",str);

// }
// int main()
// {
//     void (*p)(char*)=print;
//     (*p)("hello bit");
//     return 0;
// }