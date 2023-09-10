#include "info.h"


String test111;



void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
//Serial.println("test");
//test111=BASE_URL+OW_API_KEY+"&zip="+ZIP;
//Serial.println(BASE_URL+OW_API_KEY);
String burl=BASE_URL;
String Owapkey=OW_API_KEY;
String zip1=ZIP;

Serial.print(burl+"&zip="+zip1+"us&appid="+Owapkey);
}
