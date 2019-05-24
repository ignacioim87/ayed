#include <cstdlib>
#include <iostream>
#include <string>
#include "Pila.h"
#include "Equipaje.h"

using namespace std;

#ifndef __VUELO_H__
#define __VUELO_H__

#ifndef NULL
#define NULL      0
#endif

/******************************************************************************/
/* Definiciones de Tipos de Datos */
/*--------------------------------*/

/* Tipo de Informacion que esta contenida en un vuelo*/

typedef struct {
    int Id;
    string Aerolinea;
    string C_Origen;
    string C_Destino;
    string F_Salida;
    string H_Embarque;
    string H_Despegue;
    string F_Llegada;
    string H_Arribo;
    string Tipo;
    Pila equipajes;
} Vuelo;

/******************************************************************************/
/* Definicion de Primitivas */
/*--------------------------*/

/*
  pre : el vuelo no debe haber sido creado.
  post: vuelo queda creado y preparado para ser usado.

  vuelo : estructura de datos a ser creada.
*/

void crearVuelo(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: el campo id pasa a contener el dato ingresado.

  vuelo : estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setIdVuelo(Vuelo &vuelo, int dato);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: el campo aerolinea pasa a contener el dato ingresado.

  vuelo : estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setAerolinea(Vuelo &vuelo, string dato);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: el campo C_Origen pasa a contener el dato ingresado.

  vuelo : estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setC_Origen(Vuelo &vuelo, string dato);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: el campo C_Destino pasa a contener el dato ingresado.

  vuelo : estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setC_Destino(Vuelo &vuelo, string dato);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: el campo F_Salida pasa a contener el dato ingresado.

  vuelo : estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setF_Salida(Vuelo &vuelo, string dato);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: el campo H_Embarque pasa a contener el dato ingresado.

  vuelo : estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setH_Embarque(Vuelo &vuelo, string dato);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: el campo H_Despegue pasa a contener el dato ingresado.

  vuelo : estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setH_Despegue(Vuelo &vuelo, string dato);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: el campo F_Llegada pasa a contener el dato ingresado.

  vuelo : estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setF_Llegada(Vuelo &vuelo, string dato);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: el campo H_Arribo pasa a contener el dato ingresado.

  vuelo : estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setH_Arribo(Vuelo &vuelo, string dato);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: el campo Tipo pasa a contener el dato ingresado.

  vuelo : estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setTipoVuelo(Vuelo &vuelo, string dato);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: agrega un tipo Equipaje a la pila de equipajes.

  vuelo : estructura sobre la cual se invoca la primitiva.
  equipaje: dato para agregar.
*/

void agregarEquipajeVuelo(Vuelo &vuelo, Equipaje* ptrEquipaje);


/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: devuelve el dato contenido en el campo id.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

int getIdVuelo(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: devuelve el dato contenido en el campo aerolinea.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

string getAerolinea(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: devuelve el dato contenido en el campo C_Origen.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

string getC_Origen(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: devuelve el dato contenido en el campo C_Destino.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

string getC_Destino(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: devuelve el dato contenido en el campo F_Salida.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

string getF_Salida(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: devuelve el dato contenido en el campo H_Embarque.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

string getH_Embarque(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: devuelve el dato contenido en el campo H_Despegue.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

string getH_Despegue(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: devuelve el dato contenido en el campo F_Llegada.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

string getF_Llegada(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: devuelve el dato contenido en el campo H_Arribo.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

string getH_Arribo(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: devuelve el dato contenido en el campo Tipo.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

string getTipoVuelo(Vuelo &vuelo);


/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().
  post: devuelve un tipo Equipaje sacandolo de la pila de equipajes.

  vuelo : estructura sobre la cual se invoca la primitiva.
  equipaje: dato extraido
*/

Equipaje sacarEquipajeVuelo(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/

/*
  pre : vuelo creado con crearVuelo().
  post: devuelve el contenido de la cima de la pila de equipajes.

  vuelo : estructura sobre la cual se invoca la primitiva.
  equipaje: dato consultado
*/

Equipaje getEquipajeVuelo(Vuelo &vuelo);


/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

void eliminarVuelo(Vuelo &vuelo);

/*----------------------------------------------------------------------------*/
/*
  pre : vuelo creado con crearVuelo().

  vuelo : estructura sobre la cual se invoca la primitiva.

  bool: inducador de si tiene equipaje
*/
bool tieneEquipaje(Vuelo &vuelo);

#endif
