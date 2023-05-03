/*PROGRAMA EXPOSITORIO*/

#include <iostream>
#include <string>

using namespace std;

void mostrar_reglas(string deporte) {
    if (deporte == "NATACION") {
        cout << "--Reglas-- " << endl;
        cout << "REGLAS MAS COMUNES EN NATACION SON: " << endl;
        cout << "1. Toma decisiones si es necesario" << endl;
        cout << "2. No empujes a las demas personas" << endl;
        cout << "3. Controla la ansiedad" << endl;
        cout << "4. Descansa siempre que sea necesario" << endl;
        cout << "5. Mantente bien hidratado" << endl;
        cout << "6. No consumas alimentos dentro del agua" << endl;
        cout << "7. Debes estar atento al clima" << endl;
    }
    else if (deporte == "FUTBOL") {
        cout << "--Reglas--" << endl;
        cout << "REGLAS BASICAS DEL FUTBOL SON:" << endl;
        cout << "1.- Los partidos de futbol se dividen en dos tiempos, cada uno de 45 minutos" << endl;
        cout << "2.- El arbitro lanza una moneda para decidir el lado de la cancha jugaran." << endl;
        cout << "3.- El balon esta dentro del juego mientras no haya falta." << endl;
        cout << "4.- Se marcara gol cuando el balon pasa la linea de meta y entra al arco, siempre y cuando no haya falta." << endl;
        cout << "5.- Se considera fuera de juego si un jugador le da pase a su companyero y este esta mas cerca a la linea de meta opuesta en comparacion al balon." << endl;
        cout << "6.- Tocar el balon; saltar sobre el adversario, empujarlo, golpearlo, sujetarlo, patearlo o escupirlo; son consideradas faltas" << endl;
        cout << "7.- El árbitro muestra tarjeta amarilla para amonestar a un jugador (por infringir el reglamento)" << endl;
        cout << "8.- El tiro libre reanuda el juego después de una falta. Existen dos tipos; tiro libre directo e indirecto" << endl;
        cout << "9.- Los penales se marcan cuando un jugador comete una infraccion dentro del area que defiende y se cobra en favor del equipo contrario." << endl;
        cout << "10.- Los saques reanudan el juego desde distintas partes de la cancha, por ello existen tres; saque de banda, meta y esquina" << endl;
    }
    else if (deporte == "VOLEIBOL") {
        cout << "--Reglas--" << endl;
        cout << "REGLAS BASICAS DE VOLEIBOL" << endl;
        cout << "1.- Los equipos de voleibol pueden estar constituidos de 12 jugadores como máximo" << endl;
        cout << "2.- Se consigue un punto cuando el equipo enemigo no controla bien el balon o comete una falta." << endl;
        cout << "3.- Durante el juego el balon tiene que ser golpeado continuamente, no puede ser retenido ni tomado por ningun jugador." << endl;
        cout << "4.- Los jugadores de un equipo deben evitar que el balon llegue al suelo dentro de su campo." << endl;
        cout << "5.- Si el saque no se ejecuta bien, se considera falta y saca el equipo contrario." << endl;
    }
    else if (deporte == "BALONCESTO") {
        cout << "Reglas: " << endl;
        cout << "REGLAS BASICAS DEL BALONCESTO" << endl;
        cout << "1.- El partido se juega con un balon esferico y con las manos." << endl;
        cout << "2.- Un jugador no puede correr con el balon" << endl;
        cout << "3.- Cualquier jugador puede ocupar cualquier posicion en el terreno de juego en cualquier momento." << endl;
        cout << "4.- No habra contacto fisico entre jugadores." << endl;
        cout << "5.- La canasta se colocara horizontalmente por encima del terreno de juego." << endl;
    }
    else if (deporte == "TENIS") {
        cout << "--Reglas--" << endl;
        cout << "REGLAS BASICAS DEL TENIS" << endl;
        cout << "1.- El partido comienza cuando saca uno de los jugadores." << endl;
        cout << "2.- Los jugadores solo pueden golpear la pelota una vez por turno." << endl;
        cout << "3.- Las reglas de tenis determinan que la pelota solo puede botar una vez antes de ser golpeada." << endl;
        cout << "4.- Es necesaria la presencia de al menos dos jugadores. Aunque la modalidad más habitual es la de individuales." << endl;
        cout << "5.- Ningun jugador puede tocar la red durante la disputa de un punto." << endl;
    }
}


