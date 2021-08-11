//
//  2021_1.c
//  EPEER
//
//  Created by 박채경 on 2021/07/01.
//
/*
#include <stdio.h>
#include <stdlib.h>

int solution(int num)
{
    int cnt = 0;
    while(num >= 60)
    {
        if (num >= 3600)
        {
            cnt = cnt + (num/3600);
            num = num % 3600;
        }
        else
        {
            cnt = cnt + (num/60);
            num = num % 60;
        }
    }
    cnt = cnt + num;
    return cnt;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", solution(num));
}
*/
