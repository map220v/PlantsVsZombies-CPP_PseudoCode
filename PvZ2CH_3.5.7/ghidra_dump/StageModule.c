// Class: StageModule


/* StageModule::CanGraveStoneSpawnAt(int, int) */

undefined1  [16] StageModule::CanGraveStoneSpawnAt(int param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._8_4_ = param_2;
  auVar1._0_8_ = 1;
  return auVar1;
}


/* StageModule::GetPlantedPacketCount(std::string const&) */

undefined8 StageModule::GetPlantedPacketCount(string *param_1)

{
  return 0;
}


/* StageModule::GetBackgroundLeftImageWidth() */

void __thiscall StageModule::GetBackgroundLeftImageWidth(StageModule *this)

{
  bool bVar1;
  LotteryResultProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x70));
  if (!bVar1) {
    return;
  }
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70))
  ;
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  return;
}


/* StageModule::GetBackgroundMiddleImageWidth() */

void __thiscall StageModule::GetBackgroundMiddleImageWidth(StageModule *this)

{
  bool bVar1;
  LotteryResultProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x60));
  if (!bVar1) {
    return;
  }
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
  ;
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  return;
}


/* StageModule::GetBackgroundRightImageWidth() */

void __thiscall StageModule::GetBackgroundRightImageWidth(StageModule *this)

{
  bool bVar1;
  LotteryResultProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x68));
  if (!bVar1) {
    return;
  }
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68))
  ;
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  return;
}


/* StageModule::~StageModule() */

void __thiscall StageModule::~StageModule(StageModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684d410;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x98));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x90));
  std::
  vector<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>,std::allocator<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>>>
  ::~vector((vector<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>,std::allocator<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>>>
             *)(this + 0x78));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::
  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
  ::~map((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
          *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* StageModule::~StageModule() */

void __thiscall StageModule::~StageModule(StageModule *this)

{
  ~StageModule(this);
  AK::FreeHook(this);
  return;
}


/* StageModule::initializeModule() */

void __thiscall StageModule::initializeModule(StageModule *this)

{
  this[0x48] = (StageModule)0x0;
  this[0xb8] = (StageModule)0x1;
  this[0xb9] = (StageModule)0x1;
  *(undefined4 *)(this + 0xbc) = 0;
  this[0xc0] = (StageModule)0x0;
  return;
}


/* StageModule::GetDefaultZombieSpawnPositionX(int) */

int StageModule::GetDefaultZombieSpawnPositionX(int param_1)

{
  return *(int *)((ulong)(uint)param_1 + 0xe0) + 0x334;
}


/* StageModule::onGamePaused() */

void StageModule::onGamePaused(void)

{
  return;
}


/* StageModule::onGameUnpaused() */

void StageModule::onGameUnpaused(void)

{
  return;
}


/* StageModule::unregisterObservers() */

void __thiscall StageModule::unregisterObservers(StageModule *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::StaticClassInit() */

void StageModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"StageModule");
    (*pcVar2)(plVar1,asStack_10,FUN_044688cc,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StageModule::StaticGetClass() */

long * StageModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StageModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StageModule::SetMusicTriggerOverride(std::string const&) */

void StageModule::SetMusicTriggerOverride(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x58);
  return;
}


/* StageModule::InDamageFlash() */

StageModule __thiscall StageModule::InDamageFlash(StageModule *this)

{
  return this[0xcc];
}


/* StageModule::GetDamageFlashColor() */

Insets * StageModule::GetDamageFlashColor(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0xd0));
  return in_x8;
}


/* StageModule::MatchWorld(std::string const&) */

void __thiscall StageModule::MatchWorld(StageModule *this,string *param_1)

