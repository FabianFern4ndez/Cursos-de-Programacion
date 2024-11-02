/*
Este objeto contiene diferentes definiciones de gravedad
*/

public class Gravedad{
    double mercurio = 2.8;
    double venus = 8.9;
	double tierra = 9.8;
	double marte = 3.7;
	double jupiter = 22.9;
	double saturno = 9.1;
	double urano = 7.8;
	double neptuno  =11.0;
	double luna = 1.6;

	void mostrarGravedad()
	{
		System.out.println("1. Mercurio ");
		System.out.println("2. Venus ");
		System.out.println("3. Tierra");
		System.out.println("4. Marte ");
		System.out.println("5. Jupiter ");
		System.out.println("6. Saturno ");
		System.out.println("7. Urano ");
		System.out.println("8. Neptuno ");
		System.out.println("9. Luna ");
	}

	double asignarGravedad(int posicion)
	{
		switch(posicion)
		{
		case 1:
			return mercurio;
		
		case 2:
			return venus;
	
		case 3:
			return tierra;
			
		case 4:
			return marte;

		case 5:
			return jupiter;
			
		case 6:
			return saturno;
	
		case 7: 
			return urano;
		
		case 8:
			return neptuno;
			
		case 9:
			return luna;
		default:
			return 0;
			
			
		}

	}

}