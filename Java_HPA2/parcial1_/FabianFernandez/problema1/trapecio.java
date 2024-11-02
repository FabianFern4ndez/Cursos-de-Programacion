import java.util.Scanner;

public class trapecio{
    //declaracion
    Scanner input = new Scanner(System.in);
    double base_mayor, base_menor, altura, area;

    //metodos
    void pedirDatos()
    {
        System.out.print("Base mayor: ");
        base_mayor = input.nextDouble();
        System.out.print("Base menor: ");
        base_menor = input.nextDouble();
        System.out.print("Altura: ");
        altura = input.nextDouble();
    }

    void calcularArea()
    {
        area = ((base_mayor+base_menor)*altura)/2;
    }

    void mostrarResultados()
    {
        System.out.println("El area del trapecio es: "+area);
    }
    
}