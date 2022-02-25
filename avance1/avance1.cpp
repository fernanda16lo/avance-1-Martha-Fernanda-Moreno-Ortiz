#include <iostream>


using namespace std;



int main()
{
    int opcion, horario, n, i, edad, hora, p_ut, c_t, p_u;
    char nombre[150];
    char descripcion[350];
    char trat[90];
    int menu = 1; 



    do {

        cout << " ***cita dentales *** " << endl;
        cout << "1. agendar cita" << endl;
        cout << "2. modifiar cita" << endl;
        cout << "3. elimintar cita" << endl;
        cout << "4. lista de citas vigentes" << endl;
        cout << "5. limpiar pantalla" << endl;
        cout << "6. salir" << endl;
        cin >> opcion;

        switch (opcion) {

        case 1:

            cout << "¿cuantas citas quiere agendar hoy?" << endl;
            cin >> n;


            for (int i = 1; i < n; i++) {
                cout << "cita: " << i << endl;

                cout << "Nombre del Paciente: " << endl;
                cin >> nombre;
                cout << "edad del paciente: " << endl;
                cin >> edad;
                cout << "hora del tratamiento, ***formato 24 horas***" << endl;
                cin >> hora;
                cout << "nombre del tratamiento" << endl;
                cin >> trat;
                cout << "descripcion" << endl;
                cin >> descripcion;
                cout << "precio unitario tratamiento" << endl;
                cin >> p_ut;
                cout << "cantidad del tratamiento" << endl;
                cin >> c_t;
                cout << "precio unitario" << endl;
                cin >> p_u;
                cout << "su citas han a sido generada" << endl;


            }
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            exit(0);
            break;


        default:  cout << "opcion no valida" << endl;

        }
        if (opcion !=0)
            cout << "elgia 1 si quiere volver al menu, eliga 2 si quiere salir" << endl;
            cin >> menu;


      
    } while (menu == 1);



    return 0;




}