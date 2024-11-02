import java.util.Scanner;
public class calculadora {
    //declaracion
    Scanner input = new Scanner(System.in);
    int n1, n2;
    double F;
    
    void entradaDatos()
    {
        System.out.print("Valor inicial (n1): ");
        n1 = input.nextInt();
        System.out.print("Valor Final (n2): ");
        n2 = input.nextInt();
    }

    void calculos()
    {
        for(int i=n1;i<=n2;i=i+5)
        {
            F = (1.8*i) + 32.0;
            System.out.println("Para "+i+"°C su valor en °F es: "+F);

        }
    }


    
}
