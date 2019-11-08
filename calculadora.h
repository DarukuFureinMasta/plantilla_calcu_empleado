//
// Created by utec on 8/11/19.
//

#ifndef UNTITLED9_CALCULADORA_H
#define UNTITLED9_CALCULADORA_H

#include "tipos.h"
#include "empleado.h"
class calculadora_t{
private:
    porcentaje_t timpuesto;
    porcentaje_t tafp;
public:
    calculadora_t(porcentaje_t impuesto,porcentaje_t afp);
    importe_t calcular_neto(empleado_t& empleado);
    importe_t calcular_impuesto(empleado_t empleado);
    importe_t calcular_afp(empleado_t empleado);
};
#endif //UNTITLED9_CALCULADORA_H
