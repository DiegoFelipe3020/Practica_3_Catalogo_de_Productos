/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Catálogo de Productos.
   Dev: Diego Alejandro Felipe Chis
   Fecha: 19 de abril
*/
#define LedR 8
#define LedO 9
#define LedY 10
#define LedG 11
#define LedL 13
int PushL = 6;
int PushR= 7;
int Seleccionar = 1;

struct datos_productos {
  char nombres_productos[100];
  byte cantidad;

};
datos_productos producto1 = {"Doritos", 50};
datos_productos producto2 = {"M&M'S", 25};
datos_productos producto3 = {"Coca-cola", 45};
datos_productos producto4 = {"Takis de aguacate", 35};

void setup(){
  pinMode(LedR, OUTPUT);
  pinMode(LedO, OUTPUT);
  pinMode(LedY, OUTPUT);
  pinMode(LedG, OUTPUT);
  pinMode(PushL, INPUT);
  pinMode(PushR, INPUT);
  pinMode(LedL, OUTPUT);
  Serial.begin(9600);
  Serial.println("Bienvenido a la maquina expendedora");

}

void loop() {
  if(digitalRead(PushL) == HIGH){
    Seleccionar--;
    digitalWrite(LedL, HIGH);
    if(Seleccionar < 1){
      Seleccionar = 4;
    }
      if(Seleccionar == 1){
        Serial.println("------------------------------------------");
        Serial.println("Datos del Producto 1:");
        Serial.print("Nombre:");
        Serial.println(producto1.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(producto1.cantidad);
        digitalWrite(LedR, HIGH);
        digitalWrite(LedO, LOW);
        digitalWrite(LedY, LOW);
        digitalWrite(LedG, LOW);
        Serial.println("------------------------------------------");

      }
      if(Seleccionar == 2){
        Serial.println("------------------------------------------");
        Serial.println("Datos del Producto 2:");
        Serial.print("Nombre:");
        Serial.println(producto2.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(producto2.cantidad);
        digitalWrite(LedR, LOW);
        digitalWrite(LedO, HIGH);
        digitalWrite(LedY, LOW);
        digitalWrite(LedG, LOW);
        Serial.println("------------------------------------------");

      }
      if(Seleccionar == 3){
        Serial.println("------------------------------------------");
        Serial.println("Datos del Producto 3:");
        Serial.print("Nombre:");
        Serial.println(producto3.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(producto3.cantidad);
        digitalWrite(LedR, LOW);
        digitalWrite(LedO, LOW);
        digitalWrite(LedY, HIGH);
        digitalWrite(LedG, LOW);
        Serial.println("------------------------------------------");

      }
      if(Seleccionar == 4){
        Serial.println("------------------------------------------");
        Serial.println("Datos del Producto 4:");
        Serial.print("Nombre:");
        Serial.println(producto4.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(producto4.cantidad);
        digitalWrite(LedR, LOW);
        digitalWrite(LedO, LOW);
        digitalWrite(LedY, LOW);
        digitalWrite(LedG, HIGH);
        Serial.println("------------------------------------------");
      }
    else{
      digitalWrite(LedL, LOW);
    }
    
  }
  if(digitalRead(PushR) == HIGH){
    Seleccionar++;
    digitalWrite(LedL, HIGH);
    if(Seleccionar > 4){
      Seleccionar = 1;
    }
      if(Seleccionar == 1){
        Serial.println("------------------------------------------");
        Serial.println("Datos del Producto 1:");
        Serial.print("Nombre:");
        Serial.println(producto1.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(producto1.cantidad);
        digitalWrite(LedR, HIGH);
        digitalWrite(LedO, LOW);
        digitalWrite(LedY, LOW);
        digitalWrite(LedG, LOW);
        Serial.println("------------------------------------------");

      }
      if(Seleccionar == 2){
        Serial.println("------------------------------------------");
        Serial.println("Datos del Producto 2:");
        Serial.print("Nombre:");
        Serial.println(producto2.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(producto2.cantidad);
        digitalWrite(LedR, LOW);
        digitalWrite(LedO, HIGH);
        digitalWrite(LedY, LOW);
        digitalWrite(LedG, LOW);
        Serial.println("------------------------------------------");

      }
      if(Seleccionar == 3){
        Serial.println("------------------------------------------");
        Serial.println("Datos del Producto 3:");
        Serial.print("Nombre:");
        Serial.println(producto3.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(producto3.cantidad);
        digitalWrite(LedR, LOW);
        digitalWrite(LedO, LOW);
        digitalWrite(LedY, HIGH);
        digitalWrite(LedG, LOW);
        Serial.println("------------------------------------------");

      }
      if(Seleccionar == 4){
        Serial.println("------------------------------------------");
        Serial.println("Datos del Producto 4:");
        Serial.print("Nombre:");
        Serial.println(producto4.nombres_productos);
        Serial.print("Cantidad disponible:");
        Serial.println(producto4.cantidad);
        digitalWrite(LedR, LOW);
        digitalWrite(LedO, LOW);
        digitalWrite(LedY, LOW);
        digitalWrite(LedG, HIGH);
        Serial.println("------------------------------------------");
      }
    delay(1000);
  }
  else{
    digitalWrite(LedL, LOW);
  }
}