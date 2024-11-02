import java.util.Scanner;
import java.text.DecimalFormat;
public class Parabola {

    double altura=0, 
            vInicial=0, 
            angulo=0, 
            tiempo_total = 0, 
            tiempo_sub = 0, 
            desp_horizontal = 0,
            i=0,
            temp = 0,
            altura_aux=0;

    

    Scanner input = new Scanner(System.in);
    DecimalFormat formato = new DecimalFormat("0.00");

    //metodos de asignacion
    void asignarVelocidad()
    {
        System.out.print("Velocidad Inicial en m/s: ");
        vInicial = input.nextDouble();
    }

    void asignarAngulo()
    {
        System.out.print("Angulo en grados: ");
        angulo = input.nextDouble();
    }

    //metodos de calculo

    void calcularTiempodeVuelo(double gravedad)
    {
        tiempo_total = (Math.sin(Math.toRadians(angulo))*(2*vInicial))/gravedad;
    }

    void calcularTiempodeSubida(){
        tiempo_sub = tiempo_total / 2; 
    }

    void calcularAlturaMaxima(double gravedad)
    {
        altura = ((Math.sin(Math.toRadians(angulo))) * vInicial*tiempo_sub) - (0.5 * gravedad * tiempo_sub * tiempo_sub );
    }

    void calcularDesplazamientoHorizontal()
    {
        desp_horizontal = (Math.cos(Math.toRadians(angulo))) * vInicial  * tiempo_total;
    }

    //metodo para crear tabla con for
    void crearTablaconFor(double gravedad)
    {

    for(i=0; i<= tiempo_sub; i=i+5)
    {
        altura_aux = ((Math.sin(Math.toRadians(angulo))) * vInicial*i) - (0.5 * gravedad * i * i );
        System.out.println("Para t="+formato.format(i)+" altura="+formato.format(altura_aux));
    }
    for(i=tiempo_sub; i<= tiempo_total; i=i+5)
    {
        altura_aux = (altura) - (0.5 * gravedad * (i-tiempo_sub) * (i-tiempo_sub) );
        System.out.println("Para t="+formato.format(i)+" altura="+formato.format(altura_aux));

        //validar el caso donde no llega al tiempo final
        temp = i;
    }
    if(temp < tiempo_total)
    {
       System.out.println("Para t="+formato.format(tiempo_total)+" altura= 0.00");
    }

    }
   

}
