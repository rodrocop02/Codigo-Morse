void setup() {
  Serial.begin(9600);
  const int led = 4;
  const int buzzer = 5;
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  while(Serial.available() > 0){
    String oracion = Serial.readStringUntil("\n");
    
  for (int i=0 ; i <= oracion.length()-3 ; i++){
      String letra = oracion.substring(i,i+1);
      Serial.println(letra);
      morseCode(letra);
      delay(100);
    }
  
  }

}

void morseCode(String s){

  const int buzzer = 5;
  const int punto = 400;
  const int raya = 1000;
  const int silencio = 300;
  
  if (s == " "){
    delay(3*raya);
  }  


  else if (s == "a"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "b"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "c"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "d"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "e"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "f"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "g"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "h"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "i"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "j"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "k"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "l"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "m"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "n"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    delay(3*punto);
  }

  else if(s == "ñ"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "o"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "p"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "q"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "r"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "s"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "t"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "u"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "v"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "w"){
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "x"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "y"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }

  else if(s == "z"){
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(raya);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(silencio);
    digitalWrite(buzzer, HIGH);
    delay(punto);
    digitalWrite(buzzer,LOW);
    delay(3*punto);
  }
}
