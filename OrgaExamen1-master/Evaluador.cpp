#include "Evaluador.h"

string getPrimerElemento(queue<string> mi_cola);


void evaluar()
{
    ofstream out("archivo_evaluador");
    out.close();
    int nota = 0;

    escribir("archivo_evaluador",new Monstruo(3,2,1,"Pedro","ruru",false),0);
    escribir("archivo_evaluador",new Monstruo(1,2,3,"Mario","lolo",true),1);
    escribir("archivo_evaluador",new Monstruo(5,1,2,"Julieta","yoya",true),2);

    cout<<"escribir() y leer():\t\t";
    bool correcto = true;
    if( !(leer("archivo_evaluador",0)->cabezas == 3
       && leer("archivo_evaluador",1)->cabezas == 1
       && leer("archivo_evaluador",2)->cabezas == 5
       && leer("archivo_evaluador",0)->brazos == 2
       && leer("archivo_evaluador",1)->brazos == 2
       && leer("archivo_evaluador",2)->brazos == 1
       && leer("archivo_evaluador",0)->piernas == 1
       && leer("archivo_evaluador",1)->piernas == 3
       && leer("archivo_evaluador",2)->piernas == 2
       && leer("archivo_evaluador",0)->nombre == "Pedro"
       && leer("archivo_evaluador",1)->nombre == "Mario"
       && leer("archivo_evaluador",2)->nombre == "Julieta"
       && leer("archivo_evaluador",0)->apodo == "ruru"
       && leer("archivo_evaluador",1)->apodo == "lolo"
       && leer("archivo_evaluador",2)->apodo == "yoya"
       && leer("archivo_evaluador",0)->es_carnivoro == 0
       && leer("archivo_evaluador",1)->es_carnivoro == 1
       && leer("archivo_evaluador",2)->es_carnivoro == 1
          )
       )
    {
        correcto=false;
    }

    escribir("archivo_evaluador",new Monstruo(4,8,16,"Julieta","lola",true),1);
    escribir("archivo_evaluador",new Monstruo(6,3,2,"Roberto","coco",false),2);

    if( !(leer("archivo_evaluador",1)->cabezas == 4
       && leer("archivo_evaluador",2)->cabezas == 6
       && leer("archivo_evaluador",1)->brazos == 8
       && leer("archivo_evaluador",2)->brazos == 3
       && leer("archivo_evaluador",1)->piernas == 16
       && leer("archivo_evaluador",2)->piernas == 2
       && leer("archivo_evaluador",1)->nombre == "Julieta"
       && leer("archivo_evaluador",2)->nombre == "Roberto"
       && leer("archivo_evaluador",1)->apodo == "lola"
       && leer("archivo_evaluador",2)->apodo == "coco"
       && leer("archivo_evaluador",1)->es_carnivoro == true
       && leer("archivo_evaluador",2)->es_carnivoro == false
          )
       )
    {
        correcto=false;
    }

    if(correcto)
    {
        nota+=10;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"getMonstruoConMasCabezas():\t";
    if(getMonstruoConMasCabezas("archivo_evaluador")=="Roberto")
    {
        nota+=5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<endl<<"Nota: "<<nota<<"/15"<<endl;
}
