
//Comentarios

public class E12Excepcion {
    //Atributos
    
    //Manejar excepciones
    public static void main(String[] args) {
      //Declaracion de variables
      String texto1= "90", texto2="10", texto3;
      int numerador=0, denominador=0, cociente=0;
    
      try{
          
          numerador = Integer.parseInt(texto1);
          denominador = Integer.parseInt(texto2);
          cociente = numerador/denominador;
          
      }catch(NumberFormatException ex){
          System.err.println("Error de formato-..".toUpperCase()+ex.getMessage());
      }catch(ArithmeticException ex){
          System.err.println("Error de formato por Zero-..".toUpperCase()+ex.getMessage());
      }
      
      System.out.println("Numerador: ".toLowerCase()+(numerador));   
      System.out.println("Denominador: ".toUpperCase()+(denominador));
      System.out.println("Cociente: ".toUpperCase()+(cociente));
    }
}