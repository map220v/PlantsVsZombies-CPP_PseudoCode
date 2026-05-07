// Class: Sexy::RtSerial::JsonParser::InitGrammar(FEAST::IPrsParser*)::Local::BlockCommentIntercept(FEAST::ILexLexer*,FEAST


/* Sexy::RtSerial::JsonParser::InitGrammar(FEAST::IPrsParser*)::Local::BlockCommentIntercept(FEAST::ILexLexer*,
   FEAST::SLexToken*, char*, int) */

undefined1
Sexy::RtSerial::JsonParser::InitGrammar(FEAST::IPrsParser*)::Local::BlockCommentIntercept(FEAST::
ILexLexer*,FEAST::SLexToken__char__int_(long *param_1,undefined8 *param_2,char *param_3,int param_4)

{
  char cVar1;
  
  do {
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1,1);
    if (cVar1 == '\0') {
      strncpy(param_3,"Found block comment without terminating \"*/\"",(long)param_4);
      return 0;
    }
  } while ((cVar1 != '*') || (cVar1 = (**(code **)(*param_1 + 0x40))(param_1,0), cVar1 != '/'));
  (**(code **)(*param_1 + 0x40))(param_1,1);
  *param_2 = 0;
  return 1;
}

