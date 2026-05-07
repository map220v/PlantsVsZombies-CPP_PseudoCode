// Class: FEAST::CPrsParser::Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)::parsePosition_t::parsePosition_t(unsigned_long,int*,FEAST::CPrsCSTNode**,FEAST


/* FEAST::CPrsParser::Parse(char*, unsigned long, char*, unsigned long*, unsigned long*,
   FEAST::TDatArray<FEAST::CPrsCSTNode*>&)::parsePosition_t::parsePosition_t(unsigned long, int*,
   FEAST::CPrsCSTNode**, FEAST::CPrsParseStateProd*, char*, unsigned long, unsigned long) */

void FEAST::CPrsParser::Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::
     TDatArray<FEAST::CPrsCSTNode*>&)::parsePosition_t::parsePosition_t(unsigned_long,int*,FEAST::
     CPrsCSTNode**,FEAST::CPrsParseStateProd__char__unsigned_long_unsigned_long_
               (long *param_1,long param_2,void *param_3,void *param_4,long param_5,long param_6)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = (void *)LIB_ClientMalloc(param_2 << 2);
  param_1[1] = (long)pvVar1;
  if (param_3 != (void *)0x0) {
    memcpy(pvVar1,param_3,*param_1 << 2);
  }
  pvVar1 = (void *)LIB_ClientMalloc(*param_1 << 3);
  param_1[2] = (long)pvVar1;
  if (param_4 != (void *)0x0) {
    memcpy(pvVar1,param_4,*param_1 << 3);
  }
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}

