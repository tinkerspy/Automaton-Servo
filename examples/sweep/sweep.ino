#include <Automaton.h>
#include <Atm_servo.h>
    
Atm_servo servo;
    
void setup() {
    
  servo.begin( A2 ) // Servo on pin A2 (16)
    .step( 1, 10 )
    .trigger( Atm_servo::EVT_SWEEP )
    .onFinish( servo, Atm_servo::EVT_SWEEP );

}
    
void loop() {
  automaton.run();
}

