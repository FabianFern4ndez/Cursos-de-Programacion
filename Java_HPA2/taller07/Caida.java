import java.util.Scanner;
public class Caida{
	//declaracion de variables y objetos
	Scanner input = new Scanner(System.in);
	double vel_i, altura, a, g_real, tiempo, aux;

	//metodos con retorno sin parametros
	double asignarVelocidadInicial()
	{
		System.out.print("Velocidad inicial: ");
		a = input.nextDouble();
		return a;
	}
	double asignarAlturaInicial()
	{
		System.out.print("Altura: ");
		a = input.nextDouble();
		return a;
	}

	//metodos con parametro y retorno

	double calcularTiempoCaida(double g, double vel, double h)
	{
		aux = Math.sqrt((vel*vel) + (2*g*h));
		a = (((-1)*(vel)) + aux )/g;
			return a;
	}

	double calcularTiempoSubida(double g, double vel, double h)
	{
		aux = ((vel*vel) - (2*g*h));
		if (aux < 0)
		{
			return -1;
		}
		else
		{
			a = (vel + Math.sqrt(aux) )/g;
			return a;
		}
		
	}


}