void mostrar_deportistas_famosos(string deporte) {
    if (deporte == "NATACION") {
        cout << "--DEPORTISTAS MAS POPULARES--" << endl;
        cout << "1.- Michael Phelps" << endl;
        cout << "2.- Katie Ledecky" << endl;
        cout << "3.- Ryan Lochte" << endl;
        cout << "4.- Alexander Popov" << endl;
        cout << "5.- Jenny Thompson" << endl;
    }
    else if (deporte == "FUTBOL") {
        cout << "--DEPORTISTAS MAS POPULARES--" << endl;
        cout << "1.- Lionel Messi" << endl;
        cout << "2.- Cristiano Ronaldo" << endl;
        cout << "3.- Kylian Mbappe" << endl;
        cout << "4.- Erling Haaland" << endl;
        cout << "5.- Neymar" << endl;
    }
    else if (deporte == "VOLEIBOL") {
        cout << "--DEPORTISTAS MAS POPULARES--" << endl;
        cout << "1.- Adis Lagumdzija" << endl;
        cout << "2.- Thomas Jaeschke" << endl;
        cout << "3.- Dragan Travica" << endl;
        cout << "4.- Francesca Piccinini" << endl;
        cout << "5.- Saori Kimura" << endl;
    }
    else if (deporte == "BALONCESTO") {
        cout << "--DEPORTISTAS MAS POPULARES--" << endl;
        cout << "1.- Michael Jordan." << endl;
        cout << "2.- LeBron James." << endl;
        cout << "3.- Kareem Abdul-Jabbar. " << endl;
        cout << "4.- Bill Russell." << endl;
        cout << "5.- Larry Bird." << endl;
    }
    else if (deporte == "TENIS") {
        cout << "--DEPORTISTAS MAS POPULARES--" << endl;
        cout << "1.- Serena Williams" << endl;
        cout << "2.- Venus Williams" << endl;
        cout << "3.- Novak Djokovic" << endl;
        cout << "4.- Bjorn Borg" << endl;
        cout << "5.- Rafa Nadal" << endl;
    }
}


void mostrar_beneficios(string deporte) {
    if (deporte == "NATACION") {
        cout << "--Beneficos--" << endl;
        cout << "1.- Potencia la salud mental y emocional" << endl;
        cout << "2.- Mejora el aparato respiratorio y cardiovascular" << endl;
        cout << "3.- Es un quemagrasa comprobado" << endl;
        cout << "4.- Clave para el desarrollo de los infantes" << endl;
        cout << "5.- Aumenta la flexibilidad" << endl;
    }
    else if (deporte == "FUTBOL") {
        cout << "--Beneficos--" << endl;
        cout << "1.- Mejora la capacidad aerobica" << endl;
        cout << "2.- Mejora la salud cardiovascular" << endl;
        cout << "3.- Reduce la grasa corporal y mejora el tono muscular" << endl;
        cout << "4.- Construye la fuerza muscular" << endl;
        cout << "5.- Aumenta la fuerza de los huesos" << endl;
    }
    else if (deporte == "VOLEIBOL") {
        cout << "--Beneficos--" << endl;
        cout << "1.- Mejora la capacidad respiratoria" << endl;
        cout << "2.- Aumenta los niveles de energia" << endl;
        cout << "3.- Mejora la salud articular" << endl;
        cout << "4.- Previene el desarrollo de enfermedades pulmonares" << endl;
        cout << "5.- Mejoa los reflejos y tiempo de reaccion" << endl;
    }
    else if (deporte == "BALONCESTO") {
        cout << "--Beneficos--" << endl;
        cout << "1.- Mejora la coordinacion" << endl;
        cout << "2.- Aumenta la resistencia" << endl;
        cout << "3.- Desarrollo de la agilidad, habilidad locomotriz y la rapidez de reflejos" << endl;
        cout << "4.- Una mayor concentracion y una espectacular rapidez de reflejos." << endl;
        cout << "5.- Cuida y protege el sistema cardiovascular y mejora la resistencia muscular." << endl;
    }
    else if (deporte == "TENIS") {
        cout << "--Beneficos--" << endl;
        cout << "1.- Mejora el equilibrio, la movilidad, la agilidad, la fuerza y el estado fisico y tambien ayuda a quemar calorias." << endl;
        cout << "2.- Se trabaja la concentracion y sus comportamientos reactivos y de resolucion de problemas." << endl;
        cout << "3.- Promueve la confianza en si mismo, inculcar sentimientos de exito, aliviar el estres" << endl;
    }
}

