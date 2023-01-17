/*simple Betting Game
"Jack Queen King" - computer shuffles these cards
Player has to guess the position of queen.
if he wins, he takes 3* bet
if he loses, he loses the bet amount
player has $100 initially*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash = 100;
void Play(int bet)
{
	int i;
	int playerGuess;

	char *C = (char *)malloc(3*sizeof(char));
	C[0] = 'J'; C[1] = 'Q'; C[2] = 'K';
	printf("Shuffling ...\n");
	srand(time(NULL)); /*seeding random number generator */
	for(i = 0; i <5; i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = C[x];
		C[x] = C[y];
		C[y] = temp; /*swaps chrataetrsat position x and y*/
	}
	printf("Whats your position of queesn - 1,2 or 3");
	scanf("%d", &playerGuess);
	if(C[playerGuess -1] == 'Q')
	{
		cash += 3*bet;
		printf("You win! Result = %c%c%c Total cahs = %d",C[0],C[1],C[2],cash);
	}
	else
	{
		cash -= bet;

		printf("You win! Result = %c%c%c Total cahs = %d",C[0],C[1],C[2],cash);
	}
	free(C);
	
}
int main()
{
	int bet;
	printf("Welcome to the Virtual Casion\n");
	printf("Total cash = $%d\n",cash);
	while(cash > 0)
	{
		printf("Whats your bet? $");
		scanf("%d", &bet);
		if(bet == 0 || bet > cash)
			break;
		Play(bet);
		printf("\n************************\n");
	}

	return (0);
}
