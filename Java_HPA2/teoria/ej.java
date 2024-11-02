import java.util.Scanner;
/*
recordar
javac ej.java  //compilar
java ej        //ejecutar
 */
public class ej //esto se debe llamar igual que el archivo
{
    public static void main(String[] args)
    {
        double c;
        double a,b;

        System.out.println("Ingrese a: ");
        Scanner lee1 = new Scanner(System.in);
        a = lee1.nextDouble();

        System.out.print("Ingrese b: ");
        Scanner lee2 = new Scanner(System.in);
        b = lee2.nextDouble();

        c = a+b;
        //me gusta mas el print que el println
        System.out.print("La suma de a y b es: " + c );

        //salto de linea
        System.out.println();
        //Concatenar cadenas
        System.out.print("fabian" + "fernandez" + "gonzalez");
        System.out.println();



    }
}