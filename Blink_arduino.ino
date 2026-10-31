const byte LED_PIN = 0; // Пин PB0 (ножка 5 микроконтроллера)

void setup() {
  pinMode(LED_PIN, OUTPUT); // Настраиваем пин как выход
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Включаем светодиод (подаем 5В)
  delay(500);                  // Ждем полсекунды
  digitalWrite(LED_PIN, LOW);  // Выключаем светодиод (подаем 0В)
  delay(500);                  // Ждем полсекунды
}
