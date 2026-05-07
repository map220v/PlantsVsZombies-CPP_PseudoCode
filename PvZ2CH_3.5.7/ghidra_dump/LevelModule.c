// Class: LevelModule


/* LevelModule::GetPropsPtr() const */

void __thiscall LevelModule::GetPropsPtr(LevelModule *this)

{
  EntityComponent_GroundEffect::GetEffect();
  return;
}


/* LevelModule::postInitialize() */

void LevelModule::postInitialize(void)

{
  return;
}


/* LevelModule::~LevelModule() */

void __thiscall LevelModule::~LevelModule(LevelModule *this)

{
  *(undefined ***)this = &PTR_GetClass_0678d6f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* LevelModule::~LevelModule() */

void __thiscall LevelModule::~LevelModule(LevelModule *this)

{
  ~LevelModule(this);
  AK::FreeHook(this);
  return;
}


/* LevelModule::LevelModule() */

void __thiscall LevelModule::LevelModule(LevelModule *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_0678d6f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}


/* ResilienceTutorialIntroProperties const*
   LevelModule::getProps<ResilienceTutorialIntroProperties>() const */

ResilienceTutorialIntroProperties * __thiscall
LevelModule::getProps<ResilienceTutorialIntroProperties>(LevelModule *this)

{
  ResilienceTutorialIntroProperties *extraout_x0;
  
  BasePowerup::GetType((BasePowerup *)this);
  nop();
  return extraout_x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModule::StaticClassInit() */

void LevelModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03e70e7c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelModule::StaticGetClass() */

long * LevelModule::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"LevelModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelModule::GetClass() const */

long * LevelModule::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"LevelModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelModule::PostInitialize() */

void __thiscall LevelModule::PostInitialize(LevelModule *this)

{
  if (*(code **)(*(long *)this + 0x98) != postInitialize) {
    (**(code **)(*(long *)this + 0x98))();
  }
  return;
}


/* LevelModule::getManager() const */

void LevelModule::getManager(void)

{
  FUN_03e6f9f4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  return;
}


/* LevelModule::StaticNew() */

LevelModule * LevelModule::StaticNew(void)

{
  LevelModule *this;
  
  this = ::operator_new(0x18);
  LevelModule(this);
  return this;
}


/* LevelModule::InitializeModule(Sexy::RtWeakPtr<LevelModuleProperties const>) */

void __thiscall LevelModule::InitializeModule(LevelModule *this,RtWeakPtrBase *param_2)

{
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x10),param_2);
  (**(code **)(*(long *)this + 0x90))(this);
  return;
}


/* LevelModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall LevelModule::AddResourceRequirements(LevelModule *this,set *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = BasePowerup::GetType((BasePowerup *)this);
  uVar2 = FUN_03e70a98(*(undefined8 *)(lVar1 + 0x10));
  uVar3 = FUN_03e70ae8(*(undefined8 *)(lVar1 + 0x18));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar2,
             uVar3);
  return;
}

