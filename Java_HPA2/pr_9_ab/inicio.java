
public class inicio{
    public static void main(String[] args){
        //creacion del objeto
        triangulo triangulo_1 = new triangulo();

        //uso de metodos del triangulo
        triangulo_1.asignarCatetos();
        triangulo_1.calcularHipotenusa();
        triangulo_1.calcularArea();

        //impresion de resultados
        System.out.println("La hipotenusa es: "+triangulo_1.hip);
        System.out.print("El area es: "+triangulo_1.area);
        System.out.println("");





    }
}