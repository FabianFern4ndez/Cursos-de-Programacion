import java.util.Scanner;
public class Area {
    //atributos
    float alto, largo, area;
    Scanner scan = new Scanner(System.in);
    //metodos
    public void entrada()
    {
        System.out.print("Ingrese el largo: ");
        largo = scan.nextFloat();
        System.out.print("Ingrese la altura: ");
        alto = scan.nextFloat();
    }
    public void calcularAreaRectangulo()
    {
        area = alto*largo;
    }

    public void calcularAreaTriangulo()
    {
        area = (alto*largo)/2;
    }
    public void imprimirResultados()
    {
        System.out.println("");
        System.out.println("Para los valores");
        System.out.println("");
        System.out.println("Largo = "+largo);
        System.out.println("Altura = "+alto);
        System.out.println("El area = "+area);
        System.out.println("");
    }




    
}
