import java.util.Scanner;
import java.util.Random;

class guess
{
	static int totchan = 10;
	public static void main (String[] args) 
	{
		Scanner input = new Scanner(System.in);
		//all the variables
		int number = 0; //computer's guess
		int maxguess = 100; //maximum number that can be guessed
		int chance = totchan;
		int guess = 0;
		
		System.out.println("                            ###########################################");
		System.out.println("                            ###%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%###");
		System.out.println("                            ###%%*********************************%%###");
		System.out.println("                            ###%%**           Welcome           **%%###");
		System.out.println("                            ###%%**              to             **%%###");
		System.out.println("                            ###%%**       THE GUESSING GAME     **%%###");
		System.out.println("                            ###%%*********************************%%###");
		System.out.println("                            ####%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%###");
		System.out.println("                            ###########################################");
		
		System.out.println("I'm goint to select a number at random between 1 & "+ maxguess + ". ");
		
		Random num = new Random();
		number = num.nextInt(maxguess); //random number generation

		System.out.println("OK. I have selected the number. You'll have to guess it in " + totchan + " chances.");
		char flag = 'f';
		while (chance != 0)
		{
			if (chance == 0)
				break;
			System.out.print("What is your guess? : ");
			guess = input.nextInt();
			
			if (guess > maxguess) //to check if the guess in under the provided limit
			{
				System.out.println(" ");
				System.out.println("Your guess must be between 1 and " + maxguess + ". ");
			}
			
			else if ( guess > number)
			{
				System.out.print(guess + " is high. ");
				chance--;
				if (chance > 1)
				{
					System.out.print("Try a smaller number. ");
					System.out.println("Now you have " + chance + " guesses left. ");
				}
				else if (chance == 1)
				{
					System.out.println("This is your last chance");
				}
			}
			
			else if ( guess < number)
			{
				System.out.print(guess + " is low. ");
				chance--;
				if (chance > 1)
				{
					System.out.print("Try a bigger number. ");
					System.out.println("Now you have " + chance + " guesses left. ");
				}
				else if (chance == 1)
				{
					System.out.println("This is your last chance");
				}
			}
			
			else if (guess == number)
			{
				System.out.println(guess + " is the right answer!! Congratulations. Your score is " + chance + ".");
				flag = 'g';
				break;
			}
		}
		
		if (flag == 'f')
			System.out.println("\nThe selected number was " + number + ".");
	}
}