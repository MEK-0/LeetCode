/*
Given two positive integers a and b, return the number of common factors of a and b.

An integer x is a common factor of a and b if x divides both a and b.
*/

int commonFactors(int a, int b) {
    int counter=0;
     int sayac=0;
    if(a<b){
       for(counter=1;counter<=a;counter++){
         if(a%counter==0 && b%counter==0)
         {
            sayac=sayac+1;
         }
       }
    }
    else
    {
        for(counter=1;counter<=b;counter++){
         if(a%counter==0 && b%counter==0)
         {
            sayac=sayac+1;
         }
       }
      
    }
    return sayac;
}
