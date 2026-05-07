// Class: GeneralRemainingSunCurrencyListener


/* GeneralRemainingSunCurrencyListener::~GeneralRemainingSunCurrencyListener() */

void __thiscall
GeneralRemainingSunCurrencyListener::~GeneralRemainingSunCurrencyListener
          (GeneralRemainingSunCurrencyListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f6f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralRemainingSunCurrencyListener::~GeneralRemainingSunCurrencyListener() */

void __thiscall
GeneralRemainingSunCurrencyListener::~GeneralRemainingSunCurrencyListener
          (GeneralRemainingSunCurrencyListener *this)

{
  ~GeneralRemainingSunCurrencyListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralRemainingSunCurrencyListener::GeneralRemainingSunCurrencyListener() */

void __thiscall
GeneralRemainingSunCurrencyListener::GeneralRemainingSunCurrencyListener
          (GeneralRemainingSunCurrencyListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f6f0;
  return;
}


/* GeneralRemainingSunCurrencyListener::StaticNew() */

GeneralRemainingSunCurrencyListener * GeneralRemainingSunCurrencyListener::StaticNew(void)

{
  GeneralRemainingSunCurrencyListener *this;
  
  this = ::operator_new(0x18);
  GeneralRemainingSunCurrencyListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralRemainingSunCurrencyListener::StaticClassInit() */

void GeneralRemainingSunCurrencyListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralRemainingSunCurrencyListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a888a4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralRemainingSunCurrencyListener::StaticGetClass() */

long * GeneralRemainingSunCurrencyListener::StaticGetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralRemainingSunCurrencyListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralRemainingSunCurrencyListener::GetClass() const */

long * GeneralRemainingSunCurrencyListener::GetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralRemainingSunCurrencyListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralRemainingSunCurrencyListener::onPvZ1FinishLevel(int, bool) */

void GeneralRemainingSunCurrencyListener::onPvZ1FinishLevel(int param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  RtObject *this;
  PvZ1AchievementData *pPVar5;
  
  plVar4 = (long *)(ulong)(uint)param_1;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(plVar4[2] + 0x20));
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(plVar4[2] + 0x20));
    pPVar5 = Sexy::RtObject::Cast<PvZ1AchievementData>(this);
    if ((((pPVar5 != (PvZ1AchievementData *)0x0) && (*(long *)(gLawnApp + 0x9f0) != 0)) &&
        (cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level(), cVar2 != '\0')) &&
       (iVar3 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0)),
       *(int *)(pPVar5 + 0x54) <= iVar3)) {
      (**(code **)(*plVar4 + 0x58))(plVar4,1);
      return;
    }
  }
  return;
}


/* GeneralRemainingSunCurrencyListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralRemainingSunCurrencyListener::RegisterListener
          (GeneralRemainingSunCurrencyListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPvZ1FinishLevel);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<GeneralRemainingSunCurrencyListener,void(GeneralRemainingSunCurrencyListener::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::PvZ1FinishLevel,&local_40);
  this[8] = (GeneralRemainingSunCurrencyListener)0x1;
  return;
}

