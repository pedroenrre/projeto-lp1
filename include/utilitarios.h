#ifndef __UTILITARIOS_H__
#define __UTILITARIOS_H__

#include <iostream>
#include <string>
#include <deque>
#include <cstdlib>
#include <sstream>


void printCabecalho(std::string titulo, std::deque<std::string> caminho);
void printCaminho(std::deque<std::string> caminho);
std::string intParaString(int i);

#endif // __UTILITARIOS_H__