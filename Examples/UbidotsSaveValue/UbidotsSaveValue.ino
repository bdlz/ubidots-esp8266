#include "UbidotsMicroESP8266.h"
#define ID  "Your_variable_ID_here"  // Put here your Ubidots variable ID
#define TOKEN  "Your_token_here"  // Put here your Ubidots TOKEN


Ubidots client(TOKEN);

void setup(){
    Serial.begin(115200);
    delay(10);
    client.wifiConnection(WIFISSID, PASSWORD);
}
void loop(){
    float value = analogRead(A0);
    client.add(ID, value);
    client.sendAll();
}
