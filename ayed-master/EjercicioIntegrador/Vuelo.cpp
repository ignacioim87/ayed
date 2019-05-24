#include "Vuelo.h"
#include "Pila.h"


/******************************************************************************/
/* Implementación de Primitivas */
/*------------------------------*/

void crearVuelo(Vuelo &vuelo){
    vuelo.Id = 0;
    vuelo.Aerolinea = "";
    vuelo.C_Origen = "";
    vuelo.C_Destino = "";
    vuelo.F_Salida = "";
    vuelo.H_Embarque = "";
    vuelo.H_Despegue = "";
    vuelo.F_Llegada = "";
    vuelo.H_Arribo = "";
    vuelo.Tipo = "";
    crearPila(vuelo.equipajes);
}

/*----------------------------------------------------------------------------*/


void setIdVuelo(Vuelo &vuelo, int dato){
     vuelo.Id = dato;
}

/*----------------------------------------------------------------------------*/

void setAerolinea(Vuelo &vuelo, string dato){
     vuelo.Aerolinea = dato;
}

/*----------------------------------------------------------------------------*/

void setC_Origen(Vuelo &vuelo, string dato){
     vuelo.C_Origen = dato;
}

/*----------------------------------------------------------------------------*/

void setC_Destino(Vuelo &vuelo, string dato){
     vuelo.C_Destino = dato;
}

/*----------------------------------------------------------------------------*/

void setF_Salida(Vuelo &vuelo, string dato){
     vuelo.F_Salida = dato;
}

/*----------------------------------------------------------------------------*/

void setH_Embarque(Vuelo &vuelo, string dato){
     vuelo.H_Embarque = dato;
}

/*----------------------------------------------------------------------------*/

void setH_Despegue(Vuelo &vuelo, string dato){
     vuelo.H_Despegue = dato;
}

/*----------------------------------------------------------------------------*/

void setF_Llegada(Vuelo &vuelo, string dato){
     vuelo.F_Llegada = dato;
}

/*----------------------------------------------------------------------------*/

void setH_Arribo(Vuelo &vuelo, string dato){
     vuelo.H_Arribo = dato;
}

/*----------------------------------------------------------------------------*/

void setTipoVuelo(Vuelo &vuelo, string dato){
     vuelo.Tipo = dato;
}

/*----------------------------------------------------------------------------*/

void agregarEquipajeVuelo(Vuelo &vuelo, Equipaje* ptrEquipaje){
     agregar(vuelo.equipajes, ptrEquipaje);
}

/*----------------------------------------------------------------------------*/

int getIdVuelo(Vuelo &vuelo){
    return vuelo.Id;
}

/*----------------------------------------------------------------------------*/

string getAerolinea(Vuelo &vuelo){
    return vuelo.Aerolinea;
}

/*----------------------------------------------------------------------------*/

string getC_Origen(Vuelo &vuelo){
    return vuelo.C_Origen;
}

/*----------------------------------------------------------------------------*/

string getC_Destino(Vuelo &vuelo){
    return vuelo.C_Destino;
}

/*----------------------------------------------------------------------------*/

string getF_Salida(Vuelo &vuelo){
    return vuelo.F_Salida;
}

/*----------------------------------------------------------------------------*/

string getH_Embarque(Vuelo &vuelo){
    return vuelo.H_Embarque;
}

/*----------------------------------------------------------------------------*/

string getH_Despegue(Vuelo &vuelo){
    return vuelo.H_Despegue;
}

/*----------------------------------------------------------------------------*/

string getF_Llegada(Vuelo &vuelo){
    return vuelo.F_Llegada;
}

/*----------------------------------------------------------------------------*/

string getH_Arribo(Vuelo &vuelo){
    return vuelo.H_Arribo;
}

/*----------------------------------------------------------------------------*/

string getTipoVuelo(Vuelo &vuelo){
    return vuelo.Tipo;
}

/*----------------------------------------------------------------------------*/

Equipaje sacarEquipajeVuelo(Vuelo &vuelo){
    return *((Equipaje*)sacar(vuelo.equipajes));
}

/*----------------------------------------------------------------------------*/

Equipaje getEquipajeVuelo(Vuelo &vuelo){
    return *((Equipaje*)(cima(vuelo.equipajes)->ptrDato));
}



/*----------------------------------------------------------------------------*/

void eliminarVuelo(Vuelo &vuelo){
     while(!pilaVacia(vuelo.equipajes)){

       Equipaje* ptrEquipaje = (Equipaje*) sacar(vuelo.equipajes);
       eliminarEquipaje(*ptrEquipaje);

       delete ptrEquipaje;
     }

}

/*----------------------------------------------------------------------------*/

bool tieneEquipaje(Vuelo &vuelo){
    return !pilaVacia(vuelo.equipajes);
}


