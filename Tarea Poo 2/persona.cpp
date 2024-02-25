//
//  persona.cpp
//  Tarea Poo 2
//
//  Created by Luis Rivas on 25/02/24.
//

#include "persona.hpp"
#include <iostream>
using namespace std;
class Persona{
    //atrubitos de la clase
    protected : string nombres,apellidos,direccion,fecha_nacimiento;
    int telefono;
    
    protected :
    Persona(){
        
    }
    Persona(string nom, string ape, string dir, string fn, int tel){
        nombres = nom;
        apellidos = ape;
        direccion = dir;
        telefono = tel;
        fecha_nacimiento = fn;
    }
    
    
    void mostrar(){
        
    }
    void crear(){
        
    }
    void leer(){
        
    }
    void actualizar(){
        
    }
    void borrar(){
    }
};
