import java.util.Scanner;
import java.util.ArrayList;
import java.io.*;
public class inicio7 {
public static void main(String[] args) {
ArrayList lista01 = new ArrayList();
Scanner Leer = new Scanner(System.in);
int ValorA=0,n1=0, n2, i;
System.out.println(" Universidad Tecnologica de Panama");
System.out.println(" Imprimir datos de la lista ");
System.out.println(" ");
System.out.println("Introduce números (-∞,∞) y el No cero=0, para salir");
do {
try
{
ValorA = Leer.nextInt();
lista01.add(Integer.toString(ValorA) );
}
catch (Exception e)
{
System.out.println("Solo puedes insertar números enteros( digito letra). ");
Leer.next();
}
}while (ValorA!=0);
}}