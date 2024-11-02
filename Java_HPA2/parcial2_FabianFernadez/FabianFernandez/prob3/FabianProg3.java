import java.io.*;
import java.util.Scanner;
public class FabianProg3{
	public static void main(String[] args) throws IOException
	{
		//scanner
		Scanner input = new Scanner(System.in);
		//objetos de ruta discol
		FileWriter RutaDisco = null;
		PrintWriter pw = null;
		RutaDisco = new FileWriter("/home/fabian/Desktop/FabianCalculos.txt");
		pw = new PrintWriter(RutaDisco);
		int i, y, n1=0, n2=0;

		//Presentacion
		System.out.println("Universidad Tecnologica de Panama");
        System.out.println("Parcial 2");
        System.out.println("Fabian Fernandez E-8-196729");
        System.out.println("");

		//lectura de valores con try catch
		try
		{
			System.out.println("Ingrese el limite inferior");
			n1 = input.nextInt();
			System.out.println("Ingrese el limite superior");
			n2 = input.nextInt();

		}
		catch(Exception e)
		{
			System.out.println("\nSolo puedes insertar números enteros. ");
		}

		//calculos e impresion
		System.out.println("Para la ecuacion y = x2 + 2x +1 los valores son: ");
		pw.println("Para la ecuacion y = x2 + 2x +1 los valores son: ");
		for(i = n2; i>= n1; i--)
		{
			y = (i*i) + 2*(i) + 1;
			System.out.println("Para el valor de x ="+i+" y ="+y);
			pw.println("Para el valor de x ="+i+" y ="+y );
		}

		pw.println("Fin de Impresion");
		if(null!= RutaDisco)
		{
			RutaDisco.close();
		}


	}
}