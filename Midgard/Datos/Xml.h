/*
 * Xml.h
 *
 *  Created on: Mar 28, 2015
 *      Author: steven
 */

#ifndef XML_H_
#define XML_H_
#include <iostream>
#include "../TinyXmlLib/tinyxml.h"
#include "../Estructuras/ListaSimple.h"
/*
 * se crea la clase para el manejo de archivos xml.
 */
class Xml {
private:
	const char* arch;//nombre del archivo xml
	TiXmlDocument file;//documento de tinyxml.
public:
	Xml(void);//constructor vacio.
	Xml(const char*);//constructor con nombre de xml como parametro.
	bool cargar_archivo();//carga el archivo xml.
	const char* read(const char*);//const char que va a buscar, si esta lo devuelve.
	const char* printElements();
	ListaSimple<const char*> getElements();
	const char* getArch() const {//get de arch.
		return arch;
	}

	void setArch(const char* arch) {//set de arch.
		this->arch = arch;
	}

	const TiXmlDocument& getFile() const {//get del archivo.
		return file;
	}

	void setFile(const TiXmlDocument& file) {//set del archivo.
		this->file = file;
	}
};

#endif /* XML_H_ */
