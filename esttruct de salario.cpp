#include <stdio.h>
#include <stdlib.h>

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
} empleados[2];

void obtenerDatosEmpleado(struct empleado *emp, int i) {
    fflush(stdin);

    printf("%i. Digite su nombre:\n", i + 1);
    gets(emp->nombre);

    printf("%i. Digite dirección:\n", i + 1);
    gets(emp->dir_empleado.direccion);

    printf("%i. Digite su ciudad donde vive:\n", i + 1);
    gets(emp->dir_empleado.ciudad);

    printf("%i. Digite la provincia donde está:\n", i + 1);
    gets(emp->dir_empleado.provincia);

    printf("%i. Digite su salario: ", i + 1);
    scanf("%lf", &emp->salario);
    printf("\n");
}

void mostrarDatosEmpleado(const struct empleado *emp, int i) {
    printf("\n\n ****DATOS DEL EMPLEADO****\n");
    printf("Empleado n° %i:\n", i + 1);
    printf("Su nombre es: %s\n", emp->nombre);
    printf("Su dirección es: %s\n", emp->dir_empleado.direccion);
    printf("La ciudad donde vive es: %s\n", emp->dir_empleado.ciudad);
    printf("Su salario es de: %.2lf\n", emp->salario);
}

int main() {
    int i;

    for (i = 0; i < 2; i++) {
        obtenerDatosEmpleado(&empleados[i], i);
    }

    for (i = 0; i < 2; i++) {
        mostrarDatosEmpleado(&empleados[i], i);
    }

    return 0;
}


