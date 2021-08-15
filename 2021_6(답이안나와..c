//
//  2021_6(답이안나와..c
//  EPEER
//
//  Created by 박채경 on 2021/08/15.
// 16-6번
#include <stdio.h>
#include <stdlib.h>

int solution(int n, int* money);

int main()
{
    int n = 8;
    int money[8] = {5, 7, 10, 1, 2, 10, 10, 8};
    printf("%d", solution(n, money));

    return 0;
}

int max(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}

int min (int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
            return a;
        else
            return c;
    }
    else
    {
        if (b < c)
            return b;
        else
            return c;
    }
}

int solution(int n, int* money)
{
    int list[8] = {0}, k = 0, sum = 0;
    for (int i = 10; i > 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (money[j] == i)
            {
                list[k] = j;
                k++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", list[i]);
        printf("%d ", money[list[i]]);
    }
    //123 132 213 231 312 321  2 1 1 -1 -1 -2  124 142 214 241 421 412
    k = 1;
    while(k < n)
    {
        if (max(list[k-1], list[k], list[k+1]) - min(list[k-1], list[k], list[k+1]) > 2)
        {
            if (k == 1)
                sum += (money[list[k-1]] + money[list[k]]);
            else
                sum += money[list[k]];
        }
        else
        {
            //sum += (money[list[k-1]] + money[list[k]]);
            printf("%d %d\n", k, money[list[k]]);
        }
        k++;
    }
    return sum;
}
