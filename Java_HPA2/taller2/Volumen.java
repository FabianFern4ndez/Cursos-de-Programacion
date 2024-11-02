import java.util.Scanner;
public class Volumen {
    //atributos
    final double pi = 3.1416; //constante
    double altura;
    double radio;
    double area;
    Scanner scan = new Scanner(System.in);

    //metodos
    public void entradaDatos()
    {
        System.out.print("Ingrese el radio: ");
        radio = scan.nextDouble();
        System.out.print("Ingrese la altura: ");
        altura = scan.nextDouble();
    }

    public void areaCilindro()
    {
        area = pi*radio*radio*altura;
    }

    public void areaCono()
    {
        area = (pi*radio*radio*altura)/3;
    }

    public void areaEsfera()
    {
        area = (4*pi*(Math.pow(radio,3)))/3;
    }

    public void imprimirResultados()
    {
        System.out.println("");
        System.out.println("Para los valores");
        System.out.println("");
        System.out.println("Radio = "+radio);
        System.out.println("Altura = "+altura);
        System.out.println("El volumen = "+area);
        System.out.println("");
    }

    public void imprimirResultadosEsfera()
    {
        System.out.println("");
        System.out.println("Para los valores");
        System.out.println("");
        System.out.println("Radio = "+radio);
        System.out.println("El volumen = "+area);
        System.out.println("");
    }

    public void entradaDatosEsfera()
    {
        System.out.print("Ingrese el radio: ");
        radio = scan.nextDouble();
    }

    
}
