### CASO DE USO 2

**Guardar Backups de los alumnos**

**ID**:02

**Breve descripción**: El sistema guarda los datos de los alumnos en fichero

**Actores principales**:Usuario
**Actores secundarios**:Alumno

**Precondiciones**:

1. El Fichero deberá ser binario.

**Flujo principal**:

1. El caso de uso empieza cuando el usuario quiere guardar un backup de los alumnos.
2. El sistema comprueba si el usuario tiene permiso para ejecutar esta operación.
3. El backup es guardado.

**Postcondiciones**:

* Todos los alumnos serán guardados en un fichero binario.

**Flujos alternativos**:

1.1 Si no existe ningún alumno, el sistema muestra un mensaje de error y volverá a mostrar el menú principal.
2.1 Si el usuario no tiene permiso, el sistema lo indicará en un mensaje de error y volverá al menú principal.
