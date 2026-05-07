// Class: ZombossSpawnGlacierColumnActionHandler


/* ZombossSpawnGlacierColumnActionHandler::onSpawnAnimationEnd(std::string const&) */

void ZombossSpawnGlacierColumnActionHandler::onSpawnAnimationEnd(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnGlacierColumnActionHandler::StaticClassInit() */

void ZombossSpawnGlacierColumnActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSpawnGlacierColumnActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0476d0f4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSpawnGlacierColumnActionHandler::StaticGetClass() */

long * ZombossSpawnGlacierColumnActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnGlacierColumnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnGlacierColumnActionHandler::GetClass() const */

long * ZombossSpawnGlacierColumnActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnGlacierColumnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnGlacierColumnActionHandler::ZombossSpawnGlacierColumnActionHandler() */

void __thiscall
ZombossSpawnGlacierColumnActionHandler::ZombossSpawnGlacierColumnActionHandler
          (ZombossSpawnGlacierColumnActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined ***)this = &PTR_GetClass_068d3f00;
  return;
}


/* ZombossSpawnGlacierColumnActionHandler::StaticNew() */

ZombossSpawnGlacierColumnActionHandler * ZombossSpawnGlacierColumnActionHandler::StaticNew(void)

{
  ZombossSpawnGlacierColumnActionHandler *this;
  
  this = ::operator_new(0x30);
  ZombossSpawnGlacierColumnActionHandler(this);
  return this;
}


/* ZombossSpawnGlacierColumnActionHandler::~ZombossSpawnGlacierColumnActionHandler() */

void __thiscall
ZombossSpawnGlacierColumnActionHandler::~ZombossSpawnGlacierColumnActionHandler
          (ZombossSpawnGlacierColumnActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068d3f00;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSpawnGlacierColumnActionHandler::~ZombossSpawnGlacierColumnActionHandler() */

void __thiscall
ZombossSpawnGlacierColumnActionHandler::~ZombossSpawnGlacierColumnActionHandler
          (ZombossSpawnGlacierColumnActionHandler *this)

{
  ~ZombossSpawnGlacierColumnActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossSpawnGlacierColumnActionHandler::OnPopAnimCommand(std::string const&, float, std::string
   const&, std::string const&) */

void ZombossSpawnGlacierColumnActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  GlacierModule *this;
  
  bVar1 = std::operator==(param_4,"submerged");
  if ((bVar1) && (-1 < *(int *)(param_1 + 0x28))) {
    this = (GlacierModule *)FUN_0476e5b0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (this != (GlacierModule *)0x0) {
      GlacierModule::Advance(this,*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x28));
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnGlacierColumnActionHandler::onStartAction() */

void __thiscall
ZombossSpawnGlacierColumnActionHandler::onStartAction(ZombossSpawnGlacierColumnActionHandler *this)

{
  undefined4 uVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  GlacierModule *this_02;
  ZombieHydraHeadAnimRig *pZVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  this_02 = (GlacierModule *)FUN_0476e5b0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_02 != (GlacierModule *)0x0) {
    uVar1 = GlacierModule::GetMaxAvailableColumn(this_02);
    *(undefined4 *)(this + 0x24) = uVar1;
  }
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  *(int *)(this + 0x28) = iVar2 + -1;
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  uVar1 = *(undefined4 *)(this + 0x24);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSpawnAnimationEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_IceAge::PlaySpawnGlacier
            ((ZombieAnimRig_ZombossMech_IceAge *)pZVar3,uVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

