import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader; //bibliotecas obligatorias para buffer reader

public class bufereader{
	public static void main(String[] args) throws IOException //importante
	{
		//declaracion de buffer reader
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        //instrucciones
		System.out.print("Usuario: ");
		String usuario = br.readLine();
		System.out.print("Edad: ");
		String entradaCadena = br.readLine();
		int edad = Integer.parseInt(entradaCadena);
		System.out.println("Gracias "+usuario+" en 10 años tendra: "+(edad+10)+" años");

		/*
		float : Float.parseFloat(entrada)
		double: Double.parseDouble(entrada)
		*/

	}
}