import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
//o lo que voy a hacer a partir de ahora
import java.io.*;

public class discoduro{
	public static void main(String[] args) throws IOException{
		int p, n=3;
		//objetos de ruta discol
		FileWriter RutaDisco = null;
		PrintWriter pw = null;
		RutaDisco = new FileWriter("/home/fabian/Desktop/Tabla.txt");
		pw = new PrintWriter(RutaDisco);
		for(int i = 1; i<=n; i++)
		{
			pw.println("Tabla del: "+i);
			for(int j = 1; j<=12;j++)
			{
				p=i*j;
				pw.println( i+"x"+j+"="+p);
			}

		} 
		pw.println("Fin de Impresion de Tablas");
		if(null!= RutaDisco)
		{
			RutaDisco.close();
		}

	}
}
