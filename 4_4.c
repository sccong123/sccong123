#include<stdio.h>
#include<stdlib.h>
// void bubble_sort(int arr[],int sz)
// {
//     int i=0;
//     for(i=0;i<sz-1;i++)
//     {
//         int j=0;
//         for(j=0;j<sz-i-1;j++)
//         {
//             int temp;
//             if(arr[j]>arr[j+1])
//             {
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[10]={2,3,4,8,5,12,1,44,6,13};
//     int i=0;
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<sz;i++)
//     {
//         printf(" %d ",arr[i]);
//     }
//     printf("\n");
//     bubble_sort(arr,sz);
//     for(i=0;i<sz;i++)
//     {
//         printf(" %d ",arr[i]);
//     }    
//     return 0;
// }
// struct Stu
// {
//     char name[20];
//     int age;
// // };
// int cmp_int(const void*e1,const void*e2)
// {
//     return *(int*)e1-*(int*)e2;
// }
// void test2()
// {
//     int arr[]={9,8,7,6,5,4,1,2,3,5,4};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     qsort(arr,sz,sizeof(arr[0]),cmp_int);
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         printf(" %d ",arr[i]);
//     }
// }
// int float_cmp(const void*e1,const void*e2)
// {
//     return(int)(*(float*)e1)-(*(float*)e2);
// }
// void test1()
// {
//     float p[]={4.0,5.0,3.0,1.0,6.0,7.0,2.0};
//     int sz=sizeof(p)/sizeof(p[0]);
//     qsort(p,sz,sizeof(p[0]),float_cmp);
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         printf(" %f ",p[i]);
//     }
// }
// int cmp_struct(const void*e1,const void*e2)
// {
//     return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
// }
// void test3()
// {
//     struct Stu s[3]={{"zhangsan",20},{"lisi",18},{"wangwu",35}};
//     int sz=sizeof(s)/sizeof(s[0]);
//     qsort(s,sz,sizeof(s[0]),cmp_struct);
// }
// int main()
// {
    
// //     //test1();
//      test2();
// //     test3();
//      return 0;
// }
// int main()
// {
//     int a[]={1,2,3,4};
//     printf("%d\n",sizeof(a));  //16  sizeof(a)是整个数组 单位字节 所以是16
//     printf("%d\n",sizeof(a+0));//8 表示首元素地址 地址的大小4/8字节
//     printf("%d\n",sizeof(*a));//4  *a首元素  解引用 4个字节
//     printf("%d\n",sizeof(a+1)); //a+1第二个元素地址 8个字节
//     printf("%d\n",sizeof(a[1]));// 4 第二个元素的大小
//     printf("%d\n",sizeof(&a));//整个数组的地址  地址为8个字节
//     printf("%d\n",sizeof(*&a));//16 整个数组的大小
//     printf("%d\n",sizeof(&a+1));//跳过整个数组的下一个地址 8字节
//     printf("%d\n",sizeof(&a[0]));//第一个元素地址 8字节
//     printf("%d\n",sizeof(&a[0]+1));//第二个地址 8字节
//     return 0;
// }
