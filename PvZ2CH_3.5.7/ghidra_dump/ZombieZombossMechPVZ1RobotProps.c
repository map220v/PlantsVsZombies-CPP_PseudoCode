// Class: ZombieZombossMechPVZ1RobotProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechPVZ1RobotProps::StaticClassInit() */

void ZombieZombossMechPVZ1RobotProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechPVZ1RobotProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04f1e434,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechPVZ1RobotProps::StaticGetClass() */

long * ZombieZombossMechPVZ1RobotProps::StaticGetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechPVZ1RobotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechPVZ1RobotProps::GetClass() const */

long * ZombieZombossMechPVZ1RobotProps::GetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechPVZ1RobotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechPVZ1RobotProps::ZombieZombossMechPVZ1RobotProps() */

void __thiscall
ZombieZombossMechPVZ1RobotProps::ZombieZombossMechPVZ1RobotProps
          (ZombieZombossMechPVZ1RobotProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_06a0f200;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x2a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d0));
  *(undefined4 *)(this + 0x2a0) = 2;
  *(undefined4 *)(this + 0x2b0) = 0x40a00000;
  *(undefined4 *)(this + 0x2b4) = 0x43fa0000;
  return;
}


/* ZombieZombossMechPVZ1RobotProps::StaticNew() */

ZombieZombossMechPVZ1RobotProps * ZombieZombossMechPVZ1RobotProps::StaticNew(void)

{
  ZombieZombossMechPVZ1RobotProps *this;
  
  this = ::operator_new(0x2e8);
  ZombieZombossMechPVZ1RobotProps(this);
  return this;
}


/* ZombieZombossMechPVZ1RobotProps::~ZombieZombossMechPVZ1RobotProps() */

void __thiscall
ZombieZombossMechPVZ1RobotProps::~ZombieZombossMechPVZ1RobotProps
          (ZombieZombossMechPVZ1RobotProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0f200;
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::~vector((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
             *)(this + 0x2d0));
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::~vector((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
             *)(this + 0x2b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x2a8));
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechPVZ1RobotProps::~ZombieZombossMechPVZ1RobotProps() */

void __thiscall
ZombieZombossMechPVZ1RobotProps::~ZombieZombossMechPVZ1RobotProps
          (ZombieZombossMechPVZ1RobotProps *this)

{
  ~ZombieZombossMechPVZ1RobotProps(this);
  AK::FreeHook(this);
  return;
}

