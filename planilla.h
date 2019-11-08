//
// Created by utec on 8/11/19.

//

#ifndef UNTITLED9_PLANILLA_H
#define UNTITLED9_PLANILLA_H

#include "tipos.h"
#include "empleado.h"
#include "calculadora.h"

class planilla_t{
private:
    vector <empleado_t*> empleados;
    calculadora_t calculadora;
public:
    planilla_t(porcentaje_t timpuesto, porcentaje_t  tafp);
    void listar_empleados();
    importe_t calcular_remuneracion_total();
    importe_t calcular_impuesto_total();
    void adicionar_empleado(empleado_t* empleado);
    void remover_empleado(empleado_t* empleado);
    empleado_t* obtener_empleado(texto_t dni);

};

#endif //UNTITLED9_PLANILLA_H
