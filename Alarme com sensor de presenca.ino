ALARME COM SENSOR DE PRESENÇA
@author Milênio Rocha

  DECLARA PINOS
int pinoSensor = 2;
int pinoLed = 5;
int pinoBuzzer = 4;

void setup(){
  pinMode(pinoLed, OUTPUT);     DECLARA PINO DO LED COMO SAIDA
  pinMode(pinoBuzzer, OUTPUT);   DECLARA PINO DO BUZZER COMO SAIDA
  pinMode(pinoSensor, INPUT);  DECLARA PINO DO SENSOR COMO ENTRADA
  Serial.begin(9600);
}
void loop(){
 if(digitalRead(pinoSensor) == HIGH){  SE O SENSOR DETECTAR MOVIMENTO
    digitalWrite(pinoLed, HIGH);       LIGA O LED
    digitalWrite(pinoBuzzer, HIGH);    LIGA BUZZER
   Serial.println(digitalRead(2));
 }else{  SENO
  digitalWrite(pinoLed, LOW);          DESLIGA O LED
  digitalWrite(pinoBuzzer, LOW);       DESLIGA O BUZZER
   Serial.println(digitalRead(2));
 }
}
