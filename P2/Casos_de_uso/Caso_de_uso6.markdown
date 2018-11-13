### CASO DE USO 6

**Eliminar Alumno**

**ID**:06

**Breve descripción**:El Usuario elimina un alumno de la base de datos.

**Actores principales**:Usuario
**Actores secundarios**:Alumno

**Precondiciones**:

1. El usuario a eliminar debe existir.


**Flujo principal**:

1. El caso de uso empieza cuando el usuario necesita eliminar un alumno.
2. El sistema elimina un alumno de la base datos.

**Postcondiciones**:

* El sistema elimina los datos de un alumno de la base de datos.

**Flujos alternativos**:

1. Si no existe el alumno, el sistema muestra un mensaje de error y volverá a pedir los datos para buscar al alumno.
2. Si existen dos alumnos con los mismos apellidos, el sistema pedirá el DNI para diferenciarlos.
