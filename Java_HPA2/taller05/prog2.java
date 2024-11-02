import java.util.Scanner;

public class prog2 {
    public static void main(String[] args) {
        //objetos
        vehiculos minivan = new vehiculos();
        vehiculos nissan = new vehiculos();

        //entradas
        Scanner scan = new Scanner(System.in);
        System.out.println("Datos de la minivan");
        System.out.print("Numero de pasajeros: ");
        minivan.num_pasajeros = scan.nextInt();
        System.out.print("Millas por hora: ");
        minivan.millas_hora = scan.nextFloat();
        System.out.print("Recorrido total: ");
        minivan.recorrido_total = scan.nextFloat();

        System.out.println("");

        System.out.println("Datos de el nissan");
        System.out.print("Numero de pasajeros: ");
        nissan.num_pasajeros = scan.nextInt();
        System.out.print("Millas por hora: ");
        nissan.millas_hora = scan.nextFloat();
        System.out.print("Recorrido total: ");
        nissan.recorrido_total = scan.nextFloat();

        System.out.println("");
        System.out.println("Resultados");
        System.out.println("");

       
        //Impresion
        System.out.println("Para la minivan: ");
        System.out.println("Numero de pasajeros: " +minivan.num_pasajeros);
        System.out.println("Millas por hora: "+minivan.millas_hora);
        System.out.println("Recorrido total: " +minivan.recorrido_total);
         
        System.out.println("");

        System.out.println("Para el nissan: ");
        System.out.println("Numero de pasajeros: " +nissan.num_pasajeros);
        System.out.println("Millas por hora: "+nissan.millas_hora);
        System.out.println("Recorrido total: " +nissan.recorrido_total);
    
    }   
}
