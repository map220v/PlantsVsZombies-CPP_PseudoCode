// Class: Sexy::FileWriter


/* Sexy::FileWriter::FileWriter(std::string const&) */

void __thiscall Sexy::FileWriter::FileWriter(FileWriter *this,string *param_1)

{
  char *__filename;
  FILE *pFVar1;
  
  __filename = (char *)FUN_0547429c(param_1);
  pFVar1 = fopen(__filename,"w");
  *(FILE **)this = pFVar1;
  return;
}


/* Sexy::FileWriter::Write(unsigned char const*, unsigned long) */

bool __thiscall Sexy::FileWriter::Write(FileWriter *this,uchar *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  size_t sVar3;
  
  cVar2 = std::__exception_ptr::exception_ptr::operator!((exception_ptr *)this);
  bVar1 = false;
  if (cVar2 == '\0') {
    sVar3 = fwrite(param_1,1,param_2,*(FILE **)this);
    bVar1 = sVar3 == param_2;
  }
  return bVar1;
}


/* Sexy::FileWriter::Close() */

uint __thiscall Sexy::FileWriter::Close(FileWriter *this)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = std::__exception_ptr::exception_ptr::operator!((exception_ptr *)this);
  uVar2 = (uint)bVar1;
  if (bVar1 == 0) {
    uVar2 = fclose(*(FILE **)this);
    *(undefined8 *)this = 0;
  }
  return uVar2;
}


/* Sexy::FileWriter::~FileWriter() */

uint __thiscall Sexy::FileWriter::~FileWriter(FileWriter *this)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = std::__exception_ptr::exception_ptr::operator!((exception_ptr *)this);
  uVar2 = (uint)bVar1;
  if (bVar1 == 0) {
    uVar2 = fclose(*(FILE **)this);
    *(undefined8 *)this = 0;
  }
  return uVar2;
}


/* Sexy::FileWriter::PadTo(unsigned int, unsigned int*) */

undefined1 __thiscall Sexy::FileWriter::PadTo(FileWriter *this,uint param_1,uint *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  ColourFit *this_00;
  ulong __n;
  
  cVar1 = std::__exception_ptr::exception_ptr::operator!((exception_ptr *)this);
  if (cVar1 != '\0') {
    return 0;
  }
  lVar4 = ftell(*(FILE **)this);
  uVar3 = GetAlignUp<unsigned_int>((uint)lVar4,(ulong)param_1);
  uVar3 = uVar3 - (uint)lVar4;
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar3;
  }
  if (uVar3 == 0) {
    return 1;
  }
  __n = (ulong)uVar3;
  this_00 = operator_new__(__n);
  memset(this_00,0,__n);
  uVar2 = Write(this,(uchar *)this_00,__n);
  EATextSquish::ColourFit::~ColourFit(this_00);
  return uVar2;
}

