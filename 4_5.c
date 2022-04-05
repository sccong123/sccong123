#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
// int main()
// {
//     int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
//     int *ptr1=(int *)(&aa+1);
//     int *ptr2=(int *)(*(aa+1));
//     printf("%d\n",*(ptr1-1));
//     printf("%d",*(ptr2-1));
//     return 0;
// }
// void reverse(char* str)
// {
//     assert(str);
//     int len=strlen(str);
//     char* left=str;
//     char* right=str+len-1;
//     while(left<right)
//     {
//         char temp=*left;
//         *left=*right;
//         *right=temp;
//         left++;
//         right--;
//     }
// }
// int main()
// {
//     char arr[256]="abcde";
//     //scanf("%s",arr);
//     reverse(arr);
//     printf("%s",arr);
//     return 0;
// }
// int main()
// {
//     int a;
//     int n;
//     int i;
//     int sum=0;
//     int ret=0;
//     scanf("%d%d",&a,&n);
//     for(i=0;i<n;i++)
//     {
//         ret=ret*10+a;
//         sum+=ret;
//     }
//     printf("%d",sum);
//     return 0;
// }
// int main()
// {
//     int i=0;
//     for(i=0;i<100000;i++)
//     {
//         int tmp=i;
//         int sum=0;
//         int n=1;
//         while(tmp/10)
//         {
//             n++;
//             tmp/=10;
//         }
//         tmp=i;
//         while(tmp)
//         {
//             sum+=pow(tmp%10,n);
//             tmp/=10;
//         }
//         if(i==sum)
//             printf("%d\n",i);
//     }
//     return 0;
// }
int main()
{
    int money=0;
    scanf("%d",&money);
    int empty=0;
    int total=0;
    total=money;
    empty=money;
    while(empty>=2)
    {
        total=total+empty/2;
        empty=empty/2+empty%2;
    }
    printf("%d",total);
    return 0;
}