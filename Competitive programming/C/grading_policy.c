/*Zumba sports club has the following grading policy:-
  - Every player receives a point in the inclusive range from 0 to 100.
  - If a player scores a point less than 35, he is disqualified
 Joy is a coach at the sports club who likes to round each student's point according to these rules:-
  - If the difference between the point and the next multiple of 5 is less than 3, round point up to the next multiple of 5.
  - If the value of point is less than equal to 33, no rounding occurs as the result will still be a disqualifying score.

 Examples:-
 - point = 84 round to 85(85 - 84 is less than 3)
 - point = 29 do not round(point is less than 33)
 - point = 57 do not round(60 - 57 is 3 or higher)
 Given the initial value of point for each of Joy's n players, write code to automate the rounding process.
 
 Input Format:-
 - The first line contains a single integer, n, the number of players.
 - Each line i of the n subsequent lines contains a single integer, points[i].

 Output:-
 - int[n]: the points after rounding as appropriate
 
 Constraints:-
 - 1<=n<=100
 - 0<=points[i]<=100
 
 Sample Input:-
 4
 73
 67
 38
 33
 
 Sample Output:-
 75 
 67
 40
 33
 
 Explaination:-
 1) Player 1 received a 73, and the next multiple of 5 from 73 is 75. Since 75-73<3, the players's point is rounded to 75
 2) Player 2 received a 67, and the next multiple of 5 from 67 is 70. Since 70-67=3, the point will not be modified and the player's final point is 67.
 3) Player 3 received a 38, and the next multiple of 5 from 38 is 40. Since 40-38<3, the player's point will be rounded to 40.
 4) Player 4 received a point less than equal to 33, so the point will not be modified and the player's final point is 33. */
#include <stdio.h>

int main()
{
    int i;
    scanf("%d", &i);
    while (i--){
        int j;
        scanf("%d", &j);
        int temp = ((j/5) + 1 )*5;
        int count = temp - j;
        if (j <= 33)
        {
            printf("%d \n", j);
        }
        else{
            if (count < 3){
                printf("%d \n", temp);
            }
            else {
                printf("%d \n",j);
            }
        }
        
    }
}