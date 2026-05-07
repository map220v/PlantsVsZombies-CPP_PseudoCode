// Class: GiveFreeZombieCardAura


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiveFreeZombieCardAura::StaticClassInit() */

void GiveFreeZombieCardAura::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiveFreeZombieCardAura");
    (*pcVar2)(plVar1,asStack_10,FUN_03609b20,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiveFreeZombieCardAura::StaticGetClass() */

long * GiveFreeZombieCardAura::StaticGetClass(void)

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
  uVar2 = InfluenceAura::StaticGetClass();
  (*pcVar3)(plVar1,"GiveFreeZombieCardAura",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiveFreeZombieCardAura::GiveFreeZombieCardAura() */

void __thiscall GiveFreeZombieCardAura::GiveFreeZombieCardAura(GiveFreeZombieCardAura *this)

{
  InfluenceAura::InfluenceAura((InfluenceAura *)this);
  *(undefined ***)this = &PTR_GetAuraClass_066671e0;
  return;
}


/* GiveFreeZombieCardAura::StaticNew() */

GiveFreeZombieCardAura * GiveFreeZombieCardAura::StaticNew(void)

{
  GiveFreeZombieCardAura *this;
  
  this = ::operator_new(0x18);
  GiveFreeZombieCardAura(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiveFreeZombieCardAura::InitializaAura(Sexy::RtWeakPtr<InfluenceAuraProperty>) */

void __thiscall
GiveFreeZombieCardAura::InitializaAura(GiveFreeZombieCardAura *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  BasePowerup::SetPowerupType((BasePowerup *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::OutputDebugStrF((wchar_t *)"CardLog : InfluenceAura InitializaAura");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiveFreeZombieCardAura::~GiveFreeZombieCardAura() */

void __thiscall GiveFreeZombieCardAura::~GiveFreeZombieCardAura(GiveFreeZombieCardAura *this)

{
  *(undefined ***)this = &PTR_GetAuraClass_066671e0;
  InfluenceAura::~InfluenceAura((InfluenceAura *)this);
  return;
}


/* GiveFreeZombieCardAura::~GiveFreeZombieCardAura() */

void __thiscall GiveFreeZombieCardAura::~GiveFreeZombieCardAura(GiveFreeZombieCardAura *this)

{
  ~GiveFreeZombieCardAura(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiveFreeZombieCardAura::registerForEvents() */

void __thiscall GiveFreeZombieCardAura::registerForEvents(GiveFreeZombieCardAura *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRoundStart);
  Sexy::Delegate0::Delegate0<GiveFreeZombieCardAura,void(GiveFreeZombieCardAura::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::AfterPlayerActionStart,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiveFreeZombieCardAura::OnRoundStart() */

void GiveFreeZombieCardAura::OnRoundStart(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<CardBoardMgr>::GetInstance();
  CardUtils::GetRandomCardByTag(aRStack_18,1);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  uVar1 = *(undefined4 *)(lVar3 + 0x10);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  CardBoardMgr::CreateCard(local_10,local_c,uVar2,uVar1,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

