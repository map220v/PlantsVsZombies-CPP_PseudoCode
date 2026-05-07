// Class: RiftThemeArmoredProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeArmoredProperties::StaticClassInit() */

void RiftThemeArmoredProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeArmoredProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03707e74,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeArmoredProperties::StaticGetClass() */

long * RiftThemeArmoredProperties::StaticGetClass(void)

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
  uVar2 = RiftThemeProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeArmoredProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeArmoredProperties::GetClass() const */

long * RiftThemeArmoredProperties::GetClass(void)

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
  uVar2 = RiftThemeProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeArmoredProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeArmoredProperties::RiftThemeArmoredProperties() */

void __thiscall
RiftThemeArmoredProperties::RiftThemeArmoredProperties(RiftThemeArmoredProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined ***)this = &PTR_GetClass_06686ed0;
  *(undefined4 *)(this + 0x24) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* RiftThemeArmoredProperties::StaticNew() */

RiftThemeArmoredProperties * RiftThemeArmoredProperties::StaticNew(void)

{
  RiftThemeArmoredProperties *this;
  
  this = ::operator_new(0x48);
  RiftThemeArmoredProperties(this);
  return this;
}


/* RiftThemeArmoredProperties::~RiftThemeArmoredProperties() */

void __thiscall
RiftThemeArmoredProperties::~RiftThemeArmoredProperties(RiftThemeArmoredProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06686ed0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeArmoredProperties::~RiftThemeArmoredProperties() */

void __thiscall
RiftThemeArmoredProperties::~RiftThemeArmoredProperties(RiftThemeArmoredProperties *this)

{
  ~RiftThemeArmoredProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeArmoredProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
RiftThemeArmoredProperties::GatherResourceRequirements
          (RiftThemeArmoredProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombieDarkKingGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