{
  std::operator==(param_1,(string *)(this + 0x50));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::renderBlackBars(Sexy::Graphics*) */

void __thiscall StageModule::renderBlackBars(StageModule *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *this_01;
  Color aCStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70);
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color(aCStack_18,0);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  pLVar6 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar2 = FUN_044684f8(0xfffffff6);
  iVar3 = FUN_044684f8(0x640);
  iVar4 = FUN_044684f8(0x14);
  Sexy::Graphics::FillRect(param_1,-iVar1,iVar2,iVar3,iVar4);
  pLVar6 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  this_01 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar3 = FUN_044684f8(0xfffffff6);
  iVar4 = FUN_044684f8(0x640);
  iVar5 = FUN_044684f8(0x14);
  Sexy::Graphics::FillRect(param_1,-iVar1,iVar2 + iVar3,iVar4,iVar5);
  Sexy::Color::Color(aCStack_18,1);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::GetGravestoneImage(int, int) */

void StageModule::GetGravestoneImage(int param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 uVar4;
  int local_18;
  int local_14 [2];
  int local_c;
  long local_8;
  
  uVar4 = *(undefined8 *)((ulong)(uint)param_1 + 0x78);
  local_8 = ___stack_chk_guard;
  local_14[0] = param_2;
  local_c = FUN_04467fc0(uVar4,*(undefined8 *)((ulong)(uint)param_1 + 0x80));
  local_c = local_c + -1;
  piVar1 = eastl::min_alt<int>(local_14,&local_c);
  puVar2 = (undefined8 *)FUN_04467fd4(uVar4,(long)*piVar1);
  uVar4 = *puVar2;
  local_c = FUN_04467fe0(uVar4,puVar2[1]);
  local_c = local_c + -1;
  piVar1 = eastl::min_alt<int>(&local_18,&local_c);
  pRVar3 = (RtWeakPtrBase *)FUN_04467fec(uVar4,(long)*piVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StageModule::FlashDamage() */

void __thiscall StageModule::FlashDamage(StageModule *this)

{
  undefined4 uVar1;
  
  if (this[0xcc] == (StageModule)0x0) {
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 200) = uVar1;
    this[0xcc] = (StageModule)0x1;
  }
  return;
}


/* StageModule::GetZombieEventType() */

undefined4 __thiscall StageModule::GetZombieEventType(StageModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0xe0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::GetDirtSpawnEffect() */

void StageModule::GetDirtSpawnEffect(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  FUN_05475d88(asStack_10,pRVar1 + 0xd8);
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x044691e4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* StageModule::renderBackground(Sexy::Graphics*) */

void __thiscall StageModule::renderBackground(StageModule *this,Graphics *param_1)

{
  RtWeakPtr *pRVar1;
  StageModule SVar2;
  bool bVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  ResourceInfo *pRVar6;
  long lVar7;
  LotteryResultProgressBar *this_00;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long local_8;
  
  SVar2 = this[0xcc];
  local_8 = ___stack_chk_guard;
  if (SVar2 != (StageModule)0x0) {
    fVar10 = *(float *)(this + 200);
    fVar8 = (float)PVZ_EOT();
    if (fVar10 < fVar8) {
      auVar9 = PVZ_T();
      local_28 = 0x3f800000;
      local_18 = 0x3f333333;
      fVar8 = CurveLerp<float>(auVar9,fVar10 + 0.25,auVar9._0_4_,&local_28,&local_18,3);
    }
    else {
      fVar8 = 0.0;
    }
    Sexy::Insets::Insets((Insets *)&local_28,0xff,0xff,0xff,0x96);
    Sexy::Color::Color((Color *)&local_18,(int)((float)local_28 * fVar8 + 255.0),
                       (int)((float)local_24 * fVar8 + 255.0),(int)((float)local_20 * fVar8 + 255.0)
                      );
    *(ulong *)(this + 0xd0) = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 0xd8) = uStack_10;
    Sexy::Graphics::SetColor(param_1,(Color *)(this + 0xd0));
    Sexy::Graphics::SetColorizeImages(param_1,true);
    fVar8 = (float)PVZ_T();
    if (*(float *)(this + 200) + 0.25 < fVar8) {
      this[0xcc] = (StageModule)0x0;
    }
  }
  pRVar1 = (RtWeakPtr *)(this + 0x70);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if ((bVar3) &&
     (pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this),
     pRVar5[0x68] != (ResilienceTutorialIntroProperties)0x0)) {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar1);
    this_00 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,-iVar4,0);
  }
  pRVar1 = (RtWeakPtr *)(this + 0x60);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if ((bVar3) &&
     (pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this),
     pRVar5[0x69] != (ResilienceTutorialIntroProperties)0x0)) {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar1);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,0,0);
  }
  if (SVar2 == (StageModule)0x0) {
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x68));
  }
  else {
    Sexy::Graphics::SetColorizeImages(param_1,false);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x68));
  }
  if (bVar3) {
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar5[0x6a] != (ResilienceTutorialIntroProperties)0x0) {
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x68));
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,*(int *)(lVar7 + 0x38),0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::addBackgroundToRenderQueue(RenderQueue*) */

