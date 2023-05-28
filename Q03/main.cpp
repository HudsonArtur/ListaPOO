int main(void){
  Color a(255,0,0), b(0,120, 121), c, d;
  c = a+b;
  d = c-a;
  cout << d << "\n";
  if(d == b){
  cout << "Fail! Dna positivo: b é pai de c!\n";
  }
  else{
  cout << "Ufa! que alivio!";
  }
}
