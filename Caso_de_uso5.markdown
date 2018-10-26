### CASO DE USO 5

**Modificar alumno**

**ID**:05

**Breve descripción**:El Usuario modifica los datos de un alumno.

**Actores principales**:Usuario
**Actores secundarios**:Alumno

**Precondiciones**:

1. El usuario a modificar debe existir.


**Flujo principal**:

1. El caso de uso empieza cuando el usuario necesita modificar un alumno.
2. El sistema modifica/sobreescribe los datos de un alumno.

**Postcondiciones**:

* El sistema modifica los datos de un alumno en la base de datos.
* Al modificar el alumno, los campos DNI y correo deben ser únicos. 

**Flujos alternativos**:

1. Si no existe el alumno, el sistema muestra un mensaje de error.
2. Si el DNI no es único, el sistema mostrará un mensaje de error.