void __thiscall StageModule::addBackgroundToRenderQueue(StageModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderBlackBars);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<StageModule,void(StageModule::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x1869b,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xe0);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<StageModule,void(StageModule::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,100000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::StageModule() */

void __thiscall StageModule::StageModule(StageModule *this)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar1 = ___stack_chk_guard;
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684d410;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x18));
  std::string::string((string *)(this + 0x50),"");
  nop();
  Set8BytesTo0(this + 0x58);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x90));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x98));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  Sexy::Color::Color((Color *)(this + 0xd0));
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  uVar3 = PVZ_EOT();
  this[0xcc] = (StageModule)0x0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 200) = uVar3;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StageModule::StaticNew() */

StageModule * StageModule::StaticNew(void)

{
  StageModule *this;
  
  this = ::operator_new(0xe8);
  StageModule(this);
  return this;
}


/* StageModule::setStageMusicState(StageMusicState) */

void __thiscall StageModule::setStageMusicState(StageModule *this,undefined4 param_2)

{
  long lVar1;
  char *pcVar2;
  
  if (this[0xc0] == (StageModule)0x0) {
    switch(param_2) {
    case 2:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Set_Switch_Music_GameStart");
      break;
    case 3:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Set_Switch_Music_HugeWave");
      break;
    case 4:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Set_Switch_Music_HugeWave_2");
      break;
    case 5:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Set_Switch_Music_FinalWave");
      break;
    case 6:
      if (((gLawnApp == 0) || (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0)) ||
         ((lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar1 == 0 ||
          (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
          *(char *)(lVar1 + 0x114) == '\0')))) {
        pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar2,"Set_Switch_Music_LoseGame");
      }
      break;
    case 7:
      if ((((gLawnApp == 0) || (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0)) ||
          (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar1 == 0)) ||
         (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
         *(char *)(lVar1 + 0x114) == '\0')) {
        pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar2,"Set_Switch_Music_WinGame");
      }
    }
  }
  *(undefined4 *)(this + 0xbc) = param_2;
  return;
}


/* StageModule::startGameStartedMusic() */

void __thiscall StageModule::startGameStartedMusic(StageModule *this)

{
  setStageMusicState(this,2);
  return;
}


/* StageModule::startHugeWaveMusic() */

void __thiscall StageModule::startHugeWaveMusic(StageModule *this)

{
  if (this[0x48] == (StageModule)0x0) {
    setStageMusicState(this,3);
    this[0x48] = (StageModule)((byte)this[0x48] ^ 1);
    return;
  }
  setStageMusicState(this,4);
  this[0x48] = (StageModule)((byte)this[0x48] ^ 1);
  return;
}


/* StageModule::startFinalWaveMusic() */

void __thiscall StageModule::startFinalWaveMusic(StageModule *this)

{
  setStageMusicState(this,5);
  return;
}


/* StageModule::onHugeWave() */

void __thiscall StageModule::onHugeWave(StageModule *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
  if (lVar3 != 0) {
    iVar1 = FUN_04467f94(*(undefined4 *)(lVar3 + 0x20));
    iVar2 = FUN_04467f98(*(undefined4 *)(lVar3 + 0x24));
    if (iVar1 == iVar2 + -1) {
      startFinalWaveMusic(this);
      return;
    }
  }
  startHugeWaveMusic(this);
  return;
}


/* StageModule::changeMusic(int, WaveType::WaveType, bool) */

void __thiscall StageModule::changeMusic(StageModule *this,int param_1,int param_3,char param_4)

{
  if (*(int *)(this + 0xc4) < param_1) {
    if (param_4 == '\0') {
      if (param_3 == 2) {
        startHugeWaveMusic(this);
        *(int *)(this + 0xc4) = param_1;
      }
      else {
        *(int *)(this + 0xc4) = param_1;
      }
    }
    else {
      startFinalWaveMusic(this);
      *(int *)(this + 0xc4) = param_1;
    }
  }
  return;
}


/* StageModule::onHugeWaveComing(bool, int) */

void __thiscall StageModule::onHugeWaveComing(StageModule *this,bool param_1,int param_2)

{
  changeMusic(this,param_2,2,param_1);
  return;
}


/* StageModule::onWaveStarted(int, WaveType::WaveType, bool) */

void __thiscall StageModule::onWaveStarted(StageModule *this,int param_1,int param_3,char param_4)

