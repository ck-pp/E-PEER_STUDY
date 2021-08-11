//
//  2021_4.c
//  EPEER
//
//  Created by 박채경 on 2021/08/09.
// 16-4번 (올바른 괄호배열)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

int solution(int n)
{
    int cnt = 0;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < i+1; j++)
        
    }
}

int main()
{
    char str[SIZE];
    int n;
    scanf("%d", n);
    printf("%d", solution(n));
    return 0;
}
// !위 방법으로 다시 시도해보기!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

int solution(int left, int right)
{
    if (left == 0 && right == 0) // 양괄호가 한쌍 남았으므로 1
        return 1;
    else
    {
        if (left == 0) // 왼쪽 괄호가 없으므로 남은 오른쪽 괄호만 쭉 나와야함 (==1)
            return 1;
        else if (left < right)
            return solution(left-1, right) + solution(left, right-1);
        // 남은 괄호 중 왼쪽이 오른쪽 괄호보다 적을 경우 오른쪽 괄호가 더 적어지기전까지 양쪽 다 하나씩 사용 가능(재귀)
        // 오른쪽이 먼저 나오면 안되므로 항상 남은 오른쪽 괄호 수 >= 남은 왼쪽 괄호 수
        else // 위의 이유로 왼쪽괄호부터(만) 사용 가능
            return solution(left-1, right);
    }
}

int main()
{
    char str[SIZE];
    int n;
    scanf("%d", &n);
    printf("%d", solution(n, n));
    return 0;
}
