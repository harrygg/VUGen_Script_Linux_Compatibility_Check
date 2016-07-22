Action()
{
	web_set_sockets_option("INITIAL_AUTH", "NTLM");
		
	web_set_certificate_ex("CertIndex=1", LAST);
	
	ajax_tabs ("mystep",
		DESCRIPTION,
	  	"Framework=atlas",
	  	"ID=mytab",
	  	ACTION,
	  	"UserAction=Select",
	  	"Tab=Email",
  	LAST);
		
	return 0;
}
