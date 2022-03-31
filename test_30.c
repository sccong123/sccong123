#include<stdio.h>
// int main()
// {
//     printf("hello\n");
//     return 0;
// }

// void print(int *p,int sz)
// {
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d \n",*(p+i));
//     }
// }

// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     print(arr,sz);
//     return 0;
// }
// void print_1(int n)
// {
//     int i=0;
//     for(i=1;i<=n;i++)
//     {
//         int j=0;
//         for(j=1;j<=i;j++)
//         {
//             printf("%d *%d = %-3d ",i,j,i*j);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int m=0;
//     scanf("%d",&m);
//     print_1(m);

//     return 0;
// }
// void print(int a)
// {
//     if(a>9)
//     {
//         print(a/10);
//     }
//     printf("%d   ",a%10);
// }
// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     print(a);
//     return 0;
// }
// #include<string.h>

// int my_str(char* str)
// {
//     int count=0;
//     while(*str!='\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
// void reverse(char arr[])
// {
//     int temp=0;
//     int left=0;
//     int right=my_str(arr)-1;
//     while(left<right)
//     {
//         temp=arr[left];
//         arr[left]=arr[right];
//         arr[right]=temp;
//         left++;
//         right--;
//     }
// }
// int main()
// {
//     char arr[]="wolove";
//     reverse(arr);
//     printf("%s\n",arr);
//     return 0;
// }

// int sumjia(int n)
// {
//     if(n>9)
//     {
//         return sumjia(n/10)+n%10;
//     }
//     else
//     {
//         return n;
//     }
// }
// int main()
// {
//     unsigned int a=0;
//     scanf("%d",&a);
//     int ret=sumjia(a);
//     printf("%d",ret);


//     return 0;
// }

// double pow(int n,int k)
// {
//     if(k<0)   
//         return (1.0/(pow(n,-k)));  
//     else if(k==0)  
//         return 1.0;
//     else  
//         return n*pow(n,k-1);
  
// }
// int main()
// {
//     int n=0;
//     int k=0;
//     scanf("%d%d",&n,&k);
//     double ret=pow(n,k);
//     printf("%1f\n",ret);
//     return 0;
// }
typedef struct stu
{
    char name[20];
    short age;
    char tel[12];
    char sex[5];
}Stu;
void print1(Stu temp)
{
    printf("name %s\n",temp.name);
    printf("age %d\n",temp.age);
    printf("tel %s\n",temp.tel);
    printf("sex %s\n",temp.sex);
}
void print2(Stu* ps)
{
    printf("%s\n",ps->name);
    printf("%d\n",ps->age);
    printf("%s\n",ps->tel);    
    printf("%s\n",ps->sex);

int main()
{
    Stu s={"李四",18,"15512104255","男"};
    print1(s);
    print2(&s);
    return 0;
}