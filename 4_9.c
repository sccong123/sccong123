#include<stdio.h>
#include<string.h>
// int main()
// {
//     const char* p1="abcdef";
//     const char* p2="abcqew";
//     int ret=strcmp(p1,p2);
//     printf("%d\n",ret);
//     return 0;
// }
// int main()
// {
//     char* p1="abcdefghi";
//     char* p2="defq";
//     char* ret=strstr(p1,p2);
//     if(ret==NULL)
//     printf("没找到");
//     else
//     printf("%s\n",ret);
//     return 0;
// // }
// #include<assert.h>
// char* my_strstr(char* p1,char* p2)
// {
//     assert(p1!=NULL);
//     assert(p2);
//     char *s1=NULL;
//     char *s2=NULL;
//     char *cur=p1;
//     if(*p2=='\0')
//     {
//         return p1;
//     }
//     while(*cur)
//     {
//         s1=cur;
//         s2=p2;
//         while((*s1==*s2)&&(*s1!='\0')&&(*s2!='\0'))
//         {
//             s1++;
//             s2++;
//         }
//         if(*s2=='\0')
//         {
//             return cur;//找到了
//         }
//         cur++;
//     }
//     return NULL;//找不到
// }
// int main()
// {
//     char *p1="abbbc";
//     char *p2="bbc";
//     char* ret=my_strstr(p1,p2);
//     if(ret==NULL)
//     printf("不存在");
//     else
//     printf("%s\n",ret);
//     return 0;
//}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[6]={0};
    memcpy(arr2,arr1,sizeof(arr1));
    printf("%s\n",arr2);
    return 0;
}