#include "Transportador.h"
#include "Pila.h"

/******************************************************************************/
/* Implementación de Primitivas */
/*------------------------------*/

void crearTransportador(Transportador &transportador){
    transportador.Id = 0;
    transportador.Capacidad = 1000;
    crearPila(transportador.equipajes);
}

/*----------------------------------------------------------------------------*/


void setIdTransportador(Transportador &transportador, int dato){
     transportador.Id = dato;
}

/*----------------------------------------------------------------------------*/

void setCapacidadTransportador(Transportador &transportador, float dato){
     transportador.Capacidad = dato;
}

/*----------------------------------------------------------------------------*/

void agregarEquipajeTransportador(Transportador &transportador, Equipaje *equipaje){
     agregar(transportador.equipajes, equipaje);
}

/*----------------------------------------------------------------------------*/

int getIdTransportador(Transportador &transportador){
    return transportador.Id;
}

/*----------------------------------------------------------------------------*/

float getCapacidadTransportador(Transportador &transportador){
    return transportador.Capacidad;
}

/*----------------------------------------------------------------------------*/

Equipaje getEquipajeTransportador(Transportador &transportador){
    return *((Equipaje*)sacar(transportador.equipajes)); 
}

/*----------------------------------------------------------------------------*/

void eliminarTransportador(Transportador &transportador){
     while(!pilaVacia(transportador.equipajes)){
                                        
       Equipaje* ptrEquipaje = (Equipaje*) sacar(transportador.equipajes);
       eliminarEquipaje(*ptrEquipaje);
       
       delete ptrEquipaje;
     }

}






