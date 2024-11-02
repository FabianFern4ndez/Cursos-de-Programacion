import java.util.Scanner;
import java.text.DecimalFormat;
public class Main {
    public static void main(String[] args) {
        //declaracion
        Gravedad g = new Gravedad();
        Scanner input = new Scanner(System.in);
        DecimalFormat formato = new DecimalFormat("0.00");
        Parabola p = new Parabola();
        int decision;
        //presentacion
        System.out.println("Universidad Tecnologica de Panama");
        System.out.println("Taller 07b: Proyectiles");
        System.out.println("Grupo: 1IL122");
        System.out.println("Integrantes: ");
        System.out.println("Fabian Fernandez E-8-196729");
        System.out.println("Samyr Montemayor 8-1016-1539");
        System.out.println("Deivi Duarte 8-1007-1199");
        System.out.println("");


        //pedir gravedad
        System.out.println("Opciones para gravedad");
        g.mostrarGravedad();
        System.out.print("Decision: ");
        decision = input.nextInt();
        g.real = g.asignarGravedad(decision);

        //pedir datos
        p.asignarAngulo();
        p.asignarVelocidad();

        //calculos
        p.calcularTiempodeVuelo(g.real);
        p.calcularTiempodeSubida();
        p.calcularAlturaMaxima(g.real);
        p.calcularDesplazamientoHorizontal();

        //impresion
        System.out.println("");
        System.out.println("Tiempo Total: "+ formato.format(p.tiempo_total));
        System.out.println("Tiempo Total de Subida: "+ formato.format(p.tiempo_sub));
        System.out.println("Altura Maxima: " + formato.format(p.altura));
        System.out.println("Desplazamiento Horizontal Total: " + formato.format(p.desp_horizontal));

        //metodo para la tabla :)
        System.out.println("\n\n Tabla de Valores: \n");
        p.crearTablaconFor(g.real);





    }
}