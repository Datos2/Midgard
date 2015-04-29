#include "read.h"

read::read() {
}

int read::reader() {
    Jzon::Object rootNode;
        Jzon::FileReader::ReadFile("Datos/file.json", rootNode);

        for (Jzon::Object::iterator it = rootNode.begin(); it != rootNode.end(); ++it)
        {
                string name = (*it).first;
                Jzon::Node &node = (*it).second;

                cout << name << " = ";
                if (node.IsValue())
                {
                        switch (node.AsValue().GetValueType())
                        {
                        case Jzon::Value::VT_NULL   : cout << "null"; break;
                        case Jzon::Value::VT_STRING : cout << node.ToString(); break;
                        case Jzon::Value::VT_NUMBER : cout << node.ToFloat(); break;
                        case Jzon::Value::VT_BOOL   : cout << (node.ToBool()?"true":"false"); break;
                        }
                }
                else if (node.IsArray())
                {
                        cout << "*Array*";
                }
                else if (node.IsObject())
                {
                        cout << "*Object*";
                }
                cout << endl;
        }

        const Jzon::Array &stuff = rootNode.Get("listOfStuff").AsArray();
        for (Jzon::Array::const_iterator it = stuff.begin(); it != stuff.end(); ++it)
        {
                cout << (*it).ToString() << endl;
        }

        cout<<"leido"<<endl;
        
        return 0;
}

