/*Write a program for a matchstick game being played between the computer and a user.Your program should ensure that the
computer always wins. Rules for the game are as follows:
- There are 21 matchsticks.
- The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game.*/
#include <stdio.h>
int main()
{
	int pl, m = 21, comp;
	while (m > 1)
	{
		printf("Total matchsticks = %d\n\n", m);
		printf("Pick 1, 2, 3 or 4 matchsticks : ");
		scanf("%d", &pl);
		if (pl <= 4 && pl >= 1)
		{
			m = m - pl;
			printf("Number of matchsticks left : %d\n\n", m);
			comp = 5 - pl;
			printf("Out of which computer picked : %d\n\n", comp);
			m = m - comp;
			if (m == 1)
			{
				printf("Number of matchsticks left : %d\n\n", m);
				printf("You loose the game");
				break;
			}
		}
		else
		{
			printf("\nInvalid number of matchsticks picked");
			break;
		}
	}
}
