class Calc
{
   public static void main (String args[])
   {
	int a,b,c;
	
	a=10;

	b=5;

	c=a+b;
	System.out.println("Addition is: "+c);
	
	c=a-b;
	System.out.println("Subtraction is: "+c);
	
	c=a*b;
	System.out.println("Multiplication is: "+c);
	
	c=a/b;
	System.out.println("Division is: "+c);
	
	c=a%b;
	System.out.println("Remainder is: "+c);

	String r = args[0];
	String s = args[1];
	String t = args[2];

	System.out.println(r);
	System.out.println(s);
	System.out.println(t);

    }
}