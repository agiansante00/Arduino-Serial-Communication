import processing.serial.*;
Serial myPort;



void setup(){
  printArray(Serial.list());
  myPort = new Serial(this, Serial.list()[5],9600);
}

void draw(){
  while (myPort.available() > 0) {
    String inBuffer = myPort.readString();   
    if (inBuffer != null) {
      println(inBuffer);
    }
  }
}