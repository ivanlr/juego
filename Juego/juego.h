class Juego
{
  private:
     int eleccion, puntos;
     int num1, num2, resultado_correcto, resultado_aportado;
     char nombre[25];

  public:
    Juego();
    void Pedir_Nombre();
    void Menu();
    int  Eleccion();
    int  Obtener_Num1(int);
    int  Obtener_Num2(int);
    void Inicio_Puntos();
    int  Sumar(int, int);
    int  Restar(int, int);
    int  Multiplicar(int, int);
    int  Dividir(int, int);
    int  Obtener_Resultado();
    int  Comprobar_Acierto(int, int);
    void Puntos(int);
    void Puntos_Totales();
    void Salir();
};
