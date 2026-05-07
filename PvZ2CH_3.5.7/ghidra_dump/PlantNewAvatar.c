// Class: PlantNewAvatar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNewAvatar::StaticClassInit() */

void PlantNewAvatar::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantNewAvatar");
    (*pcVar2)(plVar1,asStack_10,FUN_043ae16c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNewAvatar::StaticGetClass() */

long * PlantNewAvatar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantNewAvatar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantNewAvatar::GetClass() const */

long * PlantNewAvatar::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantNewAvatar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantNewAvatar::GetNewAvatarID() */

void __thiscall PlantNewAvatar::GetNewAvatarID(PlantNewAvatar *this)

{
  NameMapperBase *this_00;
  
  this_00 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  NameMapperBase::GetIdForName(this_00,(string *)(this + 0x20));
  return;
}


/* PlantNewAvatar::GetNewAvatarPieceID() */

void __thiscall PlantNewAvatar::GetNewAvatarPieceID(PlantNewAvatar *this)

{
  NameMapperBase *this_00;
  
  this_00 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
  NameMapperBase::GetIdForName(this_00,(string *)(this + 0x20));
  return;
}


/* PlantNewAvatar::PlantNewAvatar() */

void __thiscall PlantNewAvatar::PlantNewAvatar(PlantNewAvatar *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_068411f0;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  *(undefined4 *)(this + 0x28) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  Set8BytesTo0(this + 0x58);
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  return;
}


/* PlantNewAvatar::StaticNew() */

PlantNewAvatar * PlantNewAvatar::StaticNew(void)

{
  PlantNewAvatar *this;
  
  this = ::operator_new(0x68);
  PlantNewAvatar(this);
  return this;
}


/* PlantNewAvatar::~PlantNewAvatar() */

void __thiscall PlantNewAvatar::~PlantNewAvatar(PlantNewAvatar *this)

{
  *(undefined ***)this = &PTR_GetClass_068411f0;
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PlantNewAvatar::~PlantNewAvatar() */

void __thiscall PlantNewAvatar::~PlantNewAvatar(PlantNewAvatar *this)

{
  ~PlantNewAvatar(this);
  AK::FreeHook(this);
  return;
}

