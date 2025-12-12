const int sensorHumedadPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorSensor = analogRead(sensorHumedadPin);

  // Convertir a porcentaje, donde 0 es mojado (100%) y 1023 es seco (0%)
  float porcentajeHumedad = 100 - ((float)valorSensor / 1023.0) * 100.0;

  porcentajeHumedad = constrain(porcentajeHumedad, 0, 100);

  Serial.print("Humedad: ");
  Serial.print(porcentajeHumedad, 2);
  Serial.println("%");

  delay(2000);
}