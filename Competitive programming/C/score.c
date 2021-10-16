/*In a certain game, a player's score is decided by the formula a+b*c/a-b , where a, b and c denote his score on levels 1 2 and 3. Given input as a, b and c, you have to find the resulting score of the player.
Write a function to solve the equation and return the result a+b*c/a-b
  
Input Description format:
- First line of input consists of n, the number of players.
- Next n lines, each consist of 3 integers, denoting the scores of player i at levels 1, 2 and 3, separated by a space.

Output Description format:
- Print n lines, each line denoting the score of the player i
  
Input Description:-
int n: number of players
int a: level 1 score
int b: level 2 score
int c: level 3 score
   
Output Description:-
int: The complex result in integer
   
Constraints:-
1 <= n <= 100
1<=a,b,c<=1000  

Example:-
Input:
1
3 2 6

Output:
5

Explaination:-
3+2*6/3-2=5 */
#include <stdio.h>
 int level()
    
    {   int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
       int score= a+b*c/a-b;
        return score;
    }
int main(){
    int n;
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", level());
    }
    
}