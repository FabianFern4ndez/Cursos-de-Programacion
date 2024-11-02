import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        //variables
        int decision=0;
        
        //creacion de objetos
        Area rectangulo = new Area();
        Area triangulo = new Area(); 
        Volumen cono = new Volumen();
        Volumen cilindro = new Volumen();
        Volumen esfera = new Volumen();
        Scanner scan = new Scanner(System.in);



        //menu de entrada
        do{
        System.out.println("Que figura desea trabajar");
        System.out.println("");
        System.out.println("0. Salir");
        System.out.println("1. Rectangulo");
        System.out.println("2. Triangulo");
        System.out.println("3. Cono");
        System.out.println("4. Cilindro");
        System.out.println("5. Esfera");
        System.out.print("Indique el numero: ");
        decision = scan.nextInt();
        System.out.println("");

        //casos
        switch(decision)
        {
            case 0:
            break;
            
            case 1:
            rectangulo.entrada();
            rectangulo.calcularAreaRectangulo();
            rectangulo.imprimirResultados();
            break;

            case 2:
            triangulo.entrada();
            triangulo.calcularAreaTriangulo();
            triangulo.imprimirResultados();
            break;

            case 3:
            cono.entradaDatos();
            cono.areaCono();
            cono.imprimirResultados();
            break;

            case 4:
            cilindro.entradaDatos();
            cilindro.areaCilindro();
            cilindro.imprimirResultados();
            break;

            case 5:
            esfera.entradaDatosEsfera();
            esfera.areaEsfera();
            esfera.imprimirResultadosEsfera();
            break;

            default:
            System.out.println("");
            System.out.println("Fuera de Rango");
            System.out.println("");
            break;
        }

        //condicion de repeticion
        if (decision != 0)
        {
            decision = 9; 
        }
        
        }while(decision > 5 ||  decision < 0);//rango maximo 1 a 5
    }
    
}
