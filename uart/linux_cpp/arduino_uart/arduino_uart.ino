
unsigned long last_millis, current_millis;
char buf;
char set_flag=0;
int chk =0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  last_millis = millis();
  current_millis = millis();

}

void loop() {
  // put your main code here, to run repeatedly:
    current_millis = millis();
    
    // READ DATA
    if (current_millis > last_millis +2000) {
      last_millis = current_millis;
    }
 
    if(Serial.available()) {
        buf = Serial.read();
        if (buf == 'R')
          set_flag = 1;
        buf = '\0';
    }
 
    if(set_flag ==1){
      Serial.print("DHT21 \t");

      // DISPLAY DATA
      Serial.print("DHT.humidity\n");
      set_flag =0;
    }
    
    //delay(2000);

}
