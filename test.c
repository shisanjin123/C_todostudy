#include <stdio.h>
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

int main(int argc, char const *argv[])
{
    int a, b, c, d, y;
    if (a < b)
        if (c == d)
            y = 0;
        else
            y = 1;

    return 0;
}
