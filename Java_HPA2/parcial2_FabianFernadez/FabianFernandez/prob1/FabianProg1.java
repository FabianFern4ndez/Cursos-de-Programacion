import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader; //bibliotecas obligatorias para buffer reader

public class FabianProg1{
	public static void main(String[] args) throws IOException
	{
		//declaracion de objetos y variables
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		Gravedad g = new Gravedad();

		//presentacion
		System.out.println("Universidad Tecnologica de Panama");
        System.out.println("Parcial 2");
        System.out.println("Fabian Fernandez E-8-196729");
        System.out.println("");

        //elegimos la gravedad
        System.out.println("Indique en que gravedad en m/s desea usar");
        g.mostrarGravedad();
        System.out.println("Solo escriba el numero correspondiente para seleccionar la gravedad");
		System.out.print("Seleccion: ");
		//uso de buffer reader
		String entradaCadena = br.readLine();
		int decision = Integer.parseInt(entradaCadena);
        g.asignada = g.asignarGravedad(decision);
        System.out.println("La gravedad seleccionada es de: "+g.asignada);

        //lectura de datos porque bf no permite en la clase
        System.out.print("Introduzca la altura inicial: ");
        entradaCadena = br.readLine();
        double altura = Double.parseDouble(entradaCadena);
        
        //calculo
        double tiempo = g.calcularTiempo(altura, g.asignada);

        //salida
        g.mostrarResultados(g.asignada, tiempo);

		
	}
}