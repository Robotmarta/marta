#define PWM_GPIO   18
#define PWM1_Ch    0
#define PWM1_Res   8
#define PWM1_Freq  1000
 
int PWM1_DutyCycle = 0;
 
void setup()
{
  ledcAttachPin(PWM_GPIO, PWM1_Ch);
  ledcSetup(PWM1_Ch, PWM1_Freq, PWM1_Res);
}
 
void loop()
{
  while(PWM1_DutyCycle < 255)
  {
    ledcWrite(PWM1_Ch, PWM1_DutyCycle++);
    delay(5);
  }
  while(PWM1_DutyCycle > 0)
  {
    ledcWrite(PWM1_Ch, PWM1_DutyCycle--);
    delay(5);
  }
}
