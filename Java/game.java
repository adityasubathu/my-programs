import java.util.Scanner;
import java.util.Random;
public class game 
{
	static int totchan = 5;
	static int maxvalue = 500;
	public static void main (String args[])
	{
		Scanner input = new Scanner(System.in);
		int number;        //the computer's random number
		int guess=0;         //the user's guess
		int chance = 0;
		int maxscore = totchan * 10;        
		int chanscore = maxscore / totchan;//chanscore stores score for 1 successful chance.
		int score = maxscore;
		
		System.out.println("Welcome to Hi-Low Game");
		System.out.println("I will think of a random number between 0-500");
		System.out.println("You'll have to guess what it is. You will get only "+totchan+" chances.");
		System.out.println("You will start with "+maxscore+" points.");
		System.out.println("Each wrong guess will cost you "+chanscore+" points");
		System.out.println(" ");
		
		Random num = new Random();
		number = num.nextInt(maxvalue);
		System.out.println("OK. I have selected a number");
		System.out.println("Now it's your turn to guess the number.");
		
		for (chance = totchan-1; chance >= 0; chance--)
		{
			if (chance==totchan-1)
			{
				System.out.print("First guess: ");
				guess = input.nextInt();
			}
			
			else if (chance==0)
			{
				System.out.println("");
				System.out.println("This is your last chance. Use it wisely.");
				System.out.print("Last guess: ");
				guess = input.nextInt();
			}
			
			else 
			{
				System.out.print("Next guess: ");
				guess = input.nextInt();
			}
			
			if ( guess > maxvalue )
			{
				System.out.println("Invalid guess. Please select any number between 0 and 500.");
				chance = chance + 1;
				continue;
			}
			
			//Checking if the guessed number is high, low, or equal to random number.
			
			if ( guess < number )
			{
				if (chance == 1)
				{
					System.out.println("You are aiming LOW!!!!! Pick a higher number");
					score = score - chanscore;
					
				}
				
				else if (chance == 0)
				{
					score = score - chanscore;
				}
				else
				{
					System.out.println("You are aiming LOW!!!!! Pick a higher number");
					score = score - chanscore;
					System.out.println("You have "+chance+" chances left");
				}
			}
			
			else if ( guess > number && guess < maxvalue )
			{
				if (chance == 1)
				{
					System.out.println("You are aiming HIGH!!!!! Pick a smaller number");
					score = score - chanscore;
				}
				
				else if (chance == 0)
				{
					score = score - chanscore;
				}
				
				else
				{
					System.out.println("You are aiming HIGH!!!!! Pick a smaller number");
					score = score - chanscore;
					System.out.println("You have "+chance+" chances left");
				}
			}
			
			else
			{
				System.out.println("You guessed right.");
				System.out.println("You win.");
				break;
			}
		}
		System.out.println("Your final score is "+score);
		if (score == 0)
		{
			System.out.println("You lose.");
		}
		System.out.println("Thank you for playing High-Low.");
		input.close();
	}
	
}
