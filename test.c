#include <stdio.h>
#include <math.h>
#include <string.h>
// int main()
// {
//     struct sc
//     {
//         char a[13];
//         double b;
//     } ks;

//     printf("%d\n", sizeof(ks));
//     return 0;
// }

// int main()
// {
//     char s[] = "1234567890", *p = s, i = 0;
//     while (*p)
//     {
//         /* code */
//         if (i % 2 == 0)
//             *p = '*';
//         p++;
//         i++;
//     }

//     printf("%s\n", s);
// }

// int main()
// {
//     union emp
//     {
//         struct
//         {
//             int x;
//             int y;
//         } stc;
//         int a;
//         int b;
//     } u;
//     u.a = 1;
//     u.b = 2;
//     u.stc.x = u.a + u.b;
//     u.stc.y = u.a + u.b;
//     printf("%d,%d\n", u.stc.x, u.stc.y);
// }

// int main()
// {
//     union
//     {
//         /* data */
//         short int x;
//         long y;
//         unsigned char ch1;
//     } w;
//     w.y = 0x12345678;
//     printf("%x\n", w.y);
//     printf("%x\n", w.x);
//     printf("%x\n", w.ch1);
// }

// int main()
// {
//     struct emp
//     {
//         union
//         {
//             int x;
//             int y;
//         } u;
//         int a;
//         int b;
//     } s;
//     s.a = 1;
//     s.b = 2;
//     s.u.x = s.a + s.b;
//     s.u.y = s.a * s.b;
//     printf("%d,%d\n", s.u.x, s.u.y);
// }

// int main(int argc, char const *argv[])
// {
//     int x = 1, y = 2, z = 3;
//     if (x > y)
//         if (y < z)
//             printf("%d", ++z);
//         else
//             printf("%d", ++y);
//     printf("%d\n", x++);
//     printf("%d", x);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d", &n);
//     if (n++ < 10)
//         printf("%d\n", n);
//     else
//         printf("%d\n", n--);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int a, b, c, d, y;
//     if (a < b)
//         if (c == d)
//             y = 0;
//         else
//             y = 1;

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char grade;
//     scanf("%c", &grade);
//     printf("Your score: ");
//     switch (grade)
//     {
//     case 'A':
//         printf("85~100\n");
//         break;
//     case 'B':
//         printf("70~84\n");
//         break;
//     case 'C':
//         printf("60~69\n");
//         break;
//     case 'D':
//         printf("<60\n");
//         break;
//     default:
//         printf("enter data error!\n");
//     }
//     return 0;
// }

// 输入一个百分制成绩，90upA，80~89B，70~79C，60~69D，60downE
// int main(int argc, char const *argv[])
// {
//     int grade;
//     printf("your score: ");
//     scanf("%d", &grade);
//     switch (grade / 10)
//     {
//     case 10:
//     case 9:
//         printf("A\n");
//         break;
//     case 8:
//         printf("B\n");
//         break;
//     case 7:
//         printf("C\n");
//         break;
//     case 6:
//         printf("D\n");
//         break;
//     case 5:
//         printf("E\n");
//         break;
//     default:
//         printf("error!\n");
//         break;
//     }
//     return 0;
// }

// 输入整型x，判断2 to x内的数是素数还是非素数 并输出（用while循环实现，，用函数调用）
// int su(int n)
// {
//     int j=2;
//     while(j<=n-1) {
//         if(n%j==0) break;
//         j++;
//     }
//     if(j==n) return 1;
//     else return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int x, i=2, y;
//     scanf("%d", &x);
//     while (i<=x)
//     {
//         y=su(i);
//         if (y==1)
//         {
//             printf("%d yes");
//         }else printf("%d no");

//     }

//     return 0;
// }

// 输出所有的水仙花数，三位整数，每一位的立方和等于该数。
//  int main(int argc, char const *argv[])
//  {
//      int x,a,b,c,i;
//     //  scanf("%d",&x);
//      for ( i = 100; i <= 999; i++)
//      {
//          a=i/100;
//          b=i/10%10;
//          c=i%10;
//          if (a*a*a+b*b*b+c*c*c==i)
//          {
//              printf("%d is daffodil number\n", i);
//          }

//     }

//     return 0;
// }


//书麒
// int main()
// {
//     int x, a, b, c, d;
//     scanf("%d,&x");
//     a = x / 100;
//     b = x / 10 % 10;
//     c = x % 10;
//     d = a * a * a + b * b * b + c * c * c;
//     while (x >= 100 && x <= 999)
//     {
//         if (x == d)
//         {
//             printf("%d is 水仙花数\n", x);
//         }
//         x++;
//     }
// }
