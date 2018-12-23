### CASO DE USO 5

**Modificar alumno**

**ID**:05

**Breve descripción**:El Usuario modifica los datos de un alumno.

**Actores principales**:Usuario
**Actores secundarios**:Alumno

**Precondiciones**:

1. El alumno a modificar debe existir.


**Flujo principal**:

1. El caso de uso empieza cuando el usuario necesita modificar un alumno.
2. El usuario selecciona la opción en el menú principal.
3. El sistema da al usuario la opción de elegir el método de búsqueda.
4. El sistema busca al alumno.
5. El sistema permite al usuario modificar los datos del alumno.
6. Los cambios quedan aplicados.

**Postcondiciones**:

* El sistema modifica los datos de un alumno en la base de datos.
* Al modificar el alumno, los campos DNI y correo deben ser únicos. 

**Flujos alternativos**:

4.1 Si no existe el alumno, el sistema muestra un mensaje de error y volverá a pedir los datos para buscar el alumno.
4.2 Si existen dos alumnos con los apellidos, el sistema pedirá el DNI para diferenciarlos.
4.3 Si no existe un alumno con los datos dados, el sistema lo indicará y volverá al menú.
5.1 Si al modificar los datos de un alumno existe algún conflicto, el sistema mostrará un mensaje de error y volverá al menú.
