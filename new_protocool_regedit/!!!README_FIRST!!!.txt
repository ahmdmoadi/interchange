Please Make Notepad Fullscreen 
Or Make the font Smaller To be able to read.

Please Read EVERY SINGLE THING.


this registry file will create a 
protocool: (KAMSA://) that will launch cmd.exe,
you can change it to any application you want.
Warning: CHANGE THE REGISTRY FILE 
	 BEFORE YOU RUN IT!!!
	 BECAUSE YOU CAN'T 
	 CHANGE IT ANOTHER TIME
	  EXCEPT IN THE REGISTRY EDITOR!!! (regedit.exe)
parameters to change:
@="\"c:\\Windows\\System32\\cmd.exe\" \"%1\""
====>             path/command     <========
		  (ESCAPED)(\\)
		  (DOUBLE BACKSLASH)
you can leave it without changing so KAMSA:// will open the Command Prompt.
How To Run: 1-go to any browser. 2-go to console (F12).	 //////////////////////////
	    3-type: window.location.replace("KAMSA://"); /////// HOW TO USE ///////
Press Ok And Enjoy!					 //////////////////////////

if u want to change it after running:
go to: [HKEY_CLASSES_ROOT\KAMSA\shell\open\command] and change the first string.