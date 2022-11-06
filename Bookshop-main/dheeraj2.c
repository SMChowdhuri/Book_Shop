#include <stdio.h>
int main()
{
    int x, y, z;
    int p, q, r, s, t, u, v,w,m;
    printf("enter amount Paid : ");
    scanf("%d", &x);
    printf("\n");
    printf("enter due :");
    scanf("%d", &y);
    z = x - y;
    if (z > 500)
    {
        p = z / 500;
        printf("500 Rupees : %d", p);
        printf("\n");
        z = z % 500;
    }
    else
        printf("500 Rupees : 0");
        printf("\n");
    if (z > 200)
    {
        q = z / 200;
        printf("200 Rupees : %d", q);
        printf("\n");
        z = z % 200;
    }
    else
        printf("200 Rupees : 0");
        printf("\n");
    if (z > 100)
    {
        r = z / 100;
        printf("100 Rupees : %d", r);
        printf("\n");
        z = z % 100;
    }
    else
        printf("100 Rupees : 0");
        printf("\n");
      if (z > 50)
    {
        s = z / 50;
        printf("50 Rupees : %d", s);
        printf("\n");
        z = z % 50;
    }
    else
        printf("50 Rupees : 0");  
        printf("\n"); 
         if (z > 20)
    {
        m = z / 20;
        printf("20 Rupees : %d", m);
        printf("\n");
        z = z % 20;
    }
    else
        printf("20 Rupees : 0");
        printf("\n");
         if (z > 10)
    {
        t = z / 10;
        printf("10 Rupees : %d", t);
        printf("\n");
        z = z % 10;
    }
    else
        printf("10 Rupees : 0");
        printf("\n");
         if (z > 5)
    {
        u = z / 5;
        printf("5 Rupees : %d", u);
        printf("\n");
        z = z % 5;
    }
    else
        printf("5 Rupees : 0");
        printf("\n");
         if (z > 2)
    {
        v = z / 2;
        printf("100 Rupees : %d", v);
        printf("\n");
        z = z % 2;
    }
    else
        printf("2 Rupees : 0");
        printf("\n");
           if (z > 1)
    {
        w = z / 1;
        printf("1 Rupees : %d", w);
        printf("\n");
        z = z % 1;
    }
    else
        printf("1 Rupees : 0");
        printf("\n");
}