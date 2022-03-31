#include<stdio.h>
// #include<math.h>
// int main()
// {
//     int i=100;
//     int j=0;
//     int c=0;
//     for(i=100;i<=200;i++)
//     {
//         for(j=2;j<=sqrt(i);j++)
//         {
//             if(i%j==0)
//             {
//                 break;
//             }
//         }
//         if(j>sqrt(i))
//         {
//             printf("%d是素数\n",i);
//             c++;
//         }
//     }
//     printf("%d个素数。",c);
//     return 0;
// }


//求闰年~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// int main()
// {
//     int i=1000;
//     int sum=0;
//     for(i=1000;i<=2000;i++)
//     {
//         if(i%4==0&&i%100!=0)
//         {
//             printf("%d是闰年\n",i);
//             sum++;
//         }
//         else if (i%400==0)
//         {
//             printf("%d是闰年\n",i);
//             sum++;
//         }
//     }
//     printf("%d个\n",sum);
//     return 0;
// }


//最大公约数~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// int main()
// {
//     int m =6;
//     int n =16;
//     int c=0;
//     while(m%n)
//     {
//         c=m%n;
//         m=n;
//         n=c;
//     }
//     printf("最大公约数%d",n);
//     return 0;
// }


// int main()
// {
//     int i=1;
//     for(i=1;i<100;i++)
//     {
//         if(i%3==0)
//         {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }


// int main()
// {
//     int a=0;
//     int b=0;
//     int c=0;
//     int d=0;
//     scanf("%d%d%d",&a,&b,&c);
//     if(a<b)
//     {
//         d=a;
//         a=b;
//         b=d;
//     }
//     if(a<c)
//     {
//         d=a;
//         a=c;
//         c=d;
//     }    
//     if(b<c)
//     {
//         d=b;
//         b=c;
//         c=d;
//     }    
//     printf("%d%d%d",a,b,c);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int left =0;
//     int right =sz-1;
//     int k=4;
//     while(left<=right)
//     {
//         int mid=(left+right)/2;
//         if(k>arr[mid])
//         {
//             left=mid+1;
//         }
//         else if(k<arr[mid])
//         {
//             right=mid-1;
//         }
//         else
//         {

//             printf("找到了，下标是%d",mid);
//             break;
//         }

//     }
//     if(left>right)
//     {
//         printf("找不到了");
//     }

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i=0;
//     int f=1;
//     double sum =0.0;
//     for(i=1;i<=100;i++)
//     {
//         sum+=f*1.0/i;
//         f=-f;
//     }
//     printf("%.6f",sum);
//     return 0;
// }
// # include<stdio.h>
// int main()
// {
//     int arr[]={11,2,3,4,522,6,7,8,9,10};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int max =arr[0];
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         if(max<arr[i])
//         {
//             max=arr[i];
//         }
//     }
//     printf("最大值为%d\n",max);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i=1;
//     int j=1;
//     int z=0;
//     for(i=1;i<10;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             z=i*j;
//             printf("%d*%d=%2d  ",i,j,z);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void menu()
// {
// 	printf("**********************************\n");
// 	printf("****   1. play    0.exit      ****\n");
// 	printf("**********************************\n");
// }
// //RAND_MAX-32767
// void game()
// {
// 	//1. 生成一个随机数
// 	int ret = 0;
// 	int guess = 0;//接收猜的数字
// 	//拿时间戳来设置随机数的生成起始点
// 	//time_t time(time_t *timer)
// 	//time_t
// 	ret = rand()%100+1;//生成1-100之间随机数
// 	//printf("%d\n", ret);
// 	//2. 猜数字
// 	while(1)
// 	{
// 		printf("请猜数字:>");
// 		scanf("%d", &guess);
// 		if(guess>ret)
// 		{
// 			printf("猜大了\n");
// 		}
// 		else if(guess<ret)
// 		{
// 			printf("猜小了\n");
// 		}
// 		else
// 		{
// 			printf("恭喜你，猜对了\n");
// 			break;
// 		}
// 	}
// }
// int main()
// {
// 	int input = 0;
// 	srand((unsigned int)time(NULL));
// 	do 
// 	{
// 		menu();
// 		printf("请选择>:");
// 		scanf("%d", &input);
// 		switch(input)
// 		{
// 		case 1:
// 			game();//猜数字游戏
// 			break;
// 		case 0:
// 			printf("退出游戏\n");
// 			break;
// 		default:
// 			printf("选择错误\n");
// 			break;
// 		}
// 	} while (input);
// 	return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char input[20]={0};
//     system("shutdown -s -t 60");
// again:
//     printf("电脑在60s之后关机请输入我是猪\n");
//     scanf("%s",input);
//     if(strcmp(input,"我是猪")==0)
//     {
//         system("shutdown -a");
//     }
//     else
//     {
//         goto again;
//     }
//     return 0;
// }

