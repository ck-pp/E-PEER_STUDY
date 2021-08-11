//
//  2021_2.c
//  EPEER
//
//  Created by 박채경 on 2021/07/01.
// 16회 - 2번 문제 (완전수)
// !수정필요!
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50

char str[SIZE+1][4] = {};
char** solution(int k, int numbers[])
{
    int sum;
    for (int j = 0; j < k; j++)
    {
        sum = 0;
        for (int m = 1; m < numbers[j]/2 + 1; m++)
        {
            if (numbers[j] % m == 0 && m != numbers[j])
            {
                sum+=m;
            }
        }
        if (sum == numbers[j])
            strcpy(str[j],"YES");
        else
            strcpy(str[j],"NO");
    }
    return str;
}

int main()
{
    int k = 3;
    //scanf("%d", &k);
    int numbers[SIZE] = {3, 6, 8128};
    //int* numbers = (int*)malloc(sizeof(int) * k);
    //for (int i = 0; i < k; i++)
    //    scanf("%d", &numbers[i]);
    solution(k, numbers);
    for (int i = 0; i < k; i++)
        printf("%s ", &str[i]);
    

    return 0;
}


