// Ky aplikacion llogarit dhe afishon termat e serise se Fibonacit

import java.util.Scanner;

public class Fibonaci {

	 static int n1=0,n2=1,n3=0;    
	 static void fibonac(int nr_termave){    
	    if(nr_termave<8){    
	         n3 = n1 + n2;    
	         n1 = n2;    
	         n2 = n3;    
	         System.out.print(" "+n3);   
	         fibonac(nr_termave+1);    
	     }    
	 }  
	 
	 public static void main(String args[]){    
	  int nr_termave=0;    
	  System.out.print(n1+" "+n2);//shfaqen 0 dhe 1    
	  fibonac(nr_termave);//n-2 sepse 2 termat e pare jane afishuar tashme   
	 }  
}

// Llogaritja e Faktorialit me metode rekursive
public class FaktorialRekursion {
	static int faktorial(int n){      
        if (n == 1)      
          return 1;      
        else      
          return(n * faktorial(n-1));      
	}      

	public static void main(String[] args) {  
	System.out.println("Faktoriali i 5 eshte: "+faktorial(5));  
	}  
}


// Termat e Fibonacit me Rekursion
public class FibonaciRekursion {
	static int n1=0,n2=1,n3=0;    
	 static void FiboRekursion(int nr_termave){    
	    if(nr_termave>0){    
	         n3 = n1 + n2;    
	         n1 = n2;    
	         n2 = n3;    
	         System.out.print(" "+n3);   
	         FiboRekursion(nr_termave-1);    
	     }    
	 }    
	 public static void main(String args[]){    
	  int nr_termave=10;    
	  System.out.print(n1+" "+n2);//afishohen dy termat e pare 0 dhe 1    
	  FiboRekursion(nr_termave-2);//n-2 sepse 2 termat e pare tashme jane afishuar qysh me pare   
	 }
}
