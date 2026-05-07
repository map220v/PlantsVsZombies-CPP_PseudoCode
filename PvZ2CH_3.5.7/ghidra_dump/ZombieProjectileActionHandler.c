// Class: ZombieProjectileActionHandler


/* ZombieProjectileActionHandler::onAnimationDone(std::string const&) */

void ZombieProjectileActionHandler::onAnimationDone(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileActionHandler::StaticClassInit() */

void ZombieProjectileActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieProjectileActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0462ee74,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieProjectileActionHandler::StaticGetClass() */

long * ZombieProjectileActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieProjectileActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProjectileActionHandler::GetClass() const */

long * ZombieProjectileActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieProjectileActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProjectileActionHandler::OnPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieProjectileActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0xa8))(param_1);
  }
  return;
}


/* ZombieProjectileActionHandler::ZombieProjectileActionHandler() */

void __thiscall
ZombieProjectileActionHandler::ZombieProjectileActionHandler(ZombieProjectileActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_0687ed30;
  return;
}


/* ZombieProjectileActionHandler::StaticNew() */

ZombieProjectileActionHandler * ZombieProjectileActionHandler::StaticNew(void)

{
  ZombieProjectileActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieProjectileActionHandler(this);
  return this;
}


/* ZombieProjectileActionHandler::~ZombieProjectileActionHandler() */

void __thiscall
ZombieProjectileActionHandler::~ZombieProjectileActionHandler(ZombieProjectileActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_0687ed30;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieProjectileActionHandler::~ZombieProjectileActionHandler() */

void __thiscall
ZombieProjectileActionHandler::~ZombieProjectileActionHandler(ZombieProjectileActionHandler *this)

{
  ~ZombieProjectileActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileActionHandler::fireProjectile() */

void ZombieProjectileActionHandler::fireProjectile(void)

{
  ZombieActionHandler *in_x0;
  Zombie *this;
  ZombossHydraSprayActionDefinition *pZVar1;
  CreatureConditionTracker *this_00;
  SexyVector3 *this_01;
  undefined8 uVar2;
  float fVar3;
  Board *pBVar4;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Zombie *)ZombieActionHandler::getZombie(in_x0);
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (CreatureConditionTracker *)Zombie::GetConditionTracker(this);
  fVar3 = (float)CreatureConditionTracker::GetDrawScale(this_00);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)(pZVar1 + 0x48),fVar3);
  local_14 = (undefined4)in_d1;
  local_10 = (undefined4)in_d2;
  pBVar4 = (Board *)Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&local_18);
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(pZVar1 + 0x38));
  Board::AddProjectile(pBVar4,in_d1,in_d2,uVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_18,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileActionHandler::onStartAction() */

void __thiscall ZombieProjectileActionHandler::onStartAction(ZombieProjectileActionHandler *this)

{
  char cVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  Zombie *pZVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  code *pcVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  cVar1 = FUN_0547419c(pZVar2 + 0x70);
  if (cVar1 == '\0') {
    pZVar3 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar3);
    pcVar5 = *(code **)(*(long *)pZVar4 + 0x170);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    (*pcVar5)(pZVar4,pZVar2 + 0x70,0,aRStack_50);
  }
  else {
    pZVar3 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar3);
    pcVar5 = *(code **)(*(long *)pZVar4 + 0x140);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    (*pcVar5)(pZVar4,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

