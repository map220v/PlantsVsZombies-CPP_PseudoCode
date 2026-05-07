// Class: BombModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BombModule::StaticClassInit() */

void BombModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"BombModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03ba02f4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BombModule::StaticGetClass() */

long * BombModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BombModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BombModule::BombModule() */

void __thiscall BombModule::BombModule(BombModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06736db0;
  return;
}


/* BombModule::StaticNew() */

BombModule * BombModule::StaticNew(void)

{
  BombModule *this;
  
  this = ::operator_new(0x18);
  BombModule(this);
  return this;
}


/* BombModule::~BombModule() */

void __thiscall BombModule::~BombModule(BombModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06736db0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* BombModule::~BombModule() */

void __thiscall BombModule::~BombModule(BombModule *this)

{
  ~BombModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BombModule::registerForEvents() */

void __thiscall BombModule::registerForEvents(BombModule *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReadyForBombs);
  Sexy::Delegate0::Delegate0<BombModule,void(BombModule::*)()const>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ReadyForLawnItems,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BombModule::onReadyForBombs() const */

void __thiscall BombModule::onReadyForBombs(BombModule *this)

{
  Bomb *pBVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
    if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x1c0) != 0) {
      pBVar1 = GameObject::Create<Bomb>();
      pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      Bomb::BombInitialize(pBVar1,(BombProperties *)pRVar2,0);
    }
    if (1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
      if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x1c4) != 0) {
        pBVar1 = GameObject::Create<Bomb>();
        pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
        Bomb::BombInitialize(pBVar1,(BombProperties *)pRVar2,1);
      }
      if (2 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
        if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x1c8) != 0) {
          pBVar1 = GameObject::Create<Bomb>();
          pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
          Bomb::BombInitialize(pBVar1,(BombProperties *)pRVar2,2);
        }
        if (3 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
          if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x1cc) != 0) {
            pBVar1 = GameObject::Create<Bomb>();
            pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
            Bomb::BombInitialize(pBVar1,(BombProperties *)pRVar2,3);
          }
          if (4 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
            if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x1d0) != 0) {
              pBVar1 = GameObject::Create<Bomb>();
              pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this)
              ;
              Bomb::BombInitialize(pBVar1,(BombProperties *)pRVar2,4);
            }
            if (5 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
              if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x1d4) != 0) {
                pBVar1 = GameObject::Create<Bomb>();
                pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                                   ((LevelModule *)this);
                Bomb::BombInitialize(pBVar1,(BombProperties *)pRVar2,5);
              }
              if (6 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
                if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x1d8) != 0) {
                  pBVar1 = GameObject::Create<Bomb>();
                  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                                     ((LevelModule *)this);
                  Bomb::BombInitialize(pBVar1,(BombProperties *)pRVar2,6);
                }
                if (7 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
                  if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x1dc) != 0) {
                    pBVar1 = GameObject::Create<Bomb>();
                    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                                       ((LevelModule *)this);
                    Bomb::BombInitialize(pBVar1,(BombProperties *)pRVar2,7);
                  }
                  if (8 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
                    if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x1e0) != 0) {
                      pBVar1 = GameObject::Create<Bomb>();
                      pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                                         ((LevelModule *)this);
                      Bomb::BombInitialize(pBVar1,(BombProperties *)pRVar2,8);
                    }
                    if ((9 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) &&
                       (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x1e4) != 0)) {
                      pBVar1 = GameObject::Create<Bomb>();
                      pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                                         ((LevelModule *)this);
                      Bomb::BombInitialize(pBVar1,(BombProperties *)pRVar2,9);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BombModule::GetPaveTime() const */

void __thiscall BombModule::GetPaveTime(BombModule *this)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar4 = FUN_03ba0ae0(*(undefined8 *)(pRVar3 + 0x40));
  uVar5 = FUN_03ba0b30(*(undefined8 *)(pRVar3 + 0x48));
  local_10 = std::
             max_element<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>>
                       (uVar4,uVar5);
  piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  iVar1 = *piVar6;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)(iVar2 * iVar1) / 120.0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BombModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall BombModule::AddResourceRequirements(BombModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"EgyptMowerGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KongfuBombGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantTorchwood");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

