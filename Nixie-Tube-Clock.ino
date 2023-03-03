void setup()
{
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
}

void loop()
{
    for(int number = 0; number<10; number++)
    {
        digitalWrite(2, number & 0x01);
        digitalWrite(3, (number >> 1) & 0x01);
        digitalWrite(4, (number >> 2) & 0x01);
        digitalWrite(5, (number >> 3) & 0x01);
        delay(1000);
    }
}