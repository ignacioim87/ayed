#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Lista.h"
#include "Cola.h"
#include "Pila.h"
#include "Vuelo.h"
#include "Equipaje.h"
#include "Transportador.h"


using namespace std;


ResultadoComparacion compararListaVuelo(PtrDato ptrDato1, PtrDato ptrDato2) {
    int dato1 = ((Vuelo*) ptrDato1)->Id;
    int dato2 = ((Vuelo*) ptrDato2)->Id;

    if (dato1 < dato2) {
        return MENOR;
    }else if (dato1 > dato2) {
        return MAYOR;
    }else{
        return IGUAL;
    }
}

ResultadoComparacion compararListaEquipajesPerdidos(PtrDato ptrDato1, PtrDato ptrDato2) {
    int dato1 = ((Equipaje*) ptrDato1)->Id;
    int dato2 = ((Equipaje*) ptrDato2)->Id;

    if (dato1 < dato2) {
        return MENOR;
    }else if (dato1 > dato2) {
        return MAYOR;
    }else{
        return IGUAL;
    }
}
void imprimirVuelo(Vuelo vuelo){

     cout << "--------- Vuelo ---------- "<< endl;
     cout << "Id : " << getIdVuelo(vuelo) << endl;
     cout << "Aerolinea: " << getAerolinea(vuelo) << endl;
     cout << "Ciudad de Origen: " << getC_Origen(vuelo) << endl;
     cout << "Ciudad de Destino: " << getC_Destino(vuelo) << endl;
     cout << "Fecha de Salida: " << getF_Salida(vuelo) << endl;
     cout << "Hora de Embarque: " << getH_Embarque(vuelo) << endl;
     cout << "Hora de Despegue: " << getH_Despegue(vuelo) << endl;
     cout << "Fecha de Llegada: " << getF_Llegada(vuelo) << endl;
     cout << "Hora de Arribo: " << getH_Arribo(vuelo) << endl;
     cout << "Tipo: " << getTipoVuelo(vuelo) << endl;

     /// Que pasaria si quiero imprimir tambien la pila de equipajes?

     cout << endl;
}


void imprimirEquipaje(Equipaje equipaje){

     cout << "--------- Equipaje ---------- "<< endl;
     cout << "ID: " << getIdEquipaje(equipaje)<< endl;
     cout << "Duenio: " << getDuenioEquipaje(equipaje)<< endl;
     cout << "Esta Duenio: " << getEstaDuenioEquipaje(equipaje)<< endl;
     cout << "Peso: " << getPesoEquipaje(equipaje)<< endl;

}

void imprimirEquipajePerdido(Equipaje equipaje){

     cout << "--------- Equipaje Perdido---------- "<< endl;
     cout << "ID: " << getIdEquipaje(equipaje)<< endl;
     cout << "Duenio: " << getDuenioEquipaje(equipaje)<< endl;
     cout << "Esta Duenio: " << getEstaDuenioEquipaje(equipaje)<< endl;
     cout << "Peso: " << getPesoEquipaje(equipaje)<< endl;

}

void agregarVuelo(Vuelo *ptrVuelo,int id,string aerolinea,string origen,string destino,string salida,string embarque,string despegue,string llegada,string arribo,string tipoVuelo){
    setIdVuelo(*ptrVuelo, id);
    setAerolinea(*ptrVuelo,aerolinea);
    setC_Origen(*ptrVuelo, origen);
    setC_Destino(*ptrVuelo, destino);
    setF_Salida(*ptrVuelo, salida);
    setH_Embarque(*ptrVuelo, embarque);
    setH_Despegue(*ptrVuelo, despegue);
    setF_Llegada(*ptrVuelo, llegada);
    setH_Arribo(*ptrVuelo, arribo);
    setTipoVuelo(*ptrVuelo, tipoVuelo);
}

void agregarEquipaje(Equipaje *ptrEquipaje,int id,string duenio,int peso){
    setIdEquipaje(*ptrEquipaje,id);
    setDuenioEquipaje(*ptrEquipaje,duenio);
    setEstaDuenioEquipaje(*ptrEquipaje,false);
    setPesoEquipaje(*ptrEquipaje,peso);
}

void estaDuenio(Equipaje *ptrEquipaje){
    int estaDuenio=0;
    system("cls");
    cout <<"\n\n";
    imprimirEquipaje(*ptrEquipaje);

    cout <<"\nSe encuentra el dueño en el aeropuerto?";
    cout <<"\n1-Si.";
    cout <<"\n2-No.";
    cout <<"\nIngrese el numero de la opcion correspondiente: ";
    cin >> estaDuenio;
    fflush(stdin);
    if(estaDuenio==1){
        setEstaDuenioEquipaje(*ptrEquipaje,true);
    }else if(estaDuenio > 2 || estaDuenio < 1){
        cout<<"\nERROR: INGRESE UNA OPCION VALIDA";
    }
}


