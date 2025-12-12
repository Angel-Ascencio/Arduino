const int ldrPin = A0;

// Valor de la resistencia
const int resistenciaFija = 10000; // Resistencia de 10k Ohmios

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lecturaLDRCruda = analogRead(ldrPin);

  // Invierte y mapea la lectura cruda (0-1023) a una escala de 0 a 100
  int intensidadLuzPorcentaje = map(lecturaLDRCruda, 0, 1023, 100, 0);

  Serial.print("Lectura LDR Cruda (0-1023): ");
  Serial.println(lecturaLDRCruda);

  Serial.print("Intensidad de Luz: ");
  Serial.print(intensidadLuzPorcentaje);
  Serial.println("%");

  Serial.println("-------------------------------------------------");
  delay(1000);
}