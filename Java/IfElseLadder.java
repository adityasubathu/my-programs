import java.util.Scanner;


class IfElseLadder
{
    public static void main (String args[])
    {
	int a,b,c;

	Scanner sc = new Scanner (System.in);

	System.out.print("Enter Three Numbers: ");
	a = sc.nextInt();
	b = sc.nextInt();
	c = sc.nextInt();

/*The Greatest Number Comparison*/

	if (a>b && a>c)
	{
	    System.out.print(a+" is the greatest ");
	}
	
	else if (b>c && b>a)
	{
	    System.out.print(b+" is greatest ");
	}
	
	else
	{
	    System.out.print(c+" is the greatest ");
	}

/*The Smallest Number Comparison*/

	if (a<b && a<c)
	{
	    System.out.println("and "+a+" is the smallest of all.");
	}
	
	else if (b<c && b<a)
	{
	    System.out.println("and "+b+" is smallest of all.");
	}
	
	else
	{
	    System.out.println("and "+c+" is the smallest of all.");
	}
    }
}