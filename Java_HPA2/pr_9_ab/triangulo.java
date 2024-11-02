import java.util.Scanner;
import java.io.*;

public class triangulo {
    //atributos
    Scanner scan = new Scanner(System.in);//var de entrada scan
    public double area, base, altura, cateto_ady, hip, cateto_op;
    //metodos
    public void asignarCatetos()
    {
        
        System.out.print("Cateto adyacente: ");
        cateto_ady = scan.nextDouble();
        System.out.print("Cateto opuesto: ");
        cateto_op = scan.nextDouble();
    }

    public void calcularHipotenusa()
    {
        //la funcion sqrt solo funciona con double
        hip = Math.sqrt((cateto_ady*cateto_ady)+(cateto_op)*(cateto_op));

    }

    public void calcularArea()
    {
        System.out.print("Base: ");
        base = scan.nextDouble();
        System.out.print("Altura: ");
        altura = scan.nextDouble();
        area = base*altura;

    }
 
}
