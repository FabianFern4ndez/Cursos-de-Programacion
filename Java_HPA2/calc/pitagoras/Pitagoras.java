import java.util.Scanner;


public class Pitagoras
{
    //Declaracion
    double catA, catB, hip;
    public void hip()
    {
        Scanner scan = new Scanner(System.in);
        System.out.print("Cateto a: ");
        catA = scan.nextDouble();
        System.out.print("Cateto b: ");
        catB = scan.nextDouble();

        hip = Math.sqrt(Math.pow(catA,2) + Math.pow(catB,2) );
        System.out.println("La hipotenusa es: " +hip);




    }

}