// #include<stdio.h>

// int add(int x,int y)
// {
//     int z=0;
//     z=x+y;
//     return z;
// }
// int main()
// {
//     int a=10;
//     int b=20;
//     int z=0;
//     z=add(a,b);
// printf("%d",z);

//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char arr1[]="woshishui";
//     char arr2[20]="###########";
//     strcpy(arr2,arr1);
//     printf("%s",arr2);
//     return 0;
// }
// #include<stdio.h>
// int get_max(int x,int y)
// {
//     if(x<y)
//         return y;
//     else
//         return x;
// }
// int main()
// {
//     int a=10;
//     int b=25;
//     int max=get_max(a,b);
//     printf("max=%d\n",max);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a=15;
//     int*pa=&a;
//     *pa=20;
//     printf("%d",a);
//     return 0;
// }

// #include<stdio.h>
// void swap(int*pa,int*pb)
// {
//     int temp=0;
//     temp=*pa;
//     *pa=*pb;
//     *pb=temp;
// }
// int main()
// {
//     int a =10;
//     int b =15;
//     swap(&a,&b);
// printf("a=%d,b=%d",a,b);
//     return 0;
// }
//构造函数判断是不是素数
// #include<stdio.h>
// #include<math.h>
// int is_prime(int n)
// {
//     int j=0;
//     for(j=2;j<=sqrt(n);j++)
//     {
//         if(n%j == 0)
//             return 0;
//     }
//     return 1;
// }
// int main()
// {
//     int i=0;
//     for(i=100;i<=200;i++)
//     {
//         if(is_prime(i) ==1)
//         {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// int is_leap_year(int y)
// {
//     if((y%4==0)&&(y%100!=0)||(y%400==0))
//         return 1;
// }
// int main()
// {
//     int year=0;
//     for(year=1000;year<=2000;year++)
//     {
//         if(1==is_leap_year(year))
//         printf("%d\n",year);
//     }


//     return 0;
// }

// #include<stdio.h>
// int binary_search(int arr[],int k,int sz)
// {
//     int left=0;
//     int right=sz-1;
//     while(left<=right)
//     {
//         int mid=(left+right)/2;
//         if(arr[mid]>k)
//         {
//            right=mid-1;
//         }
//         else if(arr[mid]<k)
//         {
//             left=mid+1;
//         }
//         else
//         {
//             return mid;
//         }
//        }
//     return -1;
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int k=8;
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int ret=binary_search(arr,k,sz);
//     if(ret==-1)
//     {
//         printf("没找到");

//     }
//     else
//     {
//         printf("找到了下标为%d",ret);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     printf("%d\n",strlen("abcerfg"));

//     return 0;
// }

//3-24---------------------------------------------------------------------
// #include<stdio.h>
// //函数声明
// int add(int x,int y);
// int main()
// {
//     int a=10;
//     int b=15;
//     int sum=0;
//     //函数调用
//     sum=add(a,b);
//     printf("%d\n",sum);
//     return 0;
// }
// //函数定义
// int add(int x,int y)
// {
//     int z=x+y;
//     return z;
// }
// #include<stdio.h>
// int main()
// {
//     printf("hehe\n");
//     main();

//     return 0;
// }
// #include<stdio.h>
// void print(int n)
// {
//     if(n>9)
//     {
//         print(n/10);
//     }
//     printf("    %d   "  ,n%10);

// }
// int main()
// {
//     unsigned int num =0;
//     scanf("%d",&num);
//     print(num);

//     return 0;
// }
// #include<stdio.h>
// int my_strlen(char* abb)
// {
//     int count =0;
//     while(*abb!='\0')
//     {
//         count++;
//         *abb++;
//     }
//     return count;
// }

// int main()
// {
//     char arr[]="bit";
//     int len=my_strlen(arr);
//     printf("len=%d\n",len);
//     return 0;
// }
// #include<stdio.h>
// int my_strlen(char* abb)
// {
//     if(*abb != '\0')
//     {
//         return 1+my_strlen(abb+1);
//     }
//         return 0;
// }
// int main()
// {
//     char arr[]="bit";
//     int len=my_strlen(arr);
//     printf("len=%d\n",len);

