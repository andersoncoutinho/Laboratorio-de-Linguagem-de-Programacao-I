#include "FuncionarioNaoExisteException.h"

#include <iostream>

FuncionarioNaoExisteException::FuncionarioNaoExisteException(std::string nome) {
    this->nome = nome;
}

void FuncionarioNaoExisteException::info() {
    std::cout << "FuncionarioNaoExisteException " << nome;
}
