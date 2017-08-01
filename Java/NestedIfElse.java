import java.util.Scanner;


class NestedIfElse
{
    public static void main (String args[])
    {
	String address = "www.facebook.com";	

	Scanner sc = new Scanner (System.in);

	System.out.print("Enter URL: ");
	address = sc.next();

	if ((address.equals ("www.facebook.com")) || (address.equals ("www.fb.com")))
	{
	    System.out.print("Access to this page has been blocked by the Administrator. ");
	    System.out.println("If you are the Administrator, Enter your password below.");
	    System.out.print("Passowrd: ");
	    String password = sc.next();
	    
	    if (password.equals ("password"))
	    {
		System.out.println("The website has been unblocked.");
	    }
	    else
	    {
		System.out.println("Incorrect Password. System Faliure. You have started ThermoNuclear War. Good going, Dumbass.");
	    }
	}
	else
	{
	    System.out.println("Happy Browsing.");
	}
    }
}