#include <Arduino.h>
#define LED 2


// funcion que se ejecuta una vez al iniciar el programa 
void setup() {
 Serial.begin(115200);
 pinMode(LED, OUTPUT); // configuramos l pin2 con salida 
 digitalWrite (LED, LOW)

}

//esta funcion es similar al main de java y de lenguaje c, con 
//la esepcion de que loop es un bucle infinito 

void loop() {
  Serial.println("Hola mundo!");
  delay(3000); //retardo bloqueante 
  digitalWrite(LED, HIGH);
  delay(3000);
  digitalWrite(LED, LOW);


}


