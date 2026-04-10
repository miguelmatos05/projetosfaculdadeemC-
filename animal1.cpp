#include "animal.h"
#include <cstring>


//Containers

Veterinario::Veterinario (string nom, string esp){

	nome=nom;
	especialidade=esp;
}


Veterinario::Veterinario (){
	
	nome="";
	especialidade="";

}


//Getters

string Veterinario::getNome() const{
	return nome;
}

string Veterinario:: getEspecialidade() const{
	return especialidade;
}

//Setters

void Veterinario::setNome(string nom){
	
	nome=nom;
}

void Veterinario::setEspecialidade(string esp){

	especialidade=esp;
}



