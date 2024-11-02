import java.util.Scanner;
public class Main{
	public static void main(String[] args)
	{
		int decision=1;
		Scanner input = new Scanner(System.in);
		Linea linea = new Linea();

		//inicio
		System.out.println("Universidad Tecnologica de Panama\nTaller 9 de HPA: Linea Recta\nGrupo 1IL122\nIntegrantes:\nFabian Fernandez\nSamyr Montemayor\nDeivi Duarte\n");
        //menu
        do{
        
        System.out.println("\nOpciones:\n1.Calculo con For\n2.Calculo con do-while\n0.Salir ");
        decision = input.nextInt();
        
        switch(decision)
        {
        case 0:
        	
        	System.out.println("Gracias por usar");
        	break;

        case 1:
        	linea.entradaDatos();
        	linea.calculo_con_for(decision);
        	break;
        case 2:
        	linea.entradaDatos();
        	linea.calculo_con_dowhile(decision);
        	break;

        default:
        	System.out.println("Fuera de Rango");
        	break;
        }
        } while(decision != 0);

	}
}