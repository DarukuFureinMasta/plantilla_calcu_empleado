//
// Created by utec on 8/11/19.
//

#include "planilla.h"
#include "calculadora.h"
#include "iostream"
#include <algorithm>

planilla_t::planilla_t(porcentaje_t timpuesto, porcentaje_t tafp):calculadora(timpuesto,tafp) {

}

void planilla_t::listar_empleados() {
    for(auto e : empleados){
        cout<<e->get_nombre()<<" "
        <<e->get_apellido()<<""
        <<e->get_dni()<<" "
        <<e->get_remuneracion()<<" "
        <<calculadora.calcular_neto(*e)<<" "
        <<endl;
    }

}

importe_t planilla_t::calcular_remuneracion_total() {
    importe_t temp=0;
    for(auto e: empleados){
        temp+=e->get_remuneracion();
    }
    return temp;
}

importe_t planilla_t::calcular_impuesto_total() {
    importe_t temp=0;
    for(auto e: empleados){
        temp+=calculadora.calcular_impuesto(*e);
    }
    return 0;
}

void planilla_t::adicionar_empleado(empleado_t *empleado) {
    empleados.push_back(empleado);

}

void planilla_t::remover_empleado(empleado_t *empleado) {
    auto it=find(begin(empleados),end(empleados),empleado);
    if(it!=end(empleados))
        empleados.erase(it);

}

empleado_t *planilla_t::obtener_empleado(texto_t dni) {
    for(auto e : empleados){

    }
    return nullptr;
}