import java.util.Scanner;
public class test {
    public static void main(String[] args) {

        Scanner input = new Scanner(System. in );
        System.out.print("Please enter the height of the box: ");
        int x = input.nextInt();

        System.out.print("Please enter a width for the box: ");
        int y = input.nextInt();
        drawbox(x, y);

    }

    static void drawbox(int x, int y) {

        for (int j = 0; j < y; j++) {
            System.out.println("* ");

            System.out.println();
            for (int i = 0; i < x - 2; i++) {
                System.out.print("*");
                for (int z = 0; z < y - 2; z++) {
                    System.out.print(" ");
                }
                System.out.println("*");

                for (int k = 0; k < y; j++) {
                    System.out.println("*");
                }

            }
        }
    }
}