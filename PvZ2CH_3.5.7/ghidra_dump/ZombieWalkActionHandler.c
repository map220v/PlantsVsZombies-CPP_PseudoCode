// Class: ZombieWalkActionHandler


/* ZombieWalkActionHandler::onWalkAnimationCycle() */

void ZombieWalkActionHandler::onWalkAnimationCycle(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWalkActionHandler::StaticClassInit() */

void ZombieWalkActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWalkActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f029e0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWalkActionHandler::StaticGetClass() */

long * ZombieWalkActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWalkActionHandler::GetClass() const */

long * ZombieWalkActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWalkActionHandler::ZombieWalkActionHandler() */

void __thiscall ZombieWalkActionHandler::ZombieWalkActionHandler(ZombieWalkActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a0bb10;
  return;
}


/* ZombieWalkActionHandler::StaticNew() */

ZombieWalkActionHandler * ZombieWalkActionHandler::StaticNew(void)

{
  ZombieWalkActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieWalkActionHandler(this);
  return this;
}


/* ZombieWalkActionHandler::~ZombieWalkActionHandler() */

void __thiscall ZombieWalkActionHandler::~ZombieWalkActionHandler(ZombieWalkActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0bb10;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieWalkActionHandler::~ZombieWalkActionHandler() */

void __thiscall ZombieWalkActionHandler::~ZombieWalkActionHandler(ZombieWalkActionHandler *this)

{
  ~ZombieWalkActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWalkActionHandler::playTransition() */

void __thiscall ZombieWalkActionHandler::playTransition(ZombieWalkActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  Zombie *this_00;
  long *plVar2;
  code *pcVar3;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  plVar2 = (long *)Zombie::GetAnimRig(this_00);
  pcVar3 = *(code **)(*plVar2 + 0x168);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  (*pcVar3)(plVar2,pZVar1 + 0x40,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWalkActionHandler::onEndAction() */

void __thiscall ZombieWalkActionHandler::onEndAction(ZombieWalkActionHandler *this)

{
  char cVar1;
  Zombie *pZVar2;
  long extraout_x0;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  Zombie::SetZombieFlag(pZVar2,1,0);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (*(char *)(extraout_x0 + 0x3c) != '\0') {
    Zombie::SetFacing(pZVar2,0);
  }
  uVar3 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  cVar1 = Zombie::HasCondition(uVar3,0x2e);
  if (cVar1 != '\0') {
    pZVar2 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    Zombie::EndCondition(pZVar2,0x2e);
    uVar3 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    Zombie::SetZombieFlag(uVar3,0x2000000,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWalkActionHandler::onStartAction() */

void __thiscall ZombieWalkActionHandler::onStartAction(ZombieWalkActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  Zombie *this_00;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  if ((pZVar1[0x48] == (ZombossHydraSprayActionDefinition)0x0) ||
     (pZVar1[0x3d] == (ZombossHydraSprayActionDefinition)0x0)) {
    this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    Zombie::SetZombieFlag(this_00,1,1);
    if (pZVar1[0x3c] == (ZombossHydraSprayActionDefinition)0x0) {
      plVar2 = (long *)Zombie::GetAnimRig(this_00);
      pcVar4 = *(code **)(*plVar2 + 0x118);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onWalkAnimationCycle");
      RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
      RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *
                 )aRStack_50,aRStack_60,asStack_58);
      (*pcVar4)(plVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      uVar3 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
      auVar5 = PVZ_EOT();
      Zombie::ApplyCondition((Zombie *)auVar5,0,uVar3,0x2e,1);
      uVar3 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
      Zombie::SetZombieFlag(uVar3,0x2000000,1);
    }
    else {
      plVar2 = (long *)Zombie::GetAnimRig(this_00);
      pcVar4 = *(code **)(*plVar2 + 0x120);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onWalkAnimationCycle");
      RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
      RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *
                 )aRStack_50,aRStack_60,asStack_58);
      (*pcVar4)(plVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    this[0x21] = (ZombieWalkActionHandler)0x1;
  }
  else {
    playTransition(this);
    this[0x21] = (ZombieWalkActionHandler)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWalkActionHandler::onUpdateAction() */

void __thiscall ZombieWalkActionHandler::onUpdateAction(ZombieWalkActionHandler *this)

{
  char cVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar3;
  Zombie *pZVar4;
  PopAnimRig *pPVar5;
  long *plVar6;
  code *pcVar7;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  int local_58 [2];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  if (pZVar2[0x48] == (ZombossHydraSprayActionDefinition)0x0) {
LAB_04f036b8:
    if (this[0x21] == (ZombieWalkActionHandler)0x0) {
      if (pZVar2[0x3d] != (ZombossHydraSprayActionDefinition)0x0) goto LAB_04f03668;
LAB_04f036c8:
      pZVar4 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
      pPVar5 = (PopAnimRig *)Zombie::GetAnimRig(pZVar4);
      cVar1 = PopAnimRig::IsPlayingAnything(pPVar5);
      if (cVar1 == '\0') {
        ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
      }
      goto LAB_04f03668;
    }
  }
  else {
    if (pZVar2[0x3d] != (ZombossHydraSprayActionDefinition)0x0) {
      pZVar4 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
      pPVar5 = (PopAnimRig *)Zombie::GetAnimRig(pZVar4);
      cVar1 = PopAnimRig::IsPlayingAnything(pPVar5);
      if (cVar1 == '\0') {
        Zombie::SetZombieFlag(this_00,1,1);
        if (pZVar2[0x3c] == (ZombossHydraSprayActionDefinition)0x0) {
          plVar6 = (long *)Zombie::GetAnimRig((Zombie *)this_00);
          pcVar7 = *(code **)(*plVar6 + 0x118);
        }
        else {
          plVar6 = (long *)Zombie::GetAnimRig((Zombie *)this_00);
          pcVar7 = *(code **)(*plVar6 + 0x120);
        }
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)local_58,"onWalkAnimationCycle");
        RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
        RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>
                    *)aRStack_50,aRStack_60,(string *)local_58);
        (*pcVar7)(plVar6,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)local_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        this[0x21] = (ZombieWalkActionHandler)0x1;
        goto LAB_04f03668;
      }
      goto LAB_04f036b8;
    }
    if (this[0x21] == (ZombieWalkActionHandler)0x0) goto LAB_04f036c8;
  }
  if ((-1.0 < *(float *)(pZVar2 + 0x38)) &&
     (BoardEntity::CalcGridPosition(), (float)local_58[0] <= *(float *)(pZVar2 + 0x38))) {
    if ((pZVar2[0x3d] == (ZombossHydraSprayActionDefinition)0x0) &&
       (pZVar2[0x48] != (ZombossHydraSprayActionDefinition)0x0)) {
      this[0x21] = (ZombieWalkActionHandler)0x0;
      Zombie::SetZombieFlag(this_00,1,0);
      plVar6 = (long *)Zombie::GetAnimRig((Zombie *)this_00);
      (**(code **)(*plVar6 + 0x80))(0x3f800000);
      playTransition(this);
    }
    else {
      ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
    }
  }
LAB_04f03668:
  if ((pZVar2[0x3c] != (ZombossHydraSprayActionDefinition)0x0) &&
     (pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00), 1000.0 < *pfVar3)) {
    (**(code **)(*(long *)this_00 + 0x48))(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

