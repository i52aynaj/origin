### CASO DE USO 1

**Añadir alumno**

**ID**:01

**Breve descripción**: El usuario introduce un alumno

**Actores principales**:Usuario
**Actores secundarios**:Alumno

**Precondiciones**:

1. El DNI del alumno debe ser único
2. Todos los campos son obligatorios, menos equipo y líder.

**Flujo principal**:

1. El caso de uso empieza cuando el usuario necesita introducir un alumno.
2. El usuario selecciona la opción en el menú principal.
3. El usuario introduce los datos necesarios para añadir al alumno.
4. El alumno es añadido a la base de datos.

**Postcondiciones**:

* El alumno aparece en la base de datos.

**Flujos alternativos**:

3.1 Si el DNI no es único o falta alguno de los datos necesarios mínimos para añadir un alumno, el sistema muestra un mensaje de error y volverá a pedir los datos para añadir al alumno.


