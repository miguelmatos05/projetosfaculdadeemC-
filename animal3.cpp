#include "animal.h"

// Construtores
Animal::Animal(string esp, bool sx, string nm, int id)
    : especie(esp), sexo(sx), nome(nm), idade(id), veterinario() {}

Animal::Animal(string esp, bool sx, string nm, int id, Veterinario vet)
    : especie(esp), sexo(sx), nome(nm), idade(id), veterinario(vet) {}

Animal::Animal(Animal &a)
    : especie(a.especie), sexo(a.sexo), nome(a.nome), idade(a.idade), veterinario(a.veterinario) {}

// Getters
string Animal::getEspecie() const { return especie; }
bool Animal::getSexo() const { return sexo; }
string Animal::getNome() const { return nome; }
int Animal::getIdade() const { return idade; }
Veterinario Animal::getVeterinario() const { return veterinario; }

// Setters
void Animal::setIdade(int id) { idade = id; }
void Animal::setVeterinario(Veterinario vet) { veterinario = vet; }