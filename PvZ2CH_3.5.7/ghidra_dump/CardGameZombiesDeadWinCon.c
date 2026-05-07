// Class: CardGameZombiesDeadWinCon


/* CardGameZombiesDeadWinCon::StaticGetClass() */

long * CardGameZombiesDeadWinCon::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameZombiesDeadWinCon",uVar2,StaticNew);
  return sClass;
}


/* CardGameZombiesDeadWinCon::CardGameZombiesDeadWinCon() */

void __thiscall
CardGameZombiesDeadWinCon::CardGameZombiesDeadWinCon(CardGameZombiesDeadWinCon *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068b4440;
  return;
}


/* CardGameZombiesDeadWinCon::StaticNew() */

CardGameZombiesDeadWinCon * CardGameZombiesDeadWinCon::StaticNew(void)

{
  CardGameZombiesDeadWinCon *this;
  
  this = ::operator_new(0x18);
  CardGameZombiesDeadWinCon(this);
  return this;
}


/* CardGameZombiesDeadWinCon::~CardGameZombiesDeadWinCon() */

void __thiscall
CardGameZombiesDeadWinCon::~CardGameZombiesDeadWinCon(CardGameZombiesDeadWinCon *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068b4440;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* CardGameZombiesDeadWinCon::~CardGameZombiesDeadWinCon() */

void __thiscall
CardGameZombiesDeadWinCon::~CardGameZombiesDeadWinCon(CardGameZombiesDeadWinCon *this)

{
  ~CardGameZombiesDeadWinCon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesDeadWinCon::Check() */

void CardGameZombiesDeadWinCon::Check(void)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this;
  GridItemCardGameZombie *pGVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x2f);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pGVar4 = Sexy::RtObject::Cast<GridItemCardGameZombie>(this);
      if (pGVar4 != (GridItemCardGameZombie *)0x0) {
        if (*(code **)(*(long *)pGVar4 + 0x220) ==
            GridItemCardGameZombie::ShouldBlockLevelCompletion) {
          cVar2 = GridItemCardGameZombie::ShouldBlockLevelCompletion();
        }
        else {
          cVar2 = (**(code **)(*(long *)pGVar4 + 0x220))();
        }
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          uVar3 = 0;
          goto LAB_046d373c;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar3 = 1;
LAB_046d373c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesDeadWinCon::checkWin() */

void CardGameZombiesDeadWinCon::checkWin(void)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this;
  GridItemCardGameZombie *pGVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x2f);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pGVar4 = Sexy::RtObject::Cast<GridItemCardGameZombie>(this);
      if (pGVar4 != (GridItemCardGameZombie *)0x0) {
        if (*(code **)(*(long *)pGVar4 + 0x220) ==
            GridItemCardGameZombie::ShouldBlockLevelCompletion) {
          cVar2 = GridItemCardGameZombie::ShouldBlockLevelCompletion();
        }
        else {
          cVar2 = (**(code **)(*(long *)pGVar4 + 0x220))();
        }
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          uVar3 = 0;
          goto LAB_046d373c;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar3 = 1;
LAB_046d373c:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesDeadWinCon::registerForEvents() */

void __thiscall CardGameZombiesDeadWinCon::registerForEvents(CardGameZombiesDeadWinCon *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::
  Delegate0wRet<CardGameZombiesDeadWinCon,bool(CardGameZombiesDeadWinCon::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterWinCondition(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

