#include <cstdlib>
#include <iostream>
#include <string>
#include "Pila.h"
#include "Equipaje.h"

using namespace std;

#ifndef __TRANSPORTADOR_H__
#define __TRANSPORTADOR_H__

#ifndef NULL
#define NULL      0
#endif

/******************************************************************************/
/* Definiciones de Tipos de Datos */
/*--------------------------------*/

/* Tipo de Informacion que esta contenida en un transportador*/
typedef struct{
        int Id;
        float Capacidad;
        Pila equipajes;
        } Transportador;

/******************************************************************************/
/* Definicion de Primitivas */
/*--------------------------*/

/*
  pre : el transportador no debe haber sido creado.
  post: transportador queda creado y preparado para ser usado.

  transportador: estructura de datos a ser creada.
*/

void crearTransportador(Transportador &transportador);

/*----------------------------------------------------------------------------*/
/*
  pre : transportador creado con crearTransportador().
  post: el campo id pasa a contener el dato ingresado.

  transportador: estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setIdTransportador(Transportador &transportador, int dato);

/*----------------------------------------------------------------------------*/
/*
  pre : transportador creado con crearTransportador().
  post: el campo capacidad pasa a contener el dato ingresado.

  transportador: estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setCapacidadTransportador(Transportador &transportador, float dato);

/*----------------------------------------------------------------------------*/
/*
  pre : transportador creado con crearTransportador().
  post: el campo equipajes pasa a contener el dato ingresado.

  transportador: estructura sobre la cual se invoca la primitiva.
  dato: dato a agregarse.
*/

void agregarEquipajeTransportador(Transportador &transportador, Equipaje *equipaje);

/*----------------------------------------------------------------------------*/
/*
  pre : transportador creado con crearTransportador().
  post: devuelve el dato contenido en el campo id.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

int getIdTransportador(Transportador &transportador);


/*----------------------------------------------------------------------------*/
/*
  pre : transportador creado con crearTransportador().
  post: devuelve el dato contenido en el campo Capacidad.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

float getCapacidadTransportador(Transportador &transportador);


/*----------------------------------------------------------------------------*/
/*
  pre : transportador creado con crearTransportador().
  post: devuelve el primer dato contenido en la pila Equipaje.

  transportador: estructura sobre la cual se invoca la primitiva.
*/

Equipaje getEquipajeTransportador(Transportador &transportador);


/*----------------------------------------------------------------------------*/
/*
  pre : transportador creado con crearTransportador().
  
  transportador: estructura sobre la cual se invoca la primitiva.
*/

void eliminarTransportador(Transportador &transportador);




#endif