{
  if (*(int *)(this + 0xc4) < param_1) {
    if (param_4 == '\0') {
      if (param_3 == 2) {
        startHugeWaveMusic(this);
        *(int *)(this + 0xc4) = param_1;
      }
      else {
        *(int *)(this + 0xc4) = param_1;
      }
    }
    else {
      startFinalWaveMusic(this);
      *(int *)(this + 0xc4) = param_1;
    }
  }
  return;
}


/* StageModule::onFinalWave() */

void __thiscall StageModule::onFinalWave(StageModule *this)

{
  setStageMusicState(this,5);
  return;
}


/* StageModule::startLoseMusic() */

void __thiscall StageModule::startLoseMusic(StageModule *this)

{
  setStageMusicState(this,6);
  return;
}


/* StageModule::onGameLost() */

void __thiscall StageModule::onGameLost(StageModule *this)

{
  setStageMusicState(this,6);
  return;
}


/* StageModule::startWinMusic() */

void __thiscall StageModule::startWinMusic(StageModule *this)

{
  setStageMusicState(this,7);
  return;
}


/* StageModule::onGameWon() */

void __thiscall StageModule::onGameWon(StageModule *this)

{
  setStageMusicState(this,7);
  return;
}


/* StageModule::stopMusic() */

void __thiscall StageModule::stopMusic(StageModule *this)

{
  int iVar1;
  uint uVar2;
  
  if (this[0xb8] != (StageModule)0x0) {
    LawnApp::StopMusic(gLawnApp,"Stop_Music_World");
    LawnApp::StopMusic(gLawnApp,"Stop_Music_Kongfu_Boss");
    LawnApp::StopMusic(gLawnApp,"Stop_Music_PVP_Battle");
    iVar1 = LawnApp::GetMusicCallbackID(gLawnApp);
    if (iVar1 != 0) {
      uVar2 = Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      LawnApp::GetMusicCallbackID(gLawnApp);
      AudioMgr::CancelEventCallback(uVar2);
      LawnApp::ClearMusicCallbackID(gLawnApp);
      return;
    }
  }
  return;
}


/* StageModule::stopZombieGroans() */

void StageModule::stopZombieGroans(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Zomb_Switch_Vox_Groan");
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Zomb_Yeti_Vox");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::startAmbientAudio() */

void __thiscall StageModule::startAmbientAudio(StageModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  long lVar2;
  string *psVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  FUN_05475d88(asStack_18,pRVar1 + 0xc0);
  lVar2 = FUN_05474178(asStack_18);
  if (lVar2 != 0) {
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    FUN_031f5e7c(asStack_10,"Play_",asStack_18);
    AudioMgr::SendEvent(psVar3,asStack_10);
    std::string::~string(asStack_10);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::stopAmbientAudio() */

void __thiscall StageModule::stopAmbientAudio(StageModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  long lVar2;
  string *psVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar1 != (ResilienceTutorialIntroProperties *)0x0) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    FUN_05475d88(asStack_18,pRVar1 + 0xc0);
    lVar2 = FUN_05474178(asStack_18);
    if (lVar2 != 0) {
      psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      FUN_031f5e7c(asStack_10,"Stop_",asStack_18);
      AudioMgr::SendEvent(psVar3,asStack_10);
      std::string::~string(asStack_10);
    }
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::PlayZombieEventAudio() */

void __thiscall StageModule::PlayZombieEventAudio(StageModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  long lVar2;
  string *psVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  FUN_05475d88(asStack_10,pRVar1 + 0xe8);
  lVar2 = FUN_05474178(asStack_10);
  if (lVar2 != 0) {
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(psVar3,asStack_10);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::getMusicTypeForCurrentLevel() */

void __thiscall StageModule::getMusicTypeForCurrentLevel(StageModule *this)

{
  bool bVar1;
  long lVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  WorldDataManager *this_02;
  DangerRoomInfo *pDVar3;
  string *in_x8;
  string asStack_b8 [8];
  string asStack_b0 [168];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"MainPath");
  nop();
  lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if ((lVar2 == 0) ||
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar2 + 0x112) == '\0')) {
    PVZ1ModeUtils::IsPlayingPVZ1Level();
    lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    FUN_05475d88(asStack_b0,lVar2 + 0x140);
    bVar1 = std::operator!=(asStack_b0,"");
    if (bVar1) {
      thunk_FUN_05475e00();
    }
    std::string::~string(asStack_b0);
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    this_02 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    WorldDataManager::FindEventByLevelName(this_02,asStack_b0);
    std::string::~string(asStack_b0);
    LawnApp::GetDangerRoomLevelName(gLawnApp);
    pDVar3 = (DangerRoomInfo *)PlayerInfo::GetDangerRoomInfo(this_01,asStack_b8);
    DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)asStack_b0,pDVar3);
    DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)asStack_b0);
    std::string::~string(asStack_b8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::StartMusic() */

void __thiscall StageModule::StartMusic(StageModule *this)

{
  LawnApp *this_00;
  ResilienceTutorialIntroProperties *pRVar1;
  char *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xb9] != (StageModule)0x0) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    FUN_05475d88(asStack_20,pRVar1 + 0xb8);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    pvVar3 = (void *)FUN_0547429c(asStack_20);
    AudioMgr::SetSwitch(pcVar2,"LevelStarted",pvVar3);
    getMusicTypeForCurrentLevel(this);
    uVar4 = FUN_0547429c(asStack_18);
    Sexy::StrFormat("Music_%s",asStack_10,uVar4);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    pvVar3 = (void *)FUN_0547429c(asStack_10);
    AudioMgr::SetSwitch(pcVar2,"Music_Type",pvVar3);
    if ((((gLawnApp == (LawnApp *)0x0) || (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0)) ||
        (lVar5 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar5 == 0)) ||
       (lVar5 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar5 + 0x114) == '\0')) {
      this_00 = gLawnApp;
      lVar5 = FUN_05474184(this + 0x58);
      if (lVar5 == 0) {
        LawnApp::PlayMusic(this_00,"Play_Music_World");
      }
      else {
        pcVar2 = (char *)FUN_0547429c(this + 0x58);
        LawnApp::PlayMusic(this_00,pcVar2);
      }
    }
    else {
      LawnApp::PlayMusic(gLawnApp,"Play_Music_PVP_Battle");
    }
    *(undefined4 *)(this + 0xbc) = 1;
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::GetGargantuarForStage() const */

