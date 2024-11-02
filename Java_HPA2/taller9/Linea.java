import java.util.Scanner;

public class Linea{
	float m, b, y;
	int i=0;
	Scanner input = new Scanner(System.in);

	//entrada
	void entradaDatos()
	{
		System.out.print("Pendiente de la recta: ");
		m = input.nextFloat();
		System.out.print("Interseccion con eje x de la recta (b): ");
		b = input.nextFloat();
		System.out.println("Ecuacion:\n");
		System.out.println("y = "+m+"x + "+b);
	}

	//metodos de calculo e impresion

	void calculo_con_for(int decision)
	{
		System.out.println("Valores para la ecuacion: ");
		for( i = -5; i <= 5; i++)
		{
			y = (m*i) + b;
			System.out.println("Cuando x = "+i+" y = "+y);
		}
	}

	void calculo_con_dowhile(int decision)
	{
		i = -5;
		System.out.println("Valores para la ecuacion: ");
		do{
			y = (m*i) + b;
			System.out.println("Cuando x = "+i+" y = "+y);
			i++;
		}while(i<=5);
	}


}