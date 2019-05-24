#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef __EQUIPAJE_H__
#define __EQUIPAJE_H__

#ifndef NULL
#define NULL      0
#endif

/******************************************************************************/
/* Definiciones de Tipos de Datos */
/*--------------------------------*/

/* Tipo de Informacion que esta contenida en un equipaje*/
typedef struct{
        int Id;
        string Duenio;
        bool estaDuenio;
        float Peso;
        } Equipaje;

/******************************************************************************/
/* Definicion de Primitivas */
/*--------------------------*/

/*
  pre : el equipaje no debe haber sido creado.
  post: equipaje queda creado y preparado para ser usado.

  equipaje: estructura de datos a ser creada.
*/

void crearEquipaje(Equipaje &equipaje);

/*----------------------------------------------------------------------------*/
/*
  pre : Equipaje creado con crearEquipaje().
  post: el campo id pasa a contener el dato ingresado.

  equipaje: estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setIdEquipaje(Equipaje &equipaje, int dato);

/*----------------------------------------------------------------------------*/
/*
  pre : Equipaje creado con crearEquipaje().
  post: el campo duenio pasa a contener el dato ingresado.

  equipaje: estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setDuenioEquipaje(Equipaje &equipaje, string dato);

/*----------------------------------------------------------------------------*/
/*
  pre : Equipaje creado con crearEquipaje().
  post: el campo estaDuenio pasa a contener el dato ingresado.

  equipaje: estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setEstaDuenioEquipaje(Equipaje &equipaje, bool dato);

/*----------------------------------------------------------------------------*/
/*
  pre : Equipaje creado con crearEquipaje().
  post: el campo peso pasa a contener el dato ingresado.

  equipaje: estructura sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setPesoEquipaje(Equipaje &equipaje, float dato);

/*----------------------------------------------------------------------------*/
/*
  pre : equipaje creado con crearEquipaje().
  post: devuelve el dato contenido en el campo id.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

int getIdEquipaje(Equipaje &equipaje);


/*----------------------------------------------------------------------------*/
/*
  pre : equipaje creado con crearEquipaje().
  post: devuelve el dato contenido en el campo Duenio.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

string getDuenioEquipaje(Equipaje &equipaje);

/*
  pre : equipaje creado con crearEquipaje().
  post: devuelve el dato contenido en el campo estaDuenio.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/
bool getEstaDuenioEquipaje(Equipaje &equipaje);


/*----------------------------------------------------------------------------*/
/*
  pre : equipaje creado con crearEquipaje().
  post: devuelve el dato contenido en el campo Peso.

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

float getPesoEquipaje(Equipaje &equipaje);


/*----------------------------------------------------------------------------*/
/*
  pre : equipaje creado con crearEquipaje().

  vuelo : estructura sobre la cual se invoca la primitiva.
*/

void eliminarEquipaje(Equipaje &equipaje);




#endif
