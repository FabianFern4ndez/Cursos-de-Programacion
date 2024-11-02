import java.util.Scanner;
public class Division {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
System.out.println("Introduce el número A:");
double numeroA = sc.nextDouble();
System.out.println("Introduce el número B:");
double numeroB = sc.nextDouble();
try {
double resultado = dividir(numeroA, numeroB);
System.out.println("El resultado de la división de " + numeroA + " entre " +
numeroB + " es: " + resultado);
}
catch (ArithmeticException e) {
System.out.println("Error1: No se puede dividir por cero.");
}
catch (Exception e) {
System.out.println("Ocurrió un error inesperado: " + e.getMessage());
}
}
// --Metodo dividir
public static double dividir(double numeroA, double numeroB) {
if (numeroB == 0) {
throw new ArithmeticException("División por cero no permitida");
}
return numeroA / numeroB;
}
//--
}
