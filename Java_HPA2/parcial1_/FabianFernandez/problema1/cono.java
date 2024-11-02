import java.util.Scanner;
public class cono {
    //variables y objetos
    double radio, altura, volumen;
    final double pi = 3.1416;
    Scanner input = new Scanner(System.in);

    void pedirDatos()
    {
        System.out.print("Radio: ");
        radio = input.nextDouble();
        System.out.print("Altura: ");
        altura = input.nextDouble();
    }

    void calcularVolumen()
    {
        volumen = (pi*radio*radio*altura)/3;
    }

    void mostrarResultados()
    {
        System.out.println("El volumen del cono es: "+volumen);
    }

    
}
