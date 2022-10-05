/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: saulg
 *
 * Created on 1 de octubre de 2022, 15:57
 */

#include <cstdlib>
#include <iostream>
using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    
    int selec=0;
    double voltaje=0;
    double resistencia=0;
    double intensidad=0;
    double resultado=0;
    int ct=0;
    int cv=0;
    int acum=0;
    int selec2=0;
    int v1=0;
    int selec3=0;
    int selec4=0;
    double potencia;
    printf("Que ley quieres utilizar?\n"); 
    printf("1.- Ley de OHM \n");
    printf("2.- Ley de Kirchoff\n");
    printf("3.- Ley de WATT\n"); 
        cin>>selec;
        switch (selec)
        { 
            case 1: 
                printf("1.- Ley de OHM\n");
                printf("Si no cuentas con la informacion ingresa el valor 0 para calcular\n");
                cout <<"Ingresa Voltaje\n";
                        cin>>voltaje;
                        printf("Ingresa la resistencia\n");
                        cin>>resistencia;
                        cout <<"Ingresa Intensidad\n";
                        cin>>intensidad;
                         
                        if(voltaje==0)
                        {
                        printf("Se calculara el voltaje\n");
                        voltaje=resistencia*intensidad;
                         printf("El voltaje es... %f",voltaje);
                         printf("v\n");
                        }
      
                        if(resistencia==0)
                        {
                        printf("Se calculara la resistencia\n");
                        resistencia=voltaje/intensidad;
                         printf("La resistencia es... %f",resistencia);
                         printf("Ω\n");
                        }
                        
                        if(intensidad==0)
                        {
                        printf("Se calculara la intensidad\n");
                        intensidad=voltaje/resistencia;
                         printf("La intensidad es... %f\n",intensidad);
                        }
                break;
                
            case 2:
                printf("2.- Ley de Kirchoff\n");
                printf("1 LEY O 2 LEY\n");
                cin>>selec2;
                
                
                switch(selec2)
                {
                    case 1:
                        printf("1ra ley\n");
                        printf("La corriente que entra es la misma que sale\n");
                        printf("para encontar el valor de i cuantas corrientes entran?\n");
                        cin>>ct;
                        for(int i =1; i <=ct;i++)
                        {   
                           printf("Dame el valor \n"); 
                           cin>>cv;
                           acum=acum+cv;
                           
                        }
                        
                        v1=acum*(-1);
                        printf("El valor de la incogita i=... %i\n",v1);
                        break;

                        case 2:
                     printf("2ra ley\n");
                     printf("La suma algebraica de los voltajes alrededor de cualquier trayectoria cerrada es igual a 0\n");
                     
                    break;
                    
            }
                break;
            case 3:
                 printf("Ley de watt\n");
                     printf("Cual de las 3 formulas quieres utilizar?\n");
                     printf("1-P=V*I\n");
                     printf("2-P=R*(I*I)\n");
                     printf("3-p=v*x\n");
                     cin>>selec3;
                     switch (selec3)
                     
                     {
                         case 1: 
                          printf("Voltaje y corriente 1\n");
                        printf("Si no cuentas con la informacion ingresa el valor 0 para calcular\n");
                        cout <<"Ingresa Potencia\n";
                        cin>>potencia;
                        printf("Ingresa voltaje\n");
                        cin>>voltaje;
                        cout <<"Ingresa Intensidad\n";
                        cin>>intensidad;
                        if(potencia==0)
                        {
                        printf("Se calculara la potencia\n");
                        potencia=voltaje*intensidad;
                         printf("El la potencia es... %f\n",potencia);
                        }
      
                        if(voltaje==0)
                        {
                        printf("Se calculara el voltaje\n");
                        voltaje=potencia/intensidad;
                         printf("El voltaje es... %f\n",voltaje);
                        }
                        
                        if(intensidad==0)
                        {
                        printf("Se calculara la intensidad\n");
                        intensidad=potencia/voltaje;
                         printf("La intensidad es... %f\n",intensidad);
                        }
                     break;
                     
                     case 2: 
                          printf("Resistencia y corriente 2\n");
                        printf("Si no cuentas con la informacion ingresa el valor 0 para calcular\n");
                        cout <<"Ingresa Potencia\n";
                        cin>>potencia;
                        printf("Ingresa resistencia\n");
                        cin>>resistencia;
                        cout <<"Ingresa Intensidad\n";
                        cin>>intensidad;
                        if(potencia==0)
                        {
                        printf("Se calculara la potencia\n");
                        potencia=resistencia*(intensidad*intensidad);
                         printf("El la potencia es... %f\n",potencia);
                        }
      
                        if(resistencia==0)
                        {
                        printf("Se calculara la resistencia\n");
                        resistencia=potencia/(intensidad*intensidad);
                         printf("El voltaje es... %f\n",resistencia);
                        }
                        
                        if(intensidad==0)
                        {
                        printf("Se calculara la intensidad al cuadrado \n");
                        intensidad=potencia/resistencia;
                        
                         printf("La intensidad es... %f\n",intensidad);
                        }
                     break;
                     case 3: 
                          printf("Voltaje y resistencia electrica 3\n");
                        printf("Si no cuentas con la informacion ingresa el valor 0 para calcular\n");
                        cout <<"Ingresa Potencia\n";
                        cin>>potencia;
                        printf("Ingresa voltaje\n");
                        cin>>voltaje;
                        cout <<"Ingresa Resistencia\n";
                        cin>>resistencia;
                        if(potencia==0)
                        {
                        printf("Se calculara la potencia\n");
                        potencia=(voltaje*voltaje)/resistencia;
                         printf("El la potencia es... %f\n",potencia);
                        }
      
                        if(voltaje==0)
                        {
                        printf("Se calculara el voltaje al cuadrado\n");
                        voltaje=potencia/resistencia;
                         printf("El voltaje es... %f\n",voltaje);
                        }
                        
                        if(resistencia==0)
                        {
                        printf("Se calculara la resistencia\n");
                        resistencia=potencia/(voltaje*voltaje);
                         printf("La intensidad es... %f\n",intensidad);
                        }
                     break;
                     
                   
                     
                     
                     
                     
                     
                    }         
           break;
        
        
        
        }
        
    return 0;
}

