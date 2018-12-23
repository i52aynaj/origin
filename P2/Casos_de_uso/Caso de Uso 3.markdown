### CASO DE USO 3

**Cargar Backups de los alumnos**

**ID**:02

**Breve descripción**: El sistema carga los datos de los alumnos desde fichero.

**Actores principales**:Usuario
**Actores secundarios**:Alumno

**Precondiciones**:

1. El Fichero deberá ser binario.

**Flujo principal**:

1. El caso de uso empieza cuando el usuario quiere cargar un backups de los alumnos.
2. El sistema comprueba si el usuario tiene permiso para ejecutar esta operación.
3. El backup es cargado.

**Postcondiciones**:

* Todos los alumnos serán cargados desde un fichero binario.

**Flujos alternativos**:

1.1 Si no existe ningún alumno(no existe fichero), el sistema muestra un mensaje de error y volverá a mostrar el menú principal.
2.1 Si el usuario no tiene permiso, el sistema lo indicará en un mensaje de error y volverá al menú principal.
