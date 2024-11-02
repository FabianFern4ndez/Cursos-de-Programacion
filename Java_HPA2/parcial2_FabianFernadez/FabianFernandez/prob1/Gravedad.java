public class Gravedad{
	double asignada;
	//valores de gravedad segun el cuadro
	double mercurio = 2.78;
    double venus = 8.87;
	double tierra = 9.78;
	double luna = 1.62;
	double marte = 3.72;
	double jupiter = 22.88;
	double saturno = 9.05;
	double urano = 7.77;
	double neptuno  =11.0;
	double pluton = 0.4;
	
	//metodos
	void mostrarGravedad()
	{
		System.out.println("1. Mercurio ");
		System.out.println("2. Venus ");
		System.out.println("3. Tierra");
		System.out.println("4. Luna ");
		System.out.println("5. Marte ");
		System.out.println("6. Jupiter ");
		System.out.println("7. Saturno ");
		System.out.println("8. Urano ");
		System.out.println("9. Neptuno ");
		System.out.println("10. Pluton");
		
	}
	double asignarGravedad(int decision)
	{
		switch (decision)
		{
		case 1:
			return mercurio;
		case 2:
			return venus;
		case 3:
			return tierra;
		case 4:
			return luna;
		case 5:
			return marte;
		case 6:
			return jupiter;
		case 7:
			return saturno;
		case 8:
			return urano;
		case 9:
			return neptuno;
		case 10:
			return pluton;
		default:
			System.out.println("Entrada no valida - El calculo fallara");
			return 0;
		}
	}
	double calcularTiempo(double altura, double gravedad)
	{
		return (Math.sqrt((2*altura)/gravedad));
	}

	void mostrarResultados(double asignada, double tiempo)
	{
		System.out.println("Para el planeta con g="+asignada+" el tiempo de caida fue de: "+tiempo);
	}



	

}