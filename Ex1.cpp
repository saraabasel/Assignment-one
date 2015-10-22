
class Bankaccount  { 

private :
string  depositorname;
string  accountnumber;
int         balance; 

public:
 Bankaccount ( string name , int num , int bal) 
{ depositername = name;
accountnumber= num;
balance = bal; 
} 
 void  setname ( string name ) 
 { depositername = name ; } 
  void setnumber ( int num ) 
  { acountnumber = num ;}
  void setbalance (int bal)
  { balance = bal ; }
 string  getname () { 
 
return depositorname; 
 } 
 
string  getnumber () 


{    rerturn accountnumber; 
}
 int        getbalance () {

return balance; }

void     deposit ( int x) { 
if (x >0 ) { 

balance = balance + x; } else 
cout << "Error" ;
}
void     withdraw ( int y) 
{ if ( y < balance ) {
balance  = balance -y
} 
else 
cout << " Error " ;
}
};
