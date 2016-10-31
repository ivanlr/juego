#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "juego.h"

  // Constructor.
  Juego::Juego(){}

  // Pedir y leer el nombre.
  void Juego::Pedir_Nombre()
  {
    system("clear");
    std::cout << "¿Cual es su nombre? ";
    std::cin.getline(nombre, 25);
  }

  // Mostrar menu.
  void Juego::Menu()
  {
    system("clear");
    std::cout << "-----------------------------------------------------------"
              << "\n--- Bienvenid@ "<< this->nombre <<" a RETO MATEmático\n"
              << "-----------------------------------------------------------"
              << "\n\n\nEstos son todos los desafíos matemáticos que tenemos"
              << " preparados para ti:";

    std::cout << "\n\n\t1) Suma.\n\n\t2) Resta.\n\n\t3) Multiplicacion."
              << "\n\n\t4) Division.";
  }

  // Pedir y leer la opcion.
  int Juego::Eleccion()
  {
    std::cout << "\n\n\tElige una opcion: ";
    std::cin  >> eleccion;
    return eleccion;
  }

  // Generamos numero 1.
  int Juego::Obtener_Num1(int num1)
  {
    srand(time(NULL));
    num1 = rand() % 20;
    return num1;
  }

  // Generamos numero 2.
  int Juego::Obtener_Num2(int num2)
  {
    srand(time(NULL));
    num2 = (rand() % 15) + 1;
    return num2;
  }

  // Inicializar la variable puntos.
  void Juego::Inicio_Puntos()
  {
    puntos = 0;
  }

  // Imprime la sume y calcula el resultado correcto.
  int Juego::Sumar(int num1, int num2)
  {
    system("clear");
    std::cout << num1 << " + " << num2 << " = ¿?";
    resultado_correcto = num1 + num2;
    return resultado_correcto;
  }

  // Imprime la resta y calcula el resutado correcto.
  int Juego::Restar(int num1, int num2)
  {
    system("clear");
    std::cout << num1 << " - " << num2 << " = ¿?";
    resultado_correcto = num1 - num2;
    return resultado_correcto;
  }

  // Imprime la multiplicacion y calcula el resultado correcto.
  int Juego::Multiplicar(int num1, int num2)
  {
    system("clear");
    std::cout << num1 << " * " << num2 << " = ¿?";
    resultado_correcto = num1 * num2;
    return resultado_correcto;
  }

  // Imprime la division y calcula el resultado correcto.
  int Juego::Dividir(int num1, int num2)
  {
    system("clear");
    std::cout << num1 << " / " << num2 << " = ¿?";
    resultado_correcto = num1 / num2;
    return resultado_correcto;
  }

  // Pide el resultado al jugador y lo lee.
  int Juego::Obtener_Resultado()
  {
    std::cout << "\n\n\tEl resultado es: ";
    std::cin >> resultado_aportado;
    return resultado_aportado;
  }

  /*
    Compara ambos resultados ( el aportado y el correcto), y si coinciden
    devuelve un 0, y si no, un 1.
   */
  int Juego::Comprobar_Acierto(int aportado, int correcto)
  {
    if (correcto == aportado)
    {
      std::cout << "\nHas acertado --->";
      return 0;
    }
    else
    {
      std::cout << "\nLo siento, no has acertado ---->";
      return 1;
    }
  }

  /*
    Obtiene el numero devuelto de la comparacion de resultados y decide si
    sumar o restar puntos.
  */
  void Juego::Puntos(int llave)
  {
    if(llave == 0)
    {
      this->puntos += 10;
      std::cout << "Puntos totales: " << this->puntos << std::endl;
    }
    else
    {
      puntos -= 5;
      std::cout << "Puntos totales: " << this->puntos << std::endl;
    }
    sleep(3);
  }

  // Devuelve la suma total de puntos en ese momento.
  void Juego::Puntos_Totales()
  {
    system("clear");
    std::cout << "Los puntos totales son: " << this->puntos << std::endl;
  }

  // Sale del programa.
  void Juego::Salir()
  {
    std::cout << "\n\n Numero incorrecto, saliendo...........>\n\n";
    sleep(2);
    exit(-1);
  }
