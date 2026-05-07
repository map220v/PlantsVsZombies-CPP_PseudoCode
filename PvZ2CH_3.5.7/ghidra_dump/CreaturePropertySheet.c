// Class: CreaturePropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreaturePropertySheet::StaticClassInit() */

void CreaturePropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"CreaturePropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_04815e2c,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CreaturePropertySheet::StaticGetClass() */

long * CreaturePropertySheet::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"CreaturePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CreaturePropertySheet::GetClass() const */

long * CreaturePropertySheet::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"CreaturePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreaturePropertySheet::CreaturePropertySheet() */

void __thiscall CreaturePropertySheet::CreaturePropertySheet(CreaturePropertySheet *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_069032a0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  Sexy::Insets::Insets((Insets *)(this + 0x44),0,0,0x2a,0x7d);
  Sexy::Insets::Insets((Insets *)(this + 0x54),10,10,0x32,0x7d);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 100),135.0,160.0);
  EATextSquish::Vec3::Vec3((Vec3 *)(this + 0x6c),0.0,0.0,1.2);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x78),1.0,1.0);
  Set8BytesTo0(this + 0x80);
  Sexy::Point::Point((Point *)(this + 0x88));
  Set8BytesTo0(this + 0x90);
  Set8BytesTo0(this + 0x98);
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 0x3e23d70a;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x14) = 0x3dcccccd;
  Sexy::Point::Point((Point *)&local_10,1,1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x88) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CreaturePropertySheet::StaticNew() */

CreaturePropertySheet * CreaturePropertySheet::StaticNew(void)

{
  CreaturePropertySheet *this;
  
  this = ::operator_new(0xa0);
  CreaturePropertySheet(this);
  return this;
}


/* CreaturePropertySheet::~CreaturePropertySheet() */

void __thiscall CreaturePropertySheet::~CreaturePropertySheet(CreaturePropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_069032a0;
  std::string::~string((string *)(this + 0x98));
  std::string::~string((string *)(this + 0x90));
  std::string::~string((string *)(this + 0x80));
  std::vector<BoardEntityStat,std::allocator<BoardEntityStat>>::~vector
            ((vector<BoardEntityStat,std::allocator<BoardEntityStat>> *)(this + 0x28));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* CreaturePropertySheet::~CreaturePropertySheet() */

void __thiscall CreaturePropertySheet::~CreaturePropertySheet(CreaturePropertySheet *this)

{
  ~CreaturePropertySheet(this);
  AK::FreeHook(this);
  return;
}

