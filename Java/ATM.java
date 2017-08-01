import java.util.Scanner;

class transac
{
	public static int pin = 0;
	
	public static void main (String args[])
	{
		define a = new define();
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("                            ###########################################");
		System.out.println("                            ###%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%###");
		System.out.println("                            ###%%*********************************%%###");
		System.out.println("                            ###%%**     UMBRELLA CORPORATION    **%%###");
		System.out.println("                            ###%%**                             **%%###");
		System.out.println("                            ###%%**         ATM SERVICES        **%%###");
		System.out.println("                            ###%%*********************************%%###");
		System.out.println("                            ####%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%###");
		System.out.println("                            ###########################################");
		System.out.println("");
		System.out.print("Please enter your bank: ");
		String bank = sc.next();
		
		
		
		
		switch (bank)
		{
			case "hdfc":
			{
				System.out.println("Transfering you to HDFC Bank. Please wait a few moments.");
				System.out.println("");
				System.out.println("Welcome to HDFC Bank");
				break;
			}
			
			case "axis":
			{
				System.out.println("Transfering you to Axis Bank. Please wait a few moments.");
				System.out.println("");
				System.out.println("Welcome to Axis Bank");
				break;
			}
			
			case "pnb":
			{
				System.out.println("Transfering you to Punjab National Bank. Please wait a few moments.");
				System.out.println("");
				System.out.println("Welcome to Punjab National Bank");
				break;
			}
			
			case "sbi":
			{
				System.out.println("Transfering you to State Bank of India. Please wait a few moments.");
				System.out.println("");
				System.out.println("Welcome to State Bank of India.");
				break;
			}
			
			default:
			{
				System.out.println("Bank Not Supported. Transaction Failed");
				System.exit(0);
			}
			
		}
		
		/*if (bank == "HDFC" || bank == "hdfc")
		{
			System.out.println("Transfering you to HDFC Bank. Please wait a few moments.");
			System.out.println("Welcome to HDFC Bank");
		}
		
		else if (bank == "Axis" || bank == "axis")
		{
			System.out.println("Transfering you to Axis Bank. Please wait a few moments.");
		}
		
		else if (bank == "PNB" || bank == "pnb")
		{
			System.out.println("Transfering you to Punjab National Bank. Please wait a few moments.");
		}
		
		else if (bank == "SBI" || bank == "sbi")
		{
			System.out.println("Transfering you to State Bank of India. Please wait a few moments.");
		}
		
		else 
		{
			System.out.println("Bank not supported. Transaction failed.");
		}*/
		
		System.out.print("Please enter your current PIN:");
		pin = sc.nextInt();
		System.out.println("");
		System.out.println("What would you like to do?");
		System.out.println("");
		
		char loop = 'a';	
		
		do
		{
			System.out.println("1. Balance Enquiry.\t2. Cash Withdrawl.");   
			System.out.println("3. Transfer.\t\t4. Change PIN.");
			
			int choice = sc.nextInt();
				
			switch (choice)
			{
				case 1:
				{
					a.showbal();
					break;
				}
				
				case 2:
				{
					a.withdrawl();
					break;
				}
				
				case 3:
				{
					a.transfer();
					break;
				}
				
				case 4:
				{
					a.changepin();
					break;
				}
				
				default:
				{
					System.out.println("Invalid choice. Please try again");
					loop = 'c';
				}
			}
		} while (loop == 'c');
	}
}

abstract class atm
{	
	abstract void showbal();
	abstract void withdrawl();
	abstract void transfer();
	abstract void changepin();
}

class define extends atm
{
	Scanner sc = new Scanner(System.in);
	
	transac o = new transac();
	
	void showbal()
	{
		System.out.println("Your balance is 10,000/-.");
		System.out.println("Thank you. Your transaction is complete.");
	}
	
	void changepin()
	{
		System.out.print("Please enter your current PIN:");
		int pinc = sc.nextInt();
		if (pinc != o.pin)
		{
			System.out.print("Wrong PIN. Transaction Failed");
			System.exit(0);
		}
		
		else
		{
			System.out.print("Please enter your new PIN:");
			int newpin = sc.nextInt();
		}
	}
	
	void withdrawl()
	{
		System.out.print("Please enter the amount: ");
		int wamm = sc.nextInt();
		if (wamm > 10000)
		{
			System.out.println("Insuffecient Funds. Transaction Failed.");
		}
		else
		{
			System.out.println("Thank you. Please take your cash and count before leaving.");
		}
	}
	
	void transfer()
	{
		System.out.print("Please enter the benefactor's account number: ");
		long acc = sc.nextLong();
		
		System.out.println("Thank you. Your transaction is complete.");
	}
	
}