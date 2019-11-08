//
// Created by utec on 8/11/19.
//

#ifndef UNTITLED9_EMPLEADO_H
#define UNTITLED9_EMPLEADO_H

#include "tipos.h"

class empleado_t{
private:
    texto_t nombre=" ";
    texto_t apellido=" ";
    importe_t remuneracion=0;
    texto_t dni=" ";
public:
    empleado_t(texto_t nombre,texto_t apellido,importe_t remuneracion, texto_t dni);
    texto_t get_nombre();
    texto_t get_apellido();
    importe_t get_remuneracion();
    texto_t get_dni();

};
#endif //UNTITLED9_EMPLEADO_H
