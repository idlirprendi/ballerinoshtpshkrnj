
int outi= 9; 
int butn= 2;
int zed=100;
bool neMaks = false;
void setup(){
  pinMode (outi, OUTPUT);
  pinMode (butn, INPUT);}
void loop(){
  int vlera= analogRead(A0);
  int vl1= map(vlera, 0, 1023, 0, 255);
  if (digitalRead(butn)==HIGH){
     if (!neMaks){
      for(int i=0; i<=vl1; i++){
        {analogWrite(outi, i);
         delay(zed);
         if (i==vl1){
           neMaks=true;}}}}
      else{
        analogWrite(outi, vl1);}}
  else{
    if (neMaks){
      for(int j=vl1; j>=0; j--){
        {analogWrite(outi, j);
         delay(zed);
         if (j==0){           
           neMaks=false;}}}}
            else{
        analogWrite(outi, 0);}}
           }
