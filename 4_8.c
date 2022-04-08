#include<stdio.h>
// void move(int arr[],int sz)
// {
//     int left=0;
//     int right=sz-1;
//     int temp;
//     while(left<right)
//     {
//         while((left<right)&&(arr[left]%2==1))
//         {
//             left++;
//         }
//         while((left<right)&&(arr[right]%2==0))
//         {
//             right--;
//         }
//         temp=arr[left];
//         arr[left]=arr[right];
//         arr[right]=temp;    
//     }
// }
// void print(int arr[],int sz)
// {
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         printf(" %d ",arr[i]);
//     }
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     move(arr,sz);
//     print(arr,sz);
//     return 0;
// }
// int main()
// {
//     int arr[10][10]={0};
//     int i=0;
//     int j=0;
//     for(i=0;i<10;i++)
//     {
//         for(j=0;j<10;j++)
//         {
//             if(j==0)
//             {
//                 arr[i][j]=1;
//             }
//             if(i==j)
//             {
//                 arr[i][j]=1;
//             }

//             if((i>=2)&&(j>=1))
//             {
//                 arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
//             }

//         }
//     }
//     for(i=0;i<10;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int killer=0;
//     for(killer='a';killer<'d';killer++)
//     {
//         if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
//         {
//             printf("killer=%c\n",killer);
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
//     int e=0;
//     for(a=1;a<6;a++)
//     {
//         for(b=1;b<6;b++)
//         {
//             for(c=1;c<6;c++)
//             {
//                 for(d=1;d<6;d++)
//                 {
//                     for(e=1;e<6;e++)
//                     {
//                         if(((b==2)+(a==3)==1)&&((b==2)+(e==4)==1)&&((c==1)+(d==2)==1)&&((c==5)+(d==3)==1)&&((e==4)+(a==1)==1))
//                         {
//                             if(a*b*c*d*e==120)
//                             {
//                                 printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// }
// #include<string.h>
// #include<assert.h>
// void left_move(char arr[],int k)
// {
//     assert(arr!=NULL);
//     int i=0;
//     int len=strlen(arr);
//     for(i=0;i<k;i++)
//     {
//         char temp=*arr;
//         int j=0;
//         for(j=0;j<len-1;j++)
//         {
//             *(arr+j)=*(arr+j+1);
//         }
//         *(arr+len-1)=temp;
//     }
// }
// int main()
// {
//     char arr[]="abcdefghijk";
//     int k=0;
//     scanf("%d",&k);
//     left_move(arr,k);
//     printf("%s\n",arr);

//     return 0;
// }
// #include<string.h>
// #include<assert.h>
// void reverse(char* left,char* right)
// {
//     assert(left !=NULL);
//     assert(right !=NULL);
//     while(left<right)
//     {
//         char temp=0;
//         temp=*left;
//         *left=*right;
//         *right=temp;
//         left++;
//         right--;
//     }
// }
// void left_move(char arr[],int k)
// {
//     int len=strlen(arr);
//     reverse(arr,arr+k-1);
//     reverse(arr+k,arr+len-1);
//     reverse(arr,arr+len-1);
// }
// int main()
// {
//     char arr[]="abcdefghijk";
//     int k=0;
//     scanf("%d",&k);
//     int len=strlen(arr);
//     if(k<=len)
//     {
//         left_move(arr,k);
//         printf("%s\n",arr);
//     }
//     else
//     printf("请重新输入");
//     return 0;
// }
// #include<string.h>
// int main()
// {
//     char arr1[30]="abcd";
//     char arr2[]="ghijklmn";
//     strcat(arr1,arr1);
//     printf("%s\n",arr1);
// }
// #include<string.h>
// int is_move(char* str1,char* str2)
// {
//     int len=strlen(str1);
//     strncat(str1,str1,6);
//     char * ret=strstr(str1,str2);
//     if(ret==NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }
// int main()
// {
//     char arr1[]="abcdef";
//     char arr2[]="cdefab";
//     int ret=is_move(arr1,arr2);
//     if(ret==1)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("No\n");
//     }
//     return 0;
// }

// int find_num(int arr[3][3],int k,int row,int col)
// {
//     int x=0;
//     int y=col-1;
//     while(x<=row-1&&y>=0)
//     {
//         if(arr[x][y]>k)
//         {
//             y--;
//         }
//         else if(arr[x][y]<k)
//         {
//             x++;
//         }
//         else
//         {
//             return 1;
//         }
//     }

// }
// int main()
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int k=0;
//     scanf("%d",&k);
//     int ret=find_num(arr,k,3,3);
//     if(ret==1)
//     {
//         printf("找到了");
//     }
//     else
//     {
//         printf("没找到");
//     }
//     return 0;
// }