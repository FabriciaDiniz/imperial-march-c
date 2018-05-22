#include<stdio.h>
#include<windows.h>

main()
{
	int c = 261,
		f = 349,
		gS = 415,
		a = 440,
		aS = 455,
		b = 466,
		cH = 523,
		cSH = 554,
		dH = 587,
		dSH = 622,
		eH = 659,
		fH = 698,
		fSH = 740,
		gH = 784,
		gSH = 830,
		aH =  880;

	Beep(a, 500);
	Beep(a, 500);    
	Beep(a, 500);
	Beep(f, 350);
	Beep(cH, 150);
	
	Beep(a, 500);
	Beep(f, 350);
	Beep(cH, 150);
	Beep(a, 1000);
	
	Beep(eH, 500);
	Beep(eH, 500);
	Beep(eH, 500);    
	Beep(fH, 350);
	Beep(cH, 150);
	
	Beep(gS, 500);
	Beep(f, 350);
	Beep(cH, 150);
	Beep(a, 1000);
	
	Beep(aH, 500);
	Beep(a, 350);
	Beep(a, 150);
	Beep(aH, 500);
	Beep(gSH, 250);
	Beep(gH, 250);
	
	Beep(fSH, 125);
	Beep(fH, 125);    
	Beep(fSH, 250);
	Beep(0,250);
	Beep(aS, 250);    
	Beep(dSH, 500);  
	Beep(dH, 250);  
	Beep(cSH, 250);  
	
	Beep(cH, 125);  
	Beep(b, 125);  
	Beep(cH, 250);      
	Beep(0,250);
	Beep(f, 125);  
	Beep(gS, 500);  
	Beep(f, 375);  
	Beep(a, 125);
	Beep(cH, 500);
	Beep(a, 375);  
	Beep(cH, 125);
	Beep(eH, 1000);
	
	Beep(aH, 500);
	Beep(a, 350);
	Beep(a, 150);
	Beep(aH, 500);
	Beep(gSH, 250);
	Beep(gH, 250);
	
	Beep(fSH, 125);
	Beep(fH, 125);    
	Beep(fSH, 250);
	Beep(0,250);
	Beep(aS, 250);    
	Beep(dSH, 500);  
	Beep(dH, 250);  
	Beep(cSH, 250);  
	
	Beep(cH, 125);  
	Beep(b, 125);  
	Beep(cH, 250);      
	Beep(0,250);
	Beep(f, 250);  
	Beep(gS, 500);  
	Beep(f, 375);  
	Beep(cH, 125);
	
	Beep(a, 500);            
	Beep(f, 375);            
	Beep(c, 125);            
	Beep(a, 1000);
}
