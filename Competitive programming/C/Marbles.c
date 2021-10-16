/*There are n marbles in a row. A child has to divide the marbles in halves untill he gets one marble. Find the minimum number of steps required to get the single marble.

Input variables:-
int t: no of test cases
int n: no of marbles

Output Description:
Print the number of minimum steps required to didvide the marbles into half untill one marble is left

Constraints:
1<=t<=100
1<=n<=1024

Sample input:
2
9
8

Sample Output:
3
3

Explaination:
9 can be divided into two halves first that is 4 and 5 then 4 can be divided into 2 and 2 in second step and then in the third step 2 can be divided into 1 and 1

8 can be divided into two halves first that is 4 and 4 then 4 can be divided into 2 and 2 in second step and then in the third step 2 can be divided into 1 and 1 */
#include <stdio.h>
int main()
{

    int i;
    scanf("%d", &i);
    while(i != 0){
    int a;
    scanf("%d", &a);
    int count = 0;
    while (a > 0)
    {
        a = a / 2;
        count++;
        if (a == 1)
        {
            break;
        }
    }
    printf("%d ", count);
    i--;
    }
}