#ifndef __PAINEIS_H__
#define __PAINEIS_H__

#include <painel.h>

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <deque>

void painelPrincipal();
void painelAnimais(std::deque<std::string> caminho);
void painelAnimaisConsulta(std::deque<std::string> caminho);
void painelFuncionarios(std::deque<std::string> caminho);
void painelTratadores(std::deque<std::string> caminho);
void painelVeterinarios(std::deque<std::string> caminho);

#endif // __PAINEIS_H__S