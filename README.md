# Plan de Árboles

---

## Calendario de Actividades

**4 de Noviembre:** 
- Implementar inserción y recorrido de un árbol.

**11 de Noviembre:** 
- Incorporar la funcionalidad de eliminación de nodos en el ejercicio de gestión de contenedores.

**25 de Noviembre:** 
- Introducir el concepto de balanceo de árboles con una exposición y ejemplos prácticos.

**Diciembre:** 
- Presentación del proyecto final.

---

## Noviembre 4: Sistema de Gestión de Contenedores 

En el Terminal Portuario cada contenedor es identificado con un código único y tiene asignada una prioridad determinada por el operario. Esta prioridad varía en un rango de 1 a 100. Para la administración portuaria, es esencial gestionar eficientemente estos contenedores, especialmente identificar de manera inmediata aquellos con las prioridades más altas (donde 100 representa la máxima prioridad).

Un aspecto a considerar es que si dos contenedores reciben la misma prioridad, el primero en ser ingresado mantiene dicha prioridad, mientras que el siguiente deberá adaptarse a la prioridad disponible anteriormente. Por ejemplo:

- Si el contenedor A tiene prioridad 50 y llega un contenedor B con la misma prioridad propuesta, dado que el 50 ya está asignado, el contenedor B adoptará la prioridad 49.
- Si posteriormente llega el contenedor C con una prioridad propuesta de 47, se le asignará esa prioridad ya que no ha sido previamente ocupada.
- Si el contenedor D llega con una prioridad propuesta de 50, dado que las prioridades 50 y 49 ya están ocupadas por los contenedores A y B, respectivamente, se le asignará la prioridad 48 a D.

**Objetivo:** Desarrollar un programa que facilite la gestión de los contenedores y que permita recorrer el árbol binario de contenedores de la mayor a la menor prioridad.

