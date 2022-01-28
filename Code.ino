#include <avr/sleep.h>  
  
int wakePin = 2;                 // pin used for waking up  
 
  
void wakeUpNow() {  
  // execute code here after wake-up before returning to the loop() function  
  // timers and code using timers (serial.print and more...) will not work here.  
  // we don't really need to execute any special functions here, since we  
  // just want the thing to wake up  
}  
  
  
void sleepNow() {  

//Potrošnja na početku 58 mA
// CLKPR=0x01; Potrošnja 54 mA
// CLKPR=0x02; Potrošnja 51 mA
// CLKPR=0x03; Potrošnja 49 mA
// CLKPR=0x04; Potrošnja 48 mA
// SLEEP_MODE_ADC       Potrošnja 45 mA
// SLEEP_MODE_PWR_SAVE  Potrošnja 38 mA
// SLEEP_MODE_STANDBY   Potrošnja 38 mA
// SLEEP_MODE_PWR_DOWN  Potrošnja 37 mA

// Do sada ušteđeno energije 63.8%

//Uklanjanjem naredbi digitalWrite() uštadjeli smo dodatnih 5 mA odnosno potrošnja iznosi 32 mA
//Uklanjanjem ledice a Arduino-a potrošnja je pala na svega 4.6 mA
//Uklanjanjem i druge ledice potrošnja bi pala na otprilike 0.01 mA

//Što iznosi ušteda energije od 5800 puta :) 




//SLEEP_MODE_IDLE – najmanja ušteda
//SLEEP_MODE_ADC
//SLEEP_MODE_PWR_SAVE
//SLEEP_MODE_STANDBY
//SLEEP_MODE_PWR_DOWN – najveća ušteda


    set_sleep_mode(SLEEP_MODE_PWR_DOWN);   // sleep mode is set here  
    sleep_enable();          // enables the sleep bit in the mcucr register  
    attachInterrupt(0,wakeUpNow, LOW); // use interrupt 0 (pin 2) and run function  
    sleep_mode();            // here the device is actually put to sleep!!  
    // THE PROGRAM CONTINUES FROM HERE AFTER WAKING UP  
    sleep_disable();         // first thing after waking from sleep: disable sleep...  
    detachInterrupt(0);      // disables interrupt 0 on pin 2 so the wakeUpNow code will not be executed during normal running time.  
}  



void setup() {  
  
CLKPR=0x80;
CLKPR=0x04;

//pinMode(led,OUTPUT);
pinMode(wakePin, INPUT_PULLUP);  
attachInterrupt(0, wakeUpNow, LOW); // use interrupt 0 (pin 2) and run function wakeUpNow when pin 2 gets LOW  

}  
  
void loop() {  

sleepNow();     // sleep function called here  

} 