int main() {
    string deporte;
    int opcion;

    while (true) {
        cout << "B I E N V E N I D O" << endl;
        cout << "MENU DE DEPORTES" << endl;
        cout << "LAS OPCIONES DISPOSIBLES SON:" << endl;
        cout << "1. NATACION" << endl;
        cout << "2. FUTBOL" << endl;
        cout << "3. VOLEIBOL" << endl;
        cout << "4. BALONCESTO" << endl;
        cout << "5. TENIS" << endl;
        cout << "Elige una opcion" << endl;
        cin >> opcion;

        switch (opcion) {
        case 1:
            deporte = "NATACION";
            cout << "\nN A T A C I O N \nLa natacion es la practica recreativa o deportiva del movimiento y desplazamiento sobre el agua, empleando solo los brazos y las piernas del cuerpo humano." << endl;
            break;
        case 2:
            deporte = "FUTBOL";
            cout << "\nF U T B O L\nJuego entre dos equipos de once jugadores cada uno, cuyo objetivo es hacer entrar en la porteria contraria"
                << "un balon que no puede ser tocado con las manos ni con los brazos, salvo por el portero en su area de meta.";
            break;
        case 3:
            deporte = "VOLEIBOL";
            cout << "\nV O L E I B O L\nEs un deporte donde dos equipos se enfrentan sobre un terreno de juego liso separados por una red central,"
                << "tratando de pasar el balón por encima de la red hacia el suelo del campo contrario.";
            break;
        case 4:
            deporte = "BALONCESTO";
            cout << "\nB A L O N C E S T O\nEl baloncesto consiste en introducir un balón, que dará punto, en un aro ubicado a 3 metros de altura."
                << "El balón puede ser golpeado en cualquier dirección con una o ambas manos, pero nunca con el puño.Un jugador no puede correr con el"
                << "balón.El jugador debe lanzarlo desde el lugar donde lo toma.";
            break;
        case 5:
            deporte = "TENIS";
            cout << "\nT E N I S\nConsiste en golpear la pelota después de un rebote o antes que rebote con la raqueta para que vaya de un lado al otro"
                << "del campo pasando por encima de la red.";
            break;
        default:
            cout << "Opción no valida. Intente de nuevo.\n";
            continue;
        }

        cout << "\nQue desea saber sobre " << deporte << ":\n";
        cout << "1. Reglas\n";
        cout << "2. Deportistas famosos\n";
        cout << "3. Beneficios\n";

        cin >> opcion;

        switch (opcion) {
        case 1:
            mostrar_reglas(deporte);
            break;
        case 2:
            mostrar_deportistas_famosos(deporte);
            break;
        case 3:
            mostrar_beneficios(deporte);

            break;
        default:
            cout << "Opción no valida. Intente de nuevo.\n";
        }

        cout << "\nDesea seleccionar otro deporte (S/N)\n";
        char respuesta;
        cin >> respuesta;
        system("cls");

        if (respuesta == 'S' || respuesta == 's') {
            continue;
        }
        else {
            break;
        }
    }

    return 0;
}