
/* tt_text.h */


/* Encode normal human readable to DTMF representation. */

int tt_text_to_multipress (char *text, int quiet, char *buttons); 

int tt_text_to_two_key (char *text, int quiet, char *buttons); 

int tt_text_to_call10 (char *text, int quiet, char *buttons) ;

int tt_text_to_mhead (char *text, int quiet, char *buttons) ;

int tt_text_to_satsq (char *text, int quiet, char *buttons) ;


/* Decode DTMF to normal human readable form. */

int tt_multipress_to_text (char *buttons, int quiet, char *text); 

int tt_two_key_to_text (char *buttons, int quiet, char *text);

int tt_call10_to_text (char *buttons, int quiet, char *text);

int tt_mhead_to_text (char *buttons, int quiet, char *text);

int tt_satsq_to_text (char *buttons, int quiet, char *text);


/* end tt_text.h */