// Class: LevelMutatorRiftTimedSunModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorRiftTimedSunModule::StaticClassInit() */

void LevelMutatorRiftTimedSunModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorRiftTimedSunModule");
    (*pcVar2)(plVar1,asStack_10,FUN_036a0ee0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorRiftTimedSunModule::StaticGetClass() */

long * LevelMutatorRiftTimedSunModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorRiftTimedSunModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorRiftTimedSunModule::LevelMutatorRiftTimedSunModule() */

void __thiscall
LevelMutatorRiftTimedSunModule::LevelMutatorRiftTimedSunModule(LevelMutatorRiftTimedSunModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667f260;
  return;
}


/* LevelMutatorRiftTimedSunModule::StaticNew() */

LevelMutatorRiftTimedSunModule * LevelMutatorRiftTimedSunModule::StaticNew(void)

{
  LevelMutatorRiftTimedSunModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorRiftTimedSunModule(this);
  return this;
}


/* LevelMutatorRiftTimedSunModule::~LevelMutatorRiftTimedSunModule() */

void __thiscall
LevelMutatorRiftTimedSunModule::~LevelMutatorRiftTimedSunModule
          (LevelMutatorRiftTimedSunModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667f260;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorRiftTimedSunModule::~LevelMutatorRiftTimedSunModule() */

void __thiscall
LevelMutatorRiftTimedSunModule::~LevelMutatorRiftTimedSunModule
          (LevelMutatorRiftTimedSunModule *this)

{
  ~LevelMutatorRiftTimedSunModule(this);
  AK::FreeHook(this);
  return;
}


/* LevelMutatorRiftTimedSunModule::GetPlantBannedListSize() */

void __thiscall
LevelMutatorRiftTimedSunModule::GetPlantBannedListSize(LevelMutatorRiftTimedSunModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  FUN_036a0bdc(*(undefined8 *)(pRVar1 + 0x58),*(undefined8 *)(pRVar1 + 0x60));
  return;
}


/* LevelMutatorRiftTimedSunModule::registerForEvents() */

void __thiscall
LevelMutatorRiftTimedSunModule::registerForEvents(LevelMutatorRiftTimedSunModule *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieKilled);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<LevelMutatorRiftTimedSunModule,void(LevelMutatorRiftTimedSunModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorRiftTimedSunModule::GetZombieSunDropValue(std::string const&, int) */

void __thiscall
LevelMutatorRiftTimedSunModule::GetZombieSunDropValue
          (LevelMutatorRiftTimedSunModule *this,string *param_1,int param_2)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar3 = FUN_036a4230(*(undefined8 *)(pRVar2 + 0x40));
  uVar4 = FUN_036a4280(*(undefined8 *)(pRVar2 + 0x48));
  local_18 = FUN_036a4f88(uVar3,uVar4,param_1);
  local_10 = FUN_036a4280(*(undefined8 *)(pRVar2 + 0x48));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  uVar7 = 0;
  if (bVar1) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    puVar6 = (undefined4 *)FUN_036a0bd4(*(undefined8 *)(lVar5 + 8),(long)(param_2 + -1));
    uVar7 = *puVar6;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* LevelMutatorRiftTimedSunModule::onZombieKilled(Zombie*, DamageInfo const*) */

void LevelMutatorRiftTimedSunModule::onZombieKilled(Zombie *param_1,DamageInfo *param_2)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar2;
  SexyVector3 *pSVar3;
  RiftValidateMgr *this_00;
  
  if (param_2 != (DamageInfo *)0x0) {
    this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)param_2);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    iVar1 = FUN_036a0bcc(*(undefined4 *)(param_2 + 0x50));
    iVar1 = GetZombieSunDropValue
                      ((LevelMutatorRiftTimedSunModule *)param_1,(string *)(lVar2 + 8),iVar1);
    if (0 < iVar1) {
      pSVar3 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_2);
      Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar3,iVar1,false,false,false,true,true);
    }
    this_00 = (RiftValidateMgr *)Sexy::LazySingleton<RiftValidateMgr>::GetInstance();
    RiftValidateMgr::NotifyZombieDiedAndSunDrop(this_00,iVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorRiftTimedSunModule::GetOverridePlantBannedList(std::vector<std::string,
   std::allocator<std::string > >&) */

void __thiscall
LevelMutatorRiftTimedSunModule::GetOverridePlantBannedList
          (LevelMutatorRiftTimedSunModule *this,vector *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar2 != (ResilienceTutorialIntroProperties *)0x0) {
    local_18 = FUN_036a4190(*(undefined8 *)(pRVar2 + 0x58));
    local_10 = FUN_036a41e0(*(undefined8 *)(pRVar2 + 0x60));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      FUN_05475d88(asStack_20,uVar3);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)param_1,asStack_20);
      std::string::~string(asStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

