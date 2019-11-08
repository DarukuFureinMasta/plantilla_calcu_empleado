//
// Created by utec on 8/11/19.
//
#include "calculadora.h"

calculadora_t::calculadora_t(porcentaje_t impuesto, porcentaje_t afp)
    :timpuesto(impuesto),tafp(afp) {

}


importe_t calculadora_t::calcular_impuesto(empleado_t empleado) {
    return empleado.get_remuneracion()*timpuesto/100;
}

importe_t calculadora_t::calcular_afp(empleado_t empleado) {
    return empleado.get_remuneracion()*tafp/100;
}

importe_t calculadora_t::calcular_neto(empleado_t &empleado) {
    return empleado.get_remuneracion()-calcular_impuesto(empleado)-calcular_afp(empleado);
}






