//
//  2021_8.c
//  EPEER
//
//  Created by 박채경 on 2021/08/15.
// 16-8번
// goal에서 한쌍씩 바꿔가면서 정렬(원래 번호순대로 돌려야하므로!) == 버블정렬사용
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100001

long long solution(int n, int* goal);

int main()
{
    int n = 4;
    int goal[SIZE] = {2, 1, 4, 3};
    printf("%lld", solution(n, goal));

    return 0;
}

long long solution(int n, int* goal)
{
    int temp;
    long long cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (goal[j] > goal[j+1])
            {
                temp = goal[j];
                goal[j] = goal[j+1];
                goal[j+1] = temp;
                cnt++;
            }
        }
    }
    return cnt;
}
