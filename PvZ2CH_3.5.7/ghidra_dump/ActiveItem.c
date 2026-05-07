// Class: ActiveItem


/* ActiveItem::~ActiveItem() */

void __thiscall ActiveItem::~ActiveItem(ActiveItem *this)

{
  *(undefined ***)this = &PTR_GetClass_069748d0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x60));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  nop();
  return;
}


/* ActiveItem::~ActiveItem() */

void __thiscall ActiveItem::~ActiveItem(ActiveItem *this)

{
  ~ActiveItem(this);
  AK::FreeHook(this);
  return;
}


/* ActiveItem::ActiveItem(ActiveItem const&) */

void __thiscall ActiveItem::ActiveItem(ActiveItem *this,ActiveItem *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &PTR_GetClass_069748d0;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  this[0x18] = param_1[0x18];
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x48) = uVar2;
  *(undefined8 *)(this + 0x50) = uVar1;
  std::function<void(ActiveItem*)>::function
            ((function<void(ActiveItem*)> *)(this + 0x60),(function *)(param_1 + 0x60));
  return;
}


/* ActiveItem::TEMPNAMEPLACEHOLDERVALUE(ActiveItem&&) */

ActiveItem * __thiscall ActiveItem::operator=(ActiveItem *this,ActiveItem *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  FUN_05474278(this + 0x10,param_1 + 0x10);
  this[0x18] = param_1[0x18];
  FUN_05474278(this + 0x20,param_1 + 0x20);
  FUN_05474278(this + 0x28,param_1 + 0x28);
  FUN_05474278(this + 0x30,param_1 + 0x30);
  FUN_05474278(this + 0x38,param_1 + 0x38);
  FUN_05474278(this + 0x40,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x48) = uVar2;
  *(undefined8 *)(this + 0x50) = uVar1;
  std::function<void(Zombie*)>::operator=
            ((function<void(Zombie*)> *)(this + 0x60),(function *)(param_1 + 0x60));
  return this;
}


/* ActiveItem::ActiveItem() */

void __thiscall ActiveItem::ActiveItem(ActiveItem *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetClass_069748d0;
  Set8BytesTo0(this + 0x10);
  this[0x18] = (ActiveItem)0x0;
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 1;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x60));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveItem::StaticClassInit() */

