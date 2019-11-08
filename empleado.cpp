//
// Created by utec on 8/11/19.
//
#include "tipos.h"
#include "empleado.h"


empleado_t::empleado_t(texto_t nombre, texto_t apellido, importe_t remuneracion, texto_t dni)
    :nombre(nombre),apellido(apellido),remuneracion(remuneracion),dni(dni) {

}

texto_t empleado_t::get_nombre() {
    return nombre;
}

texto_t empleado_t::get_apellido() {
    return apellido;
}

importe_t empleado_t::get_remuneracion() {
    return remuneracion;
}

texto_t empleado_t::get_dni() {
    return dni;
}


