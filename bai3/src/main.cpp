#include <Arduino.h>


void setup() {
  pinMode(LED_BUILTIN, OUTPUT); 
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Bật đèn LED
  delay(1000);                     // Chờ 1 giây
  digitalWrite(LED_BUILTIN, LOW);    // Tắt đèn LED
  delay(1000); 
}
