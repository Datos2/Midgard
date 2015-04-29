#include "write.h"

write::write() {        
}


int write::writer() {
    Jzon::Object root;
        root.Add("names", "value");
        root.Add("number", 20);
        root.Add("anothernumber", 15.3);
        root.Add("stuff", true);
        Jzon::Array listOfStuff;
        listOfStuff.Add("json");
        listOfStuff.Add("more stuff");
        listOfStuff.Add(Jzon::null);
        listOfStuff.Add(false);
        root.Add("listOfStuff", listOfStuff);

        Jzon::FileWriter::WriteFile("Datos/file.json", root, Jzon::StandardFormat);
        
        cout<<"Listo"<<endl;
        
        return 0;
}