void StageModule::GetGargantuarForStage(void)

{
  char cVar1;
  IntroArenaTutorialBattleModule *in_x0;
  string *psVar2;
  RtMixedPtr<Sexy::Image> *in_x8;
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)IntroArenaTutorialBattleModule::getMowerAudio(in_x0);
  std::operator+(psVar2,"_gargantuar");
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(in_x8);
  if (cVar1 != '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"tutorial_gargantuar");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::GetBasicZombieType() */

void StageModule::GetBasicZombieType(void)

{
  RtWeakPtrBase *this;
  char cVar1;
  LevelModule *in_x0;
  string *psVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtWeakPtrBase *)(in_x0 + 0x98);
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  cVar1 = Sexy::RtWeakPtrBase::operator!=(this,(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::GetFlagZombieType() */

void StageModule::GetFlagZombieType(void)

{
  RtWeakPtrBase *this;
  char cVar1;
  LevelModule *in_x0;
  string *psVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtWeakPtrBase *)(in_x0 + 0x90);
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  cVar1 = Sexy::RtWeakPtrBase::operator!=(this,(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::GetArmor1ZombieType() */

void StageModule::GetArmor1ZombieType(void)

{
  RtWeakPtrBase *this;
  char cVar1;
  LevelModule *in_x0;
  string *psVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtWeakPtrBase *)(in_x0 + 0xa0);
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  cVar1 = Sexy::RtWeakPtrBase::operator!=(this,(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::GetArmor2ZombieType() */

void StageModule::GetArmor2ZombieType(void)

{
  RtWeakPtrBase *this;
  char cVar1;
  LevelModule *in_x0;
  string *psVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtWeakPtrBase *)(in_x0 + 0xa8);
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  cVar1 = Sexy::RtWeakPtrBase::operator!=(this,(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::GetArmor4ZombieType() */

void StageModule::GetArmor4ZombieType(void)

{
  RtWeakPtrBase *this;
  char cVar1;
  LevelModule *in_x0;
  string *psVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtWeakPtrBase *)(in_x0 + 0xb0);
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  cVar1 = Sexy::RtWeakPtrBase::operator!=(this,(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StageModule::GetZombieTypeForBasicHelm(HelmType) */

_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *
StageModule::GetZombieTypeForBasicHelm
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
          undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    GetBasicZombieType();
    return param_1;
  }
  if (param_3 == 1) {
    GetArmor1ZombieType();
  }
  else if (param_3 == 2) {
    GetArmor2ZombieType();
  }
  else {
    if (param_3 == 0x14) {
      GetArmor4ZombieType();
      return param_1;
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1);
  }
  return param_1;
}


/* StageModule::ResolveZombieType(std::string const&) */

void StageModule::ResolveZombieType(string *param_1)

{
  bool bVar1;
  string *in_x1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  
  bVar1 = std::operator==(in_x1,"basic");
  if (bVar1) {
    GetBasicZombieType();
    return;
  }
  bVar1 = std::operator==(in_x1,"armor1");
  if (bVar1) {
    GetArmor1ZombieType();
  }
  else {
    bVar1 = std::operator==(in_x1,"armor2");
    if (bVar1) {
      GetArmor2ZombieType();
      return;
    }
    bVar1 = std::operator==(in_x1,"armor4");
    if (bVar1) {
      GetArmor4ZombieType();
    }
    else {
      bVar1 = std::operator==(in_x1,"flag");
      if (bVar1) {
        GetFlagZombieType();
      }
      else {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (in_x8);
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::GetGravestoneDefaultType() */

void StageModule::GetGravestoneDefaultType(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  string *psVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  FUN_05475d88(asStack_10,pRVar1 + 0xd0);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::GetRailcartDefaultType() */

void StageModule::GetRailcartDefaultType(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  string *psVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  FUN_05475d88(asStack_10,pRVar1 + 200);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::onZombieAdded(Zombie*) */

void __thiscall StageModule::onZombieAdded(StageModule *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  RtWeakPtrBase *pRVar3;
  int *piVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = (RtWeakPtrBase *)Zombie::GetType(param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar3);
  piVar4 = (int *)std::
                  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                  ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                                *)(this + 0x18),(RtWeakPtr *)aRStack_18);
  iVar2 = *piVar4;
  pcVar5 = *(code **)(*(long *)this + 0xe8);
  iVar1 = iVar2 + 1;
  *piVar4 = iVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  (*pcVar5)(this,aRStack_10,iVar2,iVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::onZombieDied(Zombie*, DamageInfo const*) */

void StageModule::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  int iVar1;
  int iVar2;
  RtWeakPtrBase *pRVar3;
  int *piVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = (RtWeakPtrBase *)Zombie::GetType((Zombie *)param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar3);
  piVar4 = (int *)std::
                  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                  ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                                *)(param_1 + 0x18),(RtWeakPtr *)aRStack_18);
  iVar1 = *piVar4;
  pcVar5 = *(code **)(*(long *)param_1 + 0xe8);
  iVar2 = iVar1 + -1;
  *piVar4 = iVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  (*pcVar5)(param_1,aRStack_10,iVar1,iVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::onZombieTypeCountChange(Sexy::RtWeakPtr<ZombieType const>, int, int) */

void __thiscall
StageModule::onZombieTypeCountChange
          (StageModule *this,RtWeakPtrBase *param_2,int param_3,int param_4)

{
  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
  *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  AudioMgr *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFlagZombieType();
  cVar4 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_28);
  if (cVar4 == '\0') {
    GetBasicZombieType();
    cVar4 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_20);
    if (cVar4 == '\0') {
      GetArmor1ZombieType();
      cVar4 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_18);
      if (cVar4 == '\0') {
        GetArmor2ZombieType();
        cVar4 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (cVar4 == '\0') goto LAB_0446b740;
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  this_00 = (map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
             *)(this + 0x18);
  GetFlagZombieType();
  piVar5 = (int *)std::
                  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                  ::operator[](this_00,(RtWeakPtr *)aRStack_28);
  iVar1 = *piVar5;
  GetBasicZombieType();
  piVar5 = (int *)std::
                  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                  ::operator[](this_00,(RtWeakPtr *)aRStack_20);
  iVar2 = *piVar5;
  GetArmor1ZombieType();
  piVar5 = (int *)std::
                  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                  ::operator[](this_00,(RtWeakPtr *)aRStack_18);
  iVar3 = *piVar5;
  GetArmor2ZombieType();
  piVar5 = (int *)std::
                  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                  ::operator[](this_00,(RtWeakPtr *)aRStack_10);
  iVar1 = iVar1 + iVar2 + iVar3 + *piVar5;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if ((iVar1 == 0) && (0 < param_3)) {
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Stop_Zomb_Switch_Vox_Groan");
  }
  else if ((iVar1 == param_4) && (param_3 == 0)) {
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_Zomb_Switch_Vox_Groan");
  }
  this_01 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SetRTPCValue(this_01,"BasicZombieCount",(double)iVar1);
LAB_0446b740:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall StageModule::AddResourceRequirements(StageModule *this,set *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  size_t __n;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  FUN_05475d88(asStack_30,pRVar2 + 0xb8);
  uVar3 = FUN_0547429c(asStack_30);
  Sexy::StrFormat("Music_MainPath_%s",asStack_28,uVar3);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_28);
  FUN_05475d88(asStack_20,asStack_30);
  getMusicTypeForCurrentLevel(this);
  std::string::append(asStack_18,"MainPath",__n);
  uVar3 = FUN_0547429c(asStack_18);
  uVar4 = FUN_0547429c(asStack_20);
  Sexy::StrFormat("Music_%s_%s",asStack_10,uVar3,uVar4);
  bVar1 = std::operator!=(asStack_10,asStack_28);
  if (bVar1) {
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               asStack_10);
  }
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::string(asStack_10,"PlantsAllAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::registerForEvents() */

void __thiscall StageModule::registerForEvents(StageModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  CBMemberTranslatorX aCStack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,parseImages);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb0);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,stopMusic);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,unregisterObservers);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startAmbientAudio);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startGameStartedMusic);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,stopAmbientAudio);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf8);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addBackgroundToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<StageModule,void(StageModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieAdded);
  local_c0 = local_88;
  local_d0 = local_98;
  uStack_c8 = uStack_90;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<StageModule,void(StageModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_f0 = local_80;
  uStack_e8 = uStack_78;
  local_e0 = local_70;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<StageModule,void(StageModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGamePaused);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GamePaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameUnpaused);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameUnpaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameWon);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameWon,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameLost);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameLost,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHugeWave);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::HugeWave,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHugeWaveComing);
  local_100 = local_58;
  local_110 = local_68;
  uStack_108 = uStack_60;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<StageModule,void(StageModule::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::HugeWaveComing,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWaveStarted);
  local_130 = local_50;
  uStack_128 = uStack_48;
  local_120 = local_40;
  MessageRouter::
  Subscribe<int,WaveType::WaveType,bool,Sexy::CBMemberTranslatorX<StageModule,void(StageModule::*)(int,WaveType::WaveType,bool)>>
            ((MessageRouter *)puVar1,Message::WaveStarted,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf0);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>(aDStack_38,aCStack_b0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelLoadComplete,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::parseImages() */

void __thiscall StageModule::parseImages(StageModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  InfoClass *pIVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  thunk_FUN_05475e00(this + 0x50,pRVar1 + 0x40);
  FUN_05475d88(asStack_40,pRVar1 + 0x48);
  uVar2 = FUN_0547429c(asStack_40);
  uVar3 = FUN_0547429c(pRVar1 + 0x58);
  Sexy::StrFormat("%s_%s",asStack_28,uVar2,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_28);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x60),(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  std::string::~string(asStack_28);
  uVar2 = FUN_0547429c(asStack_40);
  uVar3 = FUN_0547429c(pRVar1 + 0x60);
  Sexy::StrFormat("%s_%s",asStack_28,uVar2,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_28);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  std::string::~string(asStack_28);
  uVar2 = FUN_0547429c(asStack_40);
  uVar3 = FUN_0547429c(pRVar1 + 0x50);
  Sexy::StrFormat("%s_%s",asStack_28,uVar2,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_28);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x70),(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  uVar8 = 0;
  std::string::~string(asStack_28);
  lVar5 = FUN_04467fac(*(undefined8 *)(pRVar1 + 0x70),*(undefined8 *)(pRVar1 + 0x78));
  if (lVar5 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
      uVar2 = FUN_04467fb8(*(undefined8 *)(pRVar1 + 0x70),uVar8);
      FUN_05475d88(asStack_38,uVar2);
      uVar2 = FUN_0547429c(asStack_38);
      Sexy::StrFormat("%s_UNDAMAGED",asStack_30,uVar2);
      pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                         (*(ResourceManager **)(gLawnApp + 0x848),asStack_30);
      if (pIVar4 != (InfoClass *)0x0) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
        push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>
                   *)aRStack_20,(RtWeakPtr *)asStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
      }
      uVar7 = 1;
      std::string::~string(asStack_30);
      while( true ) {
        uVar2 = FUN_0547429c(asStack_38);
        Sexy::StrFormat("%s_DAMAGE%d",asStack_30,uVar2,(ulong)uVar7);
        pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                           (*(ResourceManager **)(gLawnApp + 0x848),asStack_30);
        if (pIVar4 == (InfoClass *)0x0) break;
        uVar7 = uVar7 + 1;
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
        push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>
                   *)aRStack_20,(RtWeakPtr *)asStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
        std::string::~string(asStack_30);
      }
      uVar8 = uVar8 + 1;
      std::string::~string(asStack_30);
      std::
      vector<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>,std::allocator<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>>>
      ::push_back((vector<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>,std::allocator<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>>>
                   *)(this + 0x78),(vector *)aRStack_20);
      std::string::~string(asStack_38);
      std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
      ~vector((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              aRStack_20);
      uVar6 = FUN_04467fac(*(undefined8 *)(pRVar1 + 0x70),*(undefined8 *)(pRVar1 + 0x78));
    } while (uVar8 < uVar6);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModule::onLevelLoaded() */

void __thiscall StageModule::onLevelLoaded(StageModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  InfoClass *pIVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  thunk_FUN_05475e00(this + 0x50,pRVar1 + 0x40);
  FUN_05475d88(asStack_40,pRVar1 + 0x48);
  uVar2 = FUN_0547429c(asStack_40);
  uVar3 = FUN_0547429c(pRVar1 + 0x58);
  Sexy::StrFormat("%s_%s",asStack_28,uVar2,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_28);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x60),(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  std::string::~string(asStack_28);
  uVar2 = FUN_0547429c(asStack_40);
  uVar3 = FUN_0547429c(pRVar1 + 0x60);
  Sexy::StrFormat("%s_%s",asStack_28,uVar2,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_28);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  std::string::~string(asStack_28);
  uVar2 = FUN_0547429c(asStack_40);
  uVar3 = FUN_0547429c(pRVar1 + 0x50);
  Sexy::StrFormat("%s_%s",asStack_28,uVar2,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_28);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x70),(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  uVar8 = 0;
  std::string::~string(asStack_28);
  lVar5 = FUN_04467fac(*(undefined8 *)(pRVar1 + 0x70),*(undefined8 *)(pRVar1 + 0x78));
  if (lVar5 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
      uVar2 = FUN_04467fb8(*(undefined8 *)(pRVar1 + 0x70),uVar8);
      FUN_05475d88(asStack_38,uVar2);
      uVar2 = FUN_0547429c(asStack_38);
      Sexy::StrFormat("%s_UNDAMAGED",asStack_30,uVar2);
      pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                         (*(ResourceManager **)(gLawnApp + 0x848),asStack_30);
      if (pIVar4 != (InfoClass *)0x0) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
        push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>
                   *)aRStack_20,(RtWeakPtr *)asStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
      }
      uVar7 = 1;
      std::string::~string(asStack_30);
      while( true ) {
        uVar2 = FUN_0547429c(asStack_38);
        Sexy::StrFormat("%s_DAMAGE%d",asStack_30,uVar2,(ulong)uVar7);
        pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                           (*(ResourceManager **)(gLawnApp + 0x848),asStack_30);
        if (pIVar4 == (InfoClass *)0x0) break;
        uVar7 = uVar7 + 1;
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
        push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>
                   *)aRStack_20,(RtWeakPtr *)asStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
        std::string::~string(asStack_30);
      }
      uVar8 = uVar8 + 1;
      std::string::~string(asStack_30);
      std::
      vector<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>,std::allocator<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>>>
      ::push_back((vector<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>,std::allocator<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>>>
                   *)(this + 0x78),(vector *)aRStack_20);
      std::string::~string(asStack_38);
      std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
      ~vector((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              aRStack_20);
      uVar6 = FUN_04467fac(*(undefined8 *)(pRVar1 + 0x70),*(undefined8 *)(pRVar1 + 0x78));
    } while (uVar8 < uVar6);
  }
  std::string::~string(asStack_40);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StageModule::onPostLoad() */

void __thiscall StageModule::onPostLoad(StageModule *this)

{
  undefined4 uVar1;
  
  parseImages(this);
  uVar1 = *(undefined4 *)(this + 0xbc);
  (**(code **)(*(long *)this + 0xb0))(this);
  setStageMusicState(this,uVar1);
  return;
}

