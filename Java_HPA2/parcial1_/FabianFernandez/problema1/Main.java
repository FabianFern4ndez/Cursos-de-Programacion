//Fabian Fernandez E-8-196729
    public class Main{
        public static void main(String[] args) {
            //declaracion de objetos
            cono cono1 = new cono();
            trapecio trap1 = new trapecio();
            //presentacion
            System.out.println("Universidad Tecnologica de Panama");
            System.out.println("Parcial 1");
            System.out.println("Fabian Fernandez E-8-196729");
            System.out.println("");

    
            //parte a
            System.out.println("Para el cono");
            cono1.pedirDatos();
            cono1.calcularVolumen();
            cono1.mostrarResultados();
            System.out.println("");
    
            //parte b
            System.out.println("Para trapecio");
            trap1.pedirDatos();
            trap1.calcularArea();
            trap1.mostrarResultados();
            
    
        }
     
    }
    

