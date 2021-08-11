//
//  2021_3.c
//  EPEER
//
//  Created by 박채경 on 2021/08/09.
// 16회 - 3번 (문자열압축)
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10001

char* solution(char str[SIZE])
{
    int k = 0, cnt = 0;
    static char result[SIZE];
    if (str[0] == '1')
    {
        result[k] = '1';
        k++;
    }
    for (int i = 1; i < strlen(str); i++)
    {
        if (str[i] == str[i-1])
            cnt++;
        else
        {
            result[k] = 'A' + cnt;
            cnt = 0; k++;
        }
    }
    result[k] = 'A' + cnt;
    return result;
}

int main()
{
    char str[SIZE];
    scanf("%s", str);
    printf("%s", solution(str));
    
    return 0;
}
*/
