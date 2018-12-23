### CASO DE USO 6

**Eliminar Alumno**

**ID**:06

**Breve descripción**:El Usuario elimina un alumno de la base de datos.

**Actores principales**:Usuario
**Actores secundarios**:Alumno

**Precondiciones**:

1. El alumno a eliminar debe existir.


**Flujo principal**:

1. El caso de uso empieza cuando el usuario necesita eliminar un alumno.
2. El usuario selecciona la opción en el menú principal.
3. El sistema da al usuario la opción de elegir el método de búsqueda.
4. El sistema busca al alumno.
5. El alumno es eliminado de la agenda.
6. Los cambios quedan aplicados.

**Postcondiciones**:

* El sistema elimina al alumno de la agenda.

**Flujos alternativos**:

4.1 Si no existe el alumno, el sistema muestra un mensaje de error y volverá a pedir los datos para buscar el alumno.
4.2 Si existen dos alumnos con los apellidos, el sistema pedirá el DNI para diferenciarlos.
4.3 Si no existe un alumno con los datos dados, el sistema lo indicará y volverá al menú.