//     return 0;
// }
// int fac2(int n)
// {
//     int ret=1;
//     int count=0;
//     if(n-count>1)
//     {
//         ret=n*fac2(n-1);
//         count++;
//     }
// }   
// int fac2(int n)
// {
//     if(n<=1)
    
//         return 1;
//     else
//         return n*fac2(n-1);
// }
// int main()
// {
//     int n=0;
//     int ret=0;
//     scanf("%d",&n);
//     ret=fac2(n);
//     printf("%d",ret);

//     return 0;
// }

// int fib(int n)
// {
//     if(n<=2)
//     return 1;
//     else
//     return fib(n-1)+fib(n-2);
// }
// int fib(int n)
// {
//     int a=1;
//     int b=1;
//     int c=1;
//     while(n>2)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         n--;
//     }
//     return c;
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int ret=fib(n);

//     printf("ret=%d\n",ret);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     char arr[]="abcdefgh";
//     char arr1[]={1,2,3,4,5,6,7,8,9,10};
//     printf("%c\n",arr[3]);
//     int i =0;
//     for(i=0;i<7;i++)
//     {
//         printf("%c",arr[i]);
//         printf("%d",arr1[i]);
//     }
//     return 0;
// } 

// #include<stdio.h>
// int main()
// {
//     int arr[4]={1,2,3,4};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         printf("&arr[%d]=%p\n",i,&arr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int arr[][4]={{1,2,3,4},{1,2,3,4}};
//     printf("%d",arr[1][2]);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int arr[3][4]={{1,2,3},{4,5}};
//     int i=0;
//     int j=0;
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             printf("  %d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// #include<stdio.h>
// int main()
// {
//     // int a=0;
//     // float b;
//     // float c;
//     // float d;
//     // scanf("%d,%f,%f,%f",&a,&b,&c,&d);
//     // printf("%d,   %f",a,b);
//     // // printf("The each subject score of No. %d is %.2f,%.2f,%.2f ",a,b,c,d);
    
    
//     int id=0;
//     float c=0.0;
//     float math=0.0;
//     float english=0.0;
//     scanf("%d;%f,%f,%f",&id,&c,&math,&english);
//     printf("The each subject score of   No. %d is %.2f, %.2f, %.2f.",id,c,math,english);
//     return 0;
// // }
//  #include<stdio.h>
// int main()
// {
//     int a=0;
//     int b=0;
//     int temp=0;
//     scanf("%d,%d",&a,&b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("%d%d",a,b);
    
//     return 0;
// }
//A65 a97

// #include<stdio.h>
// int main()
// {
//     int ch=0;
//     while(scanf("%c",&ch)!=EOF)
//     {
//     getchar();
//     ch+=32;
//     printf("%c\n",ch);        
//     }
//     return 0;
// }
// #include<stdio.h>
// void bubble_pai(int arr[],int sz)
// {
//     int i=0;
//     for(i=0;i<sz-1;i++)
//     {
//         int j=0;
//         int y=1;
//         for(j=0;j<sz-i-1;j++)
//         {
//             int temp=0;
//             if(arr[j]>arr[j+1])
//             {
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 y=0;
//             }
//         }
//         if(y == 1)
//         {
//             break;
//         }
//     }
// }
// int main()
// {
//     int arr[]={20,1,8,9,12,16};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     bubble_pai(arr,sz);
//     int i =0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d\n",arr[i]);

//     }
// }
// #include <stdio.h>
// int main()
// {

//     float a=5/2.0;
//     printf("%f",a);



//     return 0;
// // }
// #include<stdio.h>
// int main()
// {
//     int a=5;
//     int b=3;
//     // int temp =0;
//     printf("before a=%d b=%d\n",a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     // temp=a;
//     // a=b;
//     // b=temp;
//     printf("after a=%d b=%d \n",a,b);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a =0;
//     int count=0;
//     scanf("%d",&a);
//     int i=0;
//     for(i=0;i<32;i++)
//     {
//         if(1 ==((a>>i)&1))
//         count++;
//     }
//     // while(a)
//     // {
//     //     if(a%2==1)
//     //     count++;
//     //     a=a/2;
//     // }
//     printf("%d\n",count);

//     return 0;
// }
// int main()
// {
//     int a =5;
//     int b=0;
//     int c=a||b;
//     printf("%d",c);


//     return 0;
// // }
// struct stu
// {
//     char name[20];
//     int  age;
//     char id[20];
// };
// int main()
// {

//     struct stu s1={"张四",18,"20160612"};
//     printf("%s\n",s1.name);
//     printf("%d\n",s1.age);
//     printf("%s\n",s1.id);

//     return 0;

// // }

// int main()
// {

//     int a=10;  // 在内存中开辟一块空间
//     int *p=&a;   //对a取出他的地址，将地址存放在p中 p就是一个指针变量
//     return 0;

// }
// int main()
// {
//     int a =0x11223355;
//     int* pa=&a;
//     // char* ca=&a;
//     printf("%p\n",pa);
//     // printf("%p\n",ca);


//     return 0;
// }
// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int i=0;
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int* p=arr;
//     for(i=0;i<5;i++)
//     {
//         printf(" %d ",*p);
//         p+=2;
//     }
//     return 0;
// }
// int main()
// {
//     int arr[10]={0,1,2,3,4,5,6,7,8,9};
//     printf("%d",&arr[9]-&arr[0]);
//     return 0;
// }
// int my_strlen(char* str)
// {
//     char*star=str;
//     char*end=str;
//     while(*end!='\0')
//     {
//         end++;
//     }
//     return end-star;
// }
// int main()
// {
//     char arr[]="bitter";
//     int len=my_strlen(arr);
//     printf("%d",len);
//     return 0;
// }
// int main()
// {
//     int a=10;
//     int b=20;
//     int c=30;
    //整形数组--存放整形
    //字符数组--存放字符
    //指针数组--存放指针
    // int* pa=&a;
    // int* pb=&b;
    // int* pc=&c;
//     int* arr2[3]={&a,&b,&c};
//     int i=0;
//     for(i=0;i<3;i++)
//     {
//         printf("%d\n",*(arr2[i]));
//     }
//     return 0;

// }
// int main()
// {
//     int i=0;
//     int sum=0;
//     for(i=0;i<=100;i++)
//     {
//         sum=sum+i;

//     }
//     printf("%d",sum);
//     return 0;
// }

// void init(int arr[],int sz)
// {
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         arr[i]=0;
//     }
// }
// void print(int arr[],int sz)
// {
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d",arr[i]);
//     }
// }
// int main()
// {   
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     print(arr,sz);
//     printf("\n");
//     init(arr,sz);
//     print(arr,sz);
//     return 0;
// }
// void reverse(int arr[],int sz)
// {
//     int arr1[10]={0};
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         arr1[i]=arr[sz-1-i];
//         printf("%d",arr1[i]);
//     }
// }
// void print(int arr[],int sz)
// {
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d",arr[i]);
//     }
// }
// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int arr1[10]={0};
//     int sz=sizeof(arr)/sizeof(arr[0]);

//     print(arr,sz);
//     printf("\n");
//     reverse(arr,sz);
// }
// int main()
// {

//     int arr1[]={1,2,3,4,5};
//     int arr2[]={6,7,8,9,10};
//     int sz=sizeof(arr1)/sizeof(arr1[0]);
//     int temp=0;
//     int i =0;
//     for(i=0;i<sz;i++)
//     {
//         temp=arr1[i];
//         arr1[i]=arr2[i];
//         arr2[i]=temp;
//         printf("arr1=%d\n",arr1[i]);
//         printf("arr2=%d\n",arr2[i]);
//     }
//     return 0;
// }

// int jisuan_count(unsigned int x)
// {
//     int count=0;
//     while(x)
//     {
//         if(x%2==1)
//         {

//             count++;
//         }
//             x=x/2;
//     }
//     return count;
// }
// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     int count=jisuan_count(a);
//     printf("2进制1的个数=%d\n",count);
//     return 0;
// }

// int ji_count(int n)
// {
//     int count=0;
//     while(n)
//     {
//         n=n&(n-1);
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     int count =ji_count(a);
//     printf("%d",count);

// }
//输出二进制数奇数偶数位置
// void print(int m)
// {
//     int i=0;
//     printf("奇数位\n");
//     for(i=30;i>=0;i-=2)
//     {
//         printf("%d",(m>>i)&1);

//     }
//     printf("\n");
//     printf("偶数位");
//     printf("\n");
//     for(i=31;i>=1;i-=2)
//     {
//         printf("%d",(m>>i)&1);
//     }
//     printf("\n");

// }
// int main()
// {
//     int m=0;
//     scanf("%d",&m);
//     print(m);
//     return 0;
// }
//交换a，b两个变量
// int main()
// {
//     int a=0;
//     int b=0;
//     scanf("%d%d",&a,&b);
//     printf("交换前a=%d,b=%d\n",a,b);
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("交换后a=%d,b=%d\n",a,b);
//     return 0;
// }