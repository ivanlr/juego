#include "juego.h"
using namespace std;

int
main()
{
  // Declaramos las variables.
  Juego object;
  int num1, num2;

  // Inicializamos las variables.
  object.Inicio_Puntos();

  // Pedimos el nombre.
  object.Pedir_Nombre();

  // Mostramos el menu, vemos la elección del usuario y, comenzamos el juego.
  for(int i = 0; i < 4; i++)
  {
    object.Menu();
    switch(object.Eleccion())
    {
      case 1:
      {
        object.Puntos(object.Comprobar_Acierto (object.Obtener_Resultado(), object.Sumar(object.Obtener_Num1(num1), object.Obtener_Num2(num2))));
        break;
      }
      case 2:
      {
        object.Puntos(object.Comprobar_Acierto (object.Obtener_Resultado(), object.Restar(object.Obtener_Num1(num1), object.Obtener_Num2(num2))));
        break;
      }
      case 3:
      {
        object.Puntos(object.Comprobar_Acierto (object.Obtener_Resultado(), object.Multiplicar(object.Obtener_Num1(num1), object.Obtener_Num2(num2))));
        break;
      }
      case 4:
      {
        object.Puntos(object.Comprobar_Acierto (object.Obtener_Resultado(), object.Dividir(object.Obtener_Num1(num1), object.Obtener_Num2(num2))));
        break;
      }
      default:
      {
        object.Salir();
      }
    }
  }

  // Mostramos los puntos totales.
  object.Puntos_Totales();
  return 0;
}
