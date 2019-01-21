/*********************************************Capitulo 4 - Entradas Analogas ******************************************************
*                                                                                                                                 *
*     En este cuarto capitulo aprenderemos a hacer a utilizar los pines Analogos de nuestra placa arduino Uno, la cual            *
*  tiene disponibles 6 pines analogos. Es importante saber que los pines analogos no necesitan declararse en el void setup        *
*  (Pines analogos A0,A1,A2,A3,A4,A5).                                                                                            *                                                                       *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -5 LED                                                                                                                         *
*  -5 Resistencia de 1k ohm (Si no tienen de 1k pueden variar el valor entre 100 ohm a 2.2 K omh)                                 *
*  -Protoboard                                                                                                                    *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/   

int led = 3; // Declaramos nuestra variable que usaremos para el led
int led2 = 4;// Declaramos nuestra variable que usaremos para el led2
int led3 = 5;// Declaramos nuestra variable que usaremos para el led3
int led4 = 6;// Declaramos nuestra variable que usaremos para el led4
int led5 = 7;// Declaramos nuestra variable que usaremos para el led5

int potenciometro = 0;  //Declaramos nuestra variable que usaremos para el potenciometro
int valor;  //Declaramos la variable que almacenara el valor del potenciometro

void setup(){
  pinMode(led,OUTPUT); //Declaramos como pin de salida la variable led
  pinMode(led2,OUTPUT); //Declaramos como pin de salida la variable led2
  pinMode(led3,OUTPUT); //Declaramos como pin de salida la variable led3
  pinMode(led4,OUTPUT); //Declaramos como pin de salida la variable led4
  pinMode(led5,OUTPUT); //Declaramos como pin de salida la variable led5
  }
void loop(){
valor  = analogRead(potenciometro)/4;// Almacenamos el valor de lectura del potenciometro
//Lo dividimos en 4 ya que la funcion analogRead permite un rango de 0-255 (1024/4 = 256)

//Comparamos nuestra variable valor para ir encendiendo nuestros ledes o apagandolos.

//Si Valor es igual a 0 entonces todos los ledes se apagan 
if(valor == 0){
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  }
//Si valor es mayor a 0 se enciende el primer led 
if(valor > 0){
  digitalWrite(led,HIGH); //encendemos el led 
  }
//De lo contrario se apagara 
  else{
   digitalWrite(led,LOW); //Apagamos el led
    }
 //Si valor alcanzo la cantidad de 32 entonces   
if(valor > 32){
  digitalWrite(led2,HIGH);  //encendemos el led2 
  }  
 //De lo contrario 
  else{
   digitalWrite(led2,LOW);  //Apagamos el led2
    }
    
//Si valor alcanzo la cantidad de 100 entonces   
if(valor > 100){
  digitalWrite(led3,HIGH); //encendemos el led3
  }
  else{
   digitalWrite(led3,LOW); //Apagamos el led3
    }
 
 //Si valor alcanzo la cantidad de 150 entonces      
 if(valor > 150){
  digitalWrite(led4,HIGH);  //encendemos el led4
  }
  else{
   digitalWrite(led4,LOW); //Apagamos el led4
    }

 //Si valor alcanzo la cantidad de 200 entonces   
if(valor > 200){
  digitalWrite(led5,HIGH);  //encendemos el led5
  }
  else{
   digitalWrite(led5,LOW);  //Apagamos el led5
    }
//Damos un tiempo de 200 milisegundos
delay(200);
}
