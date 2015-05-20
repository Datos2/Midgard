/*
 * Xml.cpp
 *
 *  Created on: Mar 28, 2015
 *      Author: steven
 */

#include "Xml.h"
#include "tinyxml.h"
using namespace std;



Xml::Xml(const char* pfile){//contructor con el nombre del xml.
	arch=pfile;//lo asigna al atributo de la clase.
	TiXmlDocument doc(arch);//inicializa el documento con el nombre del archivo.
        cout<<doc.LoadFile(arch)<<endl;
	file=doc;
}

Xml::Xml(){//constructor vacio.
	arch=NULL;
	TiXmlDocument doc();//crea archivo en blanco.

}

bool Xml::cargar_archivo(){
	TiXmlDocument doc(arch);//se crea instancia de documento tinyxml
	bool esta_cargado = file.LoadFile(arch);//se carga el archivo.
	if (esta_cargado){//si se cargo con exito.
		printf("Archivo cargado exitosamente \n");
		return true;
	}
	else{//no se cargo.
		printf("No se pudo cargar archivo \n");
		return false;
	}
}

// lee el texto del xml.
const char* Xml::read(const char* pchar){//se busca pchar.
	TiXmlElement *elemento_actual = file.RootElement()->FirstChildElement(pchar);//define la variable como el primer hijo de la raiz
	while (elemento_actual!= NULL){		//y compara si el parametro coincide con lo que se busca.
		if(elemento_actual){//si coincide, se encontro.
			printf("ele: %s \t","si");break;
		cout<<"si"<<endl;}
		else{//no coincide.
			printf("ele: %s \t","no");
			cout<<"no"<<endl;
		}
		elemento_actual = elemento_actual->NextSiblingElement();//sigue recorriendo los elementos.
	}return elemento_actual->ValueTStr().c_str();//retorna elemento.
}


// lee el texto del xml.
const char* Xml::printElements(){//se imprimen los elementos.
	TiXmlElement *elemento_actual = file.RootElement()->FirstChildElement();//define la variable como el primer hijo de la raiz
	while (elemento_actual!= NULL){		//y compara si el parametro coincide con lo que se busca.
		if(elemento_actual){//si coincide, se encontro.
			cout<<elemento_actual->GetText()<<endl;
		}
		elemento_actual =elemento_actual->NextSiblingElement();//sigue recorriendo los elementos.
	}return elemento_actual->ValueTStr().c_str();//retorna elemento.
}

//retorna una lista con los elementos de xml.
ListaSimple<const char*>* Xml::getElements(){//mete en una lista los elementos del xml.
    ListaSimple<const char*> *lista=new ListaSimple<const char*>();     
    TiXmlElement *elemento_actual =file.RootElement()->FirstChildElement();//define la variable como el primer hijo de la raiz

    while (elemento_actual!= NULL){		//y compara si el parametro coincide con lo que se busca.
            if(elemento_actual){                 
                const char* str=(const char*)elemento_actual->GetText();
                    lista->insertar(str);
            }
            elemento_actual =elemento_actual->NextSiblingElement();//sigue recorriendo los elementos.
    }
return lista;//retorna elemento.

}
 
 
string Xml::IntToString(int N){
    ostringstream ss("");
    ss << N;
    return ss.str();
}
