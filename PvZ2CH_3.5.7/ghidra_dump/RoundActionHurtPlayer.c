// Class: RoundActionHurtPlayer


/* RoundActionHurtPlayer::RoundActionHurtPlayer() */

void __thiscall RoundActionHurtPlayer::RoundActionHurtPlayer(RoundActionHurtPlayer *this)

{
  CardEffect::CardEffect((CardEffect *)this);
  *(undefined ***)this = &PTR_GetCardEffectClass_06668be0;
  return;
}


/* RoundActionHurtPlayer::StaticNew() */

RoundActionHurtPlayer * RoundActionHurtPlayer::StaticNew(void)

{
  RoundActionHurtPlayer *this;
  
  this = ::operator_new(0x28);
  RoundActionHurtPlayer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoundActionHurtPlayer::StaticClassInit() */

void RoundActionHurtPlayer::StaticClassInit(void)

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
    std::string::string(asStack_10,"RoundActionHurtPlayer");
    (*pcVar2)(plVar1,asStack_10,FUN_036158a0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RoundActionHurtPlayer::StaticGetClass() */

long * RoundActionHurtPlayer::StaticGetClass(void)

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
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"RoundActionHurtPlayer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RoundActionHurtPlayer::~RoundActionHurtPlayer() */

void __thiscall RoundActionHurtPlayer::~RoundActionHurtPlayer(RoundActionHurtPlayer *this)

{
  *(undefined ***)this = &PTR_GetCardEffectClass_06668be0;
  CardEffect::~CardEffect((CardEffect *)this);
  return;
}


/* RoundActionHurtPlayer::~RoundActionHurtPlayer() */

void __thiscall RoundActionHurtPlayer::~RoundActionHurtPlayer(RoundActionHurtPlayer *this)

{
  ~RoundActionHurtPlayer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoundActionHurtPlayer::DoEffect() */

void __thiscall RoundActionHurtPlayer::DoEffect(RoundActionHurtPlayer *this)

{
  char cVar1;
  CardBoardMgr *pCVar2;
  CardGameZombiesAteYourBaseModule *this_00;
  RtObject *this_01;
  RoundActionHurtPlayerProperty *pRVar3;
  float fVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x20) = 2;
  local_8 = ___stack_chk_guard;
  pCVar2 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x10));
  cVar1 = CardBoardMgr::VerifyCardDestination(pCVar2,aRStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if ((cVar1 != '\0') &&
     (this_00 = (CardGameZombiesAteYourBaseModule *)
                FUN_03615a68(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
     this_00 != (CardGameZombiesAteYourBaseModule *)0x0)) {
    fVar4 = (float)CardGameZombiesAteYourBaseModule::GetMaxHitpoints(this_00);
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
    pRVar3 = Sexy::RtObject::Cast<RoundActionHurtPlayerProperty>(this_01);
    CardGameZombiesAteYourBaseModule::TakeDamage(this_00,fVar4 * *(float *)(pRVar3 + 0xc));
  }
  *(undefined4 *)(this + 0x20) = 3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

