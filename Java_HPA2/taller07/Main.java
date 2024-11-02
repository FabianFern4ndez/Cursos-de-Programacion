import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		//definicion de objetos y variables
		Scanner input = new Scanner(System.in);
		Gravedad g = new Gravedad();
		Caida calc = new Caida();
		int decision;

		//entrada de datos
		System.out.println("Universidad Tecnologica de Panama");
		System.out.println("Taller 07");
		System.out.println("Grupo: 1IL122");
		System.out.println("Integrantes: ");
		System.out.println("Fabian Fernandez E-8-196729");
		System.out.println("Samyr Montemayor 8-1016-1539");
		System.out.println("Deivi Duarte 8-1007-1199");
		System.out.println("");
		System.out.println("Este Programa resuelve problemas sencillos de caida libre");
		System.out.println("");
		System.out.println("Indique en que gravedad en m/s desea usar");
		g.mostrarGravedad();
		System.out.println("");
		System.out.println("Solo indique el numero izquierdo del 1 al 9");
		System.out.print("Gravedad: ");
		do
		{
			System.out.println("Solo indique el numero izquierdo del 1 al 9");
		    System.out.print("Gravedad: ");
		    decision = input.nextInt();
		    
		    if(decision < 0 || decision > 9)
		    {
		    	System.out.println("Fuera de Rango\n");
		    	System.out.println("Solo indique el numero izquierdo del 1 al 9");
		        System.out.print("Gravedad: ");
		    }


	    }while(decision < 0 || decision > 9);
	              
		//asignaciones de variables mediante funciones 
		calc.vel_i = calc.asignarVelocidadInicial();
		System.out.println("");
		calc.altura = calc.asignarAlturaInicial();
		System.out.println("");
		calc.g_real = g.asignarGravedad(decision);
		System.out.println("");

		//necesitamos saber si el objeto esta en caida o subida
		do{
		System.out.println("Que caso de Caida libre es:");
		System.out.println("1. Subida");
		System.out.println("2. Caida ");
		System.out.print("Decision: ");
		decision = input.nextInt();

		if(decision !=1 && decision != 2)
		{
			System.out.println("Error en la entrada\n");
		}


	    }while(decision !=1 && decision != 2);

		//procesos
		if(decision == 1)
		{
			calc.tiempo = calc.calcularTiempoSubida(calc.g_real, calc.vel_i, calc.altura);
			if(calc.tiempo == -1)
			{
				System.out.println("Error en la entrada de datos, altura y velocidad incompatibles\n");
			}
		}

		if(decision == 2)
		{
			calc.tiempo = calc.calcularTiempoCaida(calc.g_real, calc.vel_i, calc.altura);
		}
	


		//impresion de resultados
		System.out.println("");
		System.out.println("Para los valores: ");
		System.out.println("Velocidad inicial = " +calc.vel_i);
		System.out.println("Altura =  " +calc.altura);
		System.out.println("");
		if(calc.tiempo != -1)
		{
			System.out.println("El tiempo en el aire fue de: " +calc.tiempo+" segundos");
		}
		else
		{
			System.out.println("No se puedo calcular el tiempo");
		}
		


	}
}