void ActiveItem::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ActiveItem");
    (*pcVar2)(plVar1,asStack_10,FUN_04b9c660,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveItem::StaticGetClass() */

long * ActiveItem::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ActiveItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActiveItem::GetClass() const */

long * ActiveItem::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ActiveItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveItem::RefreshDate() */

void __thiscall ActiveItem::RefreshDate(ActiveItem *this)

{
  ActiveItem *pAVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  string asStack_48 [8];
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0547419c((string *)(this + 0x20));
  if (cVar2 == '\0') {
    pAVar1 = this + 0x30;
    cVar2 = FUN_0547419c(pAVar1);
    if ((cVar2 == '\0') && (lVar5 = FUN_05474178(pAVar1), lVar5 == 0xe)) {
      local_40.tm_zone = (char *)0x0;
      local_40.tm_sec = 0;
      local_40.tm_min = 0;
      local_40.tm_hour = 0;
      local_40.tm_mday = 0;
      local_40.tm_mon = 0;
      local_40.tm_year = 0;
      local_40.tm_wday = 0;
      local_40.tm_yday = 0;
      local_40.tm_isdst = 0;
      local_40._36_4_ = 0;
      local_40.tm_gmtoff = 0;
      FUN_05475ffc(asStack_48,pAVar1,0,8);
      iVar3 = StringHelper::ToInt(asStack_48);
      std::string::~string(asStack_48);
      FUN_05475ffc(asStack_48,pAVar1,8,0xffffffffffffffff);
      iVar4 = StringHelper::ToInt(asStack_48);
      std::string::~string(asStack_48);
      local_40.tm_mday = iVar3 % 100;
      local_40.tm_hour = iVar4 / 10000;
      local_40.tm_year = iVar3 / 10000 + -0x76c;
      local_40.tm_mon = (iVar3 % 10000) / 100 + -1;
      local_40.tm_min = (iVar4 % 10000) / 100;
      local_40.tm_sec = iVar4 % 100;
    }
    else {
      iVar3 = StringHelper::ToInt((string *)(this + 0x20));
      local_40.tm_wday = 0;
      local_40.tm_yday = 0;
      local_40.tm_sec = 0;
      local_40.tm_min = 0;
      local_40.tm_isdst = 0;
      local_40._36_4_ = 0;
      local_40.tm_gmtoff = 0;
      local_40._8_8_ = (ulong)(uint)(iVar3 % 100) << 0x20;
      local_40.tm_zone = (char *)0x0;
      local_40.tm_year = iVar3 / 10000 + -0x76c;
      local_40.tm_mon = (iVar3 % 10000) / 100 + -1;
    }
    lVar5 = Sexy::GetTimegm(&local_40);
    lVar6 = Sexy::GetBJTimeOffset();
    *(long *)(this + 0x48) = lVar5 - lVar6;
  }
  cVar2 = FUN_0547419c((string *)(this + 0x28));
  if (cVar2 == '\0') {
    pAVar1 = this + 0x38;
    cVar2 = FUN_0547419c(pAVar1);
    if ((cVar2 == '\0') && (lVar5 = FUN_05474178(pAVar1), lVar5 == 0xe)) {
      local_40.tm_zone = (char *)0x0;
      local_40.tm_sec = 0;
      local_40.tm_min = 0;
      local_40.tm_hour = 0;
      local_40.tm_mday = 0;
      local_40.tm_mon = 0;
      local_40.tm_year = 0;
      local_40.tm_wday = 0;
      local_40.tm_yday = 0;
      local_40.tm_isdst = 0;
      local_40._36_4_ = 0;
      local_40.tm_gmtoff = 0;
      FUN_05475ffc(asStack_48,pAVar1,0,8);
      iVar3 = StringHelper::ToInt(asStack_48);
      std::string::~string(asStack_48);
      FUN_05475ffc(asStack_48,pAVar1,8,0xffffffffffffffff);
      iVar4 = StringHelper::ToInt(asStack_48);
      std::string::~string(asStack_48);
      local_40.tm_mday = iVar3 % 100;
      local_40.tm_hour = iVar4 / 10000;
      local_40.tm_year = iVar3 / 10000 + -0x76c;
      local_40.tm_mon = (iVar3 % 10000) / 100 + -1;
      local_40.tm_min = (iVar4 % 10000) / 100;
      local_40.tm_sec = iVar4 % 100;
    }
    else {
      iVar3 = StringHelper::ToInt((string *)(this + 0x28));
      local_40.tm_wday = 0;
      local_40.tm_yday = 0;
      local_40.tm_zone = (char *)0x0;
      local_40.tm_isdst = 0;
      local_40._36_4_ = 0;
      local_40.tm_gmtoff = 0;
      local_40.tm_mday = iVar3 % 100;
      local_40.tm_hour = 0x17;
      local_40.tm_sec = 0x3b;
      local_40.tm_min = 0x3b;
      local_40.tm_year = iVar3 / 10000 + -0x76c;
      local_40.tm_mon = (iVar3 % 10000) / 100 + -1;
    }
    lVar5 = Sexy::GetTimegm(&local_40);
    lVar6 = Sexy::GetBJTimeOffset();
    *(long *)(this + 0x50) = lVar5 - lVar6;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveItem::GetLeftTimes() const */

int __thiscall ActiveItem::GetLeftTimes(ActiveItem *this)

{
  int iVar1;
  
  iVar1 = LawnApp::GetRealServerTime(gLawnApp);
  return (int)*(undefined8 *)(this + 0x50) - iVar1;
}


/* ActiveItem::GetLeftDays() const */

long __thiscall ActiveItem::GetLeftDays(ActiveItem *this)

{
  long lVar1;
  
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  if ((*(long *)(this + 0x50) < lVar1) || (lVar1 < *(long *)(this + 0x48))) {
    lVar1 = 0xffffffff;
  }
  else {
    lVar1 = (*(long *)(this + 0x50) - lVar1) / 0x15180;
  }
  return lVar1;
}


/* ActiveItem::StaticNew() */

ActiveItem * ActiveItem::StaticNew(void)

{
  ActiveItem *this;
  
  this = ::operator_new(0x80);
  ActiveItem(this);
  return this;
}


/* ActiveItem::Notify() */

void __thiscall ActiveItem::Notify(ActiveItem *this)

{
  bool bVar1;
  
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x60));
  if (!bVar1) {
    return;
  }
  std::function<void(ActiveItem*)>::operator()((function<void(ActiveItem*)> *)(this + 0x60),this);
  return;
}


/* ActiveItem::TEMPNAMEPLACEHOLDERVALUE(ActiveItem const&) */

ActiveItem * __thiscall ActiveItem::operator=(ActiveItem *this,ActiveItem *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  this[0x18] = param_1[0x18];
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x48) = uVar2;
  *(undefined8 *)(this + 0x50) = uVar1;
  std::function<void(ActiveItem*)>::operator=
            ((function<void(ActiveItem*)> *)(this + 0x60),(function *)(param_1 + 0x60));
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveItem::GetDataSerialized(Sexy::RtObject&) */

void __thiscall ActiveItem::GetDataSerialized(ActiveItem *this,RtObject *param_1)

{
  char cVar1;
  char *pcVar2;
  RtSerialRtonReader *this_00;
  undefined8 uVar3;
  code *pcVar4;
  string asStack_160 [8];
  string asStack_158 [8];
  RtSerialRtonKey aRStack_150 [8];
  undefined8 local_148 [3];
  RtSerialRtonReader aRStack_130 [40];
  RtSerialBuffer aRStack_108 [48];
  RtSerializeContext aRStack_d8 [48];
  RtSerialRtonWriter aRStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(this + 0x40);
  if (cVar1 == '\0') {
    Sexy::RtSerialBuffer::RtSerialBuffer(aRStack_108,(uchar *)0x0,0);
    Sexy::RtSerialRtonWriter::RtSerialRtonWriter(aRStack_a8,aRStack_108);
    Set8BytesTo0(asStack_160);
    std::string::string(asStack_158,"{\"data\":");
    nop();
    thunk_FUN_054757c0(asStack_158,this + 0x40);
    FUN_05475ad8(asStack_158,&DAT_05593340);
    pcVar2 = (char *)FUN_0547429c(asStack_158);
    cVar1 = Sexy::RtSerial::JsonToRton(pcVar2,aRStack_a8,asStack_160);
    if (cVar1 == '\0') {
      uVar3 = FUN_0547429c(asStack_160);
      Sexy::OutputDebugStrF((wchar_t *)"ActiveItem::GetDataSerialized error : %s",uVar3);
      cVar1 = '\0';
    }
    else {
      Sexy::RtSerialRtonReader::RtSerialRtonReader(aRStack_130,aRStack_108);
      Sexy::RtSerialRtonSync::RtSerialRtonSync((RtSerialRtonSync *)local_148,aRStack_130);
      this_00 = (RtSerialRtonReader *)FUN_04b9be40(local_148[0]);
      Sexy::RtSerialRtonReader::BeginDocumentObject(this_00);
      pcVar4 = *(code **)(*(long *)param_1 + 0x30);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_150,"data");
      Sexy::RtSerializeContext::RtSerializeContext
                (aRStack_d8,(RtSerialRtonSync *)local_148,aRStack_150,0);
      cVar1 = (*pcVar4)(param_1,aRStack_d8);
      Sexy::RtSerializeContext::~RtSerializeContext(aRStack_d8);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_150);
      Sexy::RtSerialRtonReader::EndDocumentObject(this_00);
      Sexy::RtSerialRtonReader::~RtSerialRtonReader(aRStack_130);
    }
    std::string::~string(asStack_158);
    std::string::~string(asStack_160);
    Sexy::RtSerialRtonWriter::~RtSerialRtonWriter(aRStack_a8);
    Sexy::RtSerialBuffer::~RtSerialBuffer(aRStack_108);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

