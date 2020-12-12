//Setup pins
const int baudPin = A1;

//Setup roomba opcodes
//https://www.irobotweb.com/-/media/MainSite/PDFs/About/STEM/Create/iRobot_Roomba_600_Open_Interface_Spec.pdf?la=en
const int startOpCode = 128;
const int cleanOpCode = 135;
const int stopOpCode = 173;
const int powerOpCode = 133;
const int safeModeOpcode = 131;
const int fullModeOpcode = 132;


void setup() {
    pinMode(baudPin, OUTPUT);
    Serial1.begin(115200);
}

void loop() {
    digitalWrite(baudPin, LOW);
    delay(500);
    digitalWrite(baudPin, HIGH);
    delay(500);
    digitalWrite(baudPin, LOW);
    
    Serial1.write(startOpCode);
    Serial1.write(safeModeOpcode);
    Serial1.write(cleanOpCode);
    
    delay(4000);    

    
    Serial1.write(powerOpCode);
    Serial1.write(stopOpCode);
    
    exit(0);
}
