//
// Created by Emiliano on 2/6/2019.
//

#ifndef TP_FINAL_AYP3_CREDITO_H
#define TP_FINAL_AYP3_CREDITO_H

#include "cliente.h"

typedef struct miCredito{
double montoTotal;
double montoDeLaCuota;
int cantidadDeCuotasRestantes;
int cantidadDeCuotas;
struct miCliente *cliente;

Credito *iniciarCredito(Cliente *cliente);
} Credito;
#endif //TP_FINAL_AYP3_CREDITO_H
