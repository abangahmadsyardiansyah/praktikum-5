void setup()
{
  Serial.begin(115200);
}
void loop()
{
  Serial.write(0x41);
  Serial.write(0x42);
  Serial.write(0x43);
  Serial.write(0x44);
  Serial.write(0x45);
  delay (2000);
}
