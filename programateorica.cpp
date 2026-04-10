#include <iostream>
#include <list>

int main(){

    std::list<float> temperaturas;
    int n;

    std::cout<<"Quantas temperaturas queres inserir?";
    std::cin>>n;

    for(int i=0; i<n; i++){

        float temp;
        std::cout<<"Insira as temperaturas:";
        std::cin>>temp;
        
        temperaturas.push_back(temp);
    }

    std::cout<<"\nTemperaturas:\n";

    for(float t:temperaturas){
        std::cout << t << " ";
    }


    float soma=0;

    for(float t: temperaturas){

        soma+= t;
    }

    if(!temperaturas.empty()){
     
    float media=soma/temperaturas.size();
    std::cout<<"A média das temperaturas é: " << media << std::endl;

    }else{ 
        std::cout<<"Temperaturas inválidas";
    }

    

    temperaturas.remove_if([](float t) {

        return t<0; });

    
    std::cout<<"Lista sem as temperaturas negativas:";
    for (float t : temperaturas) {
        std::cout << t << " ";
    }

    return 0;

}