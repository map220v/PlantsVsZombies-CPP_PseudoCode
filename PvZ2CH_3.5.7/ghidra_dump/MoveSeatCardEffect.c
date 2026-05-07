// Class: MoveSeatCardEffect


/* MoveSeatCardEffect::MoveSeatCardEffect() */

void __thiscall MoveSeatCardEffect::MoveSeatCardEffect(MoveSeatCardEffect *this)

{
  CardEffect::CardEffect((CardEffect *)this);
  *(undefined ***)this = &PTR_GetCardEffectClass_066679f0;
  return;
}


/* MoveSeatCardEffect::StaticNew() */

MoveSeatCardEffect * MoveSeatCardEffect::StaticNew(void)

{
  MoveSeatCardEffect *this;
  
  this = ::operator_new(0x28);
  MoveSeatCardEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoveSeatCardEffect::StaticClassInit() */

void MoveSeatCardEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"MoveSeatCardEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_0360d3c0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoveSeatCardEffect::StaticGetClass() */

long * MoveSeatCardEffect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MoveSeatCardEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoveSeatCardEffect::~MoveSeatCardEffect() */

void __thiscall MoveSeatCardEffect::~MoveSeatCardEffect(MoveSeatCardEffect *this)

{
  *(undefined ***)this = &PTR_GetCardEffectClass_066679f0;
  CardEffect::~CardEffect((CardEffect *)this);
  return;
}


/* MoveSeatCardEffect::~MoveSeatCardEffect() */

void __thiscall MoveSeatCardEffect::~MoveSeatCardEffect(MoveSeatCardEffect *this)

{
  ~MoveSeatCardEffect(this);
  AK::FreeHook(this);
  return;
}


/* MoveSeatCardEffect::DoEffect() */

void __thiscall MoveSeatCardEffect::DoEffect(MoveSeatCardEffect *this)

{
  int iVar1;
  RtObject *this_00;
  MoveSeatCardEffectProperty *pMVar2;
  
  *(undefined4 *)(this + 0x20) = 2;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  pMVar2 = Sexy::RtObject::Cast<MoveSeatCardEffectProperty>(this_00);
  iVar1 = Sexy::LazySingleton<CardBoardMgr>::GetInstance();
  CardBoardMgr::DiscardCards(iVar1,*(int *)(pMVar2 + 0x14));
  Sexy::OutputDebugStrF((wchar_t *)"CardLog : MoveSeatCardEffect Move Seat");
  *(undefined4 *)(this + 0x20) = 3;
  return;
}

