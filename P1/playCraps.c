#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "wager.h"

int main()
{
  printGameRules();

  double balance;
  balance = getBankBalance();
  double wager;

  int keepPlaying = 1;
  int gameStatus;
  while(keepPlaying == 1)
    {
      wager = getWager();
  
      while (checkWager(wager, balance) == 0)
	{
	  printf("You must enter a valid wager.\n");
	  wager = getWager();
	}
      printf("Balance = %.2f\nWager = %.2f\n", balance, wager);
      
      gameStatus = playGame();     
      if (gameStatus == 1)
	{
	  balance = adjustBalance(balance, wager, 1);
	  printf("Your new balance is = %.2f\n", balance);
	  if (balance == 0)
	    {
	      printf("Sorry, you have no more money! Better luck next time!\n");
	      return 0;
	    }
	  if (getYESorNO() == 0)
	    {
	      printf("Your final balance is %.2f\n", balance);
	      keepPlaying = 0;
	    }
	}
      else
	{
	  balance = adjustBalance(balance, wager, -1);
	  printf("Your new balance is = %.2f\n", balance);
	  if (balance == 0)
	    {
	      printf("Sorry, you have no more money! Better luck next time!\n");
	      return 0;
	    }
	  if (getYESorNO() == 0)
	    {
	      printf("Your final balance is %.2f\n", balance);
	      keepPlaying = 0;
	    }
	}
    }
  return 0;
}
