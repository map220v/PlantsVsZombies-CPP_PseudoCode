// Class: JackOLanternProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternProps::StaticClassInit() */

void JackOLanternProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"JackOLanternProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cffc54,0x468,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JackOLanternProps::StaticGetClass() */

long * JackOLanternProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"JackOLanternProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JackOLanternProps::GetClass() const */

long * JackOLanternProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"JackOLanternProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JackOLanternProps::JackOLanternProps() */

void __thiscall JackOLanternProps::JackOLanternProps(JackOLanternProps *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069a5470;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2b8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x3d0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x430));
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x440));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x3d0) = local_10;
  *(undefined4 *)(this + 0x3f8) = 0x3dcccccd;
  *(undefined4 *)(this + 0x3fc) = 0x3dcccccd;
  *(undefined4 *)(this + 0x400) = 0x3dcccccd;
  *(undefined4 *)(this + 0x3dc) = 4;
  *(undefined4 *)(this + 0x404) = 0x3dcccccd;
  *(undefined4 *)(this + 0x408) = 0x3dcccccd;
  *(undefined4 *)(this + 0x3d8) = 3;
  *(undefined4 *)(this + 0x3e0) = 5;
  *(undefined4 *)(this + 0x3ec) = 0x41200000;
  *(undefined4 *)(this + 0x438) = 3;
  *(undefined4 *)(this + 0x3e4) = 0x42c80000;
  *(undefined4 *)(this + 0x410) = 0x42480000;
  *(undefined4 *)(this + 1000) = 0x42c80000;
  *(undefined4 *)(this + 0x40c) = 0x41a00000;
  *(undefined4 *)(this + 0x414) = 0x42f00000;
  *(undefined4 *)(this + 0x3f4) = 0x3f800000;
  *(undefined4 *)(this + 0x3f0) = 0x42200000;
  *(undefined4 *)(this + 0x418) = 0x41700000;
  *(undefined4 *)(this + 0x41c) = 0x40a00000;
  *(undefined4 *)(this + 0x420) = 0x40a00000;
  *(undefined4 *)(this + 0x424) = 0x40a00000;
  *(undefined4 *)(this + 0x428) = 0x40a00000;
  *(undefined4 *)(this + 0x42c) = 0x42700000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JackOLanternProps::StaticNew() */

JackOLanternProps * JackOLanternProps::StaticNew(void)

{
  JackOLanternProps *this;
  
  this = ::operator_new(0x468);
  JackOLanternProps(this);
  return this;
}


/* JackOLanternProps::~JackOLanternProps() */

void __thiscall JackOLanternProps::~JackOLanternProps(JackOLanternProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a5470;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x440));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x430));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* JackOLanternProps::~JackOLanternProps() */

void __thiscall JackOLanternProps::~JackOLanternProps(JackOLanternProps *this)

{
  ~JackOLanternProps(this);
  AK::FreeHook(this);
  return;
}

