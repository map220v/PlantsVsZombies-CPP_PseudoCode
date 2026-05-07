// Class: FEAST::CPrsParser::Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)::parsePosition_t


/* CopyFrom(parsePosition_t const&, bool) */

void __thiscall
FEAST::CPrsParser::
Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
::parsePosition_t::CopyFrom(parsePosition_t *this,parsePosition_t *param_1,bool param_2)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)param_1;
  *(long *)this = lVar2;
  if (param_2) {
    pvVar1 = (void *)LIB_ClientMalloc(lVar2 << 2);
    *(void **)(this + 8) = pvVar1;
    memcpy(pvVar1,*(void **)(param_1 + 8),*(long *)this << 2);
    pvVar1 = (void *)LIB_ClientMalloc(*(long *)this << 3);
    *(void **)(this + 0x10) = pvVar1;
  }
  else {
    memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),lVar2 << 2);
    pvVar1 = *(void **)(this + 0x10);
  }
  memcpy(pvVar1,*(void **)(param_1 + 0x10),*(long *)this << 3);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x18) = uVar7;
  *(undefined8 *)(this + 0x20) = uVar6;
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = uVar3;
  return;
}


/* parsePosition_t(parsePosition_t const&) */

void __thiscall
FEAST::CPrsParser::
Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
::parsePosition_t::parsePosition_t(parsePosition_t *this,parsePosition_t *param_1)

{
  CopyFrom(this,(parsePosition_t *)param_1,true);
  return;
}


/* FEAST::CPrsParser::Parse(char*, unsigned long, char*, unsigned long*, unsigned long*,
   FEAST::TDatArray<FEAST::CPrsCSTNode*>&)::parsePosition_t::TEMPNAMEPLACEHOLDERVALUE(parsePosition_t
   const&) */

parsePosition_t * __thiscall
FEAST::CPrsParser::
Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
::parsePosition_t::operator=(parsePosition_t *this,parsePosition_t *param_1)

{
  CopyFrom(this,(parsePosition_t *)param_1,false);
  return this;
}


/* ~parsePosition_t() */

void __thiscall
FEAST::CPrsParser::
Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
::parsePosition_t::~parsePosition_t(parsePosition_t *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    LIB_ClientFree(*(void **)(this + 8));
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    LIB_ClientFree(*(void **)(this + 0x10));
    return;
  }
  return;
}