int main()
{
    /// Crear una lista de Vuelos

    Lista vuelosArribos;
    crearLista(vuelosArribos, compararListaVuelo);

    ///--------------------------- Cargo un vuelo y sus equipajes-----------------------//

    /// Crear un Vuelo
    Vuelo* ptrVuelo1 = new Vuelo;
    crearVuelo(*ptrVuelo1);
    agregarVuelo(ptrVuelo1,1,"Aerolineas Argentinas","Londres","Buenos Aires","05/06/2019","09:00","10:00","06/06/2019","01:00","Arribo");

    /// Agregarlo a la Lista
    adicionarFinal(vuelosArribos, ptrVuelo1);

    /// Crear un equipaje
    Equipaje* ptrEquipaje1 = new Equipaje;
    crearEquipaje(*ptrEquipaje1);
    agregarEquipaje(ptrEquipaje1,1,"Romina Mansilla",15);

    /// Agregarlo a la Pila del vuelo
    agregarEquipajeVuelo(*ptrVuelo1, ptrEquipaje1);

    /// Crear un equipaje
    Equipaje* ptrEquipaje2 = new Equipaje;
    crearEquipaje(*ptrEquipaje2);
    agregarEquipaje(ptrEquipaje2,2,"Damian Santos",23);

    /// Agregarlo a la Pila del vuelo
    agregarEquipajeVuelo(*ptrVuelo1, ptrEquipaje2);

    ///--------------------------- Repito el proceso-----------------------//

    /// Crear un vuelo
    Vuelo* ptrVuelo2 = new Vuelo;
    crearVuelo(*ptrVuelo2);
    agregarVuelo(ptrVuelo2,2,"Gol","Salta","Buenos Aires","05/06/2019","15:00","16:00","05/06/2019","19:00","Arribo");


    /// Agregarlo a la Lista
    adicionarFinal(vuelosArribos, ptrVuelo2);

    /// Crear un equipaje
    Equipaje* ptrEquipaje3 = new Equipaje;
    crearEquipaje(*ptrEquipaje3);
    agregarEquipaje(ptrEquipaje3,3,"Juan Perez",13);

    /// Agregarlo a la Pila del vuelo
    agregarEquipajeVuelo(*ptrVuelo2, ptrEquipaje3);

    /// Crear un equipaje
    Equipaje* ptrEquipaje4 = new Equipaje;
    crearEquipaje(*ptrEquipaje4);
    agregarEquipaje(ptrEquipaje4,4,"Dario Pereyra",23);

    /// Agregarlo a la Pila del vuelo
    agregarEquipajeVuelo(*ptrVuelo2, ptrEquipaje4);

    ///--------------------------- Entrego los equipajes-----------------------//

    Cola equipajesAEntregar ;
    crearCola(equipajesAEntregar);
    Lista EquipajesPerdidos;
    crearLista(EquipajesPerdidos,compararListaEquipajesPerdidos);

    /// Recorro la lista
     if(!listaVacia(vuelosArribos)){
        PtrNodoLista nodo = primero(vuelosArribos);
        while(nodo != finLista()){

            /// Obtengo el dato por la primitiva

            Vuelo* vuelo = (Vuelo*) nodo->ptrDato;
            imprimirVuelo(*vuelo);

            /// Si tiene equipajes
            while(tieneEquipaje(*vuelo)){

                /// Los saco de la pila, y los paso a la cola de Equipajes a Entregar
                Equipaje* ptrEquipaje = new Equipaje;
                *ptrEquipaje = sacarEquipajeVuelo(*vuelo);
                /// Pregunto si el dueño se encuentra en el aeropuerto
                estaDuenio(ptrEquipaje);
                system("cls");
                ///Esta duenio equipaje encolar equipaje
                if(getEstaDuenioEquipaje(*ptrEquipaje)==true){
                encolar(equipajesAEntregar, ptrEquipaje);
                imprimirEquipaje(*ptrEquipaje);
                }else{
                adicionarFinal(EquipajesPerdidos,ptrEquipaje);
                imprimirEquipajePerdido(*ptrEquipaje);
                }
            }
            nodo = siguiente(vuelosArribos, nodo);
        }
    }

    /// 1.  La entrega de equipajes ahora tiene que hacerse en dos etapas.
    ///     Si al momento de sacar un equipaje de la cola, el dueño no esta. Meterlo en una lista de "Equipajes Perdidos"

    /// 2. Permitir la busqueda de uno de los de "Equipajes Perdidos"  segun dos tipos de criterio (ID y Duenio)

    /// 3. Eliminar las estructuras creadas.

    return 0;
}
