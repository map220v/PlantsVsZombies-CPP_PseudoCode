// Class: PlaybackModule


/* PlaybackModule::onGameEnded() */

void PlaybackModule::onGameEnded(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackModule::StaticClassInit() */

void PlaybackModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlaybackModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04ac3cf8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlaybackModule::StaticGetClass() */

long * PlaybackModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlaybackModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlaybackModule::initializeModule() */

void PlaybackModule::initializeModule(void)

{
  long lVar1;
  PlaybackManager *this;
  
  Sexy::OutputDebugStrF((wchar_t *)"PlaybackModule::initializeModule");
  lVar1 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  lVar1 = FUN_04ac35f4(*(undefined8 *)(lVar1 + 8));
  if (lVar1 != 0) {
    lVar1 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    FUN_04ac3610(lVar1 + 0x40,2);
    return;
  }
  this = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  PlaybackManager::SetCurrentData(this,0);
  lVar1 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  FUN_04ac3610(lVar1 + 0x40,1);
  return;
}


/* PlaybackModule::onEndLevel() */

void PlaybackModule::onEndLevel(void)

{
  PlaybackManager *this;
  
  this = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  PlaybackManager::EndPlayback(this);
  return;
}


/* PlaybackModule::onNotifyBattleEndingNetworkError() */

void PlaybackModule::onNotifyBattleEndingNetworkError(void)

{
  PlaybackManager *this;
  
  this = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  PlaybackManager::EndPlayback(this);
  return;
}


/* PlaybackModule::onMessageBoxCallback(UIMessageBox*, int) */

void __thiscall
PlaybackModule::onMessageBoxCallback(PlaybackModule *this,UIMessageBox *param_1,int param_2)

{
  char cVar1;
  INetworkMsgProcess *this_00;
  PVPManager *pPVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 == 1) {
    lVar3 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    cVar1 = FUN_04ac3604(*(undefined4 *)(lVar3 + 0x40));
    if (cVar1 == '\0') {
      if (*(long *)(this + 0x30) == 0) {
        plVar4 = (long *)UIMessageBox::GetButtonOK(param_1);
        (**(code **)(*plVar4 + 0x188))(plVar4,1);
        return;
      }
      pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::StartBattleReplay(pPVar2,*(ulong *)(this + 0x30));
    }
    else {
      (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
    }
  }
  else {
    this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    INetworkMsgProcess::RequestPVPTrainingInfos(this_00);
    pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::EndArenaBattle(pPVar2,true);
  }
  (**(code **)(*(long *)param_1 + 0x318))(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackModule::setSeedBankClickable(PVPSeedBank*, bool) */

void __thiscall
PlaybackModule::setSeedBankClickable(PlaybackModule *this,PVPSeedBank *param_1,bool param_2)

{
  int iVar1;
  char cVar2;
  UIWidget *this_00;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PVPSeedBank *)0x0) {
    cVar2 = FUN_04ac362c(param_1[0x199]);
    iVar1 = (int)cVar2;
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        while( true ) {
          UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)param_1,iVar3);
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
          if (cVar2 == '\0') break;
          iVar3 = iVar3 + 1;
          this_00 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          UIWidget::SetClickable(this_00,param_2);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          if (iVar1 == iVar3) goto LAB_04ac3fdc;
        }
        iVar3 = iVar3 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      } while (iVar1 != iVar3);
    }
  }
LAB_04ac3fdc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackModule::onNotifyBattleStart() */

void __thiscall PlaybackModule::onNotifyBattleStart(PlaybackModule *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  PlaybackManager *this_01;
  long lVar5;
  PlaybackData *this_02;
  PVPManager *this_03;
  undefined8 *puVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 auStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  PlaybackManager::StartPlayback(this_01);
  lVar5 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  cVar1 = FUN_04ac35f8(*(undefined4 *)(lVar5 + 0x40));
  if (cVar1 != '\0') {
    lVar5 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    this_02 = (PlaybackData *)FUN_04ac35f4(*(undefined8 *)(lVar5 + 8));
    if (this_02 != (PlaybackData *)0x0) {
      PlaybackData::ClearData(this_02);
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x18);
      this_03 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::RefreshBattleDataTo(this_03,this_02);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar2) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        PlaybackData::AddTrigger(this_02,(PTrigger *)*puVar6);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      }
      std::vector<PTrigger*,std::allocator<PTrigger*>>::clear
                ((vector<PTrigger*,std::allocator<PTrigger*>> *)this_00);
      lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar3 = FUN_04ac361c(*(undefined4 *)(lVar5 + 0x128));
      *(int *)(this_02 + 0xf4) = iVar3;
      this_02[0xf0] = (PlaybackData)0x1;
      if (iVar3 == 1) {
        Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        PVPManager::GetCurrentDefenderInfo();
        FUN_054766c8(this_02 + 0x100,(NameEffectStruct *)&local_48);
        std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                  ((pair<std::wstring_const,Sexy::DataElement*> *)&local_48);
      }
      else {
        lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04ac3620(*(undefined4 *)(lVar5 + 0x16c));
        lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        iVar3 = FUN_04ac3624(*(undefined4 *)(lVar5 + 0x170));
        iVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        PVPManager::GetPVPMapData(iVar4,iVar3);
        thunk_FUN_05477b9c(this_02 + 0x100,auStack_38);
        *(undefined4 *)(this_02 + 0x88) = local_40;
        NameEffectStruct::~NameEffectStruct((NameEffectStruct *)&local_48);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackModule::endPlaying() */

void __thiscall PlaybackModule::endPlaying(PlaybackModule *this)

{
  long lVar1;
  LevelModuleManager *this_00;
  UIMessageBox *this_01;
  long lVar2;
  string asStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  wstring awStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  lVar1 = FUN_04ac35f4(*(undefined8 *)(lVar1 + 8));
  if (lVar1 != 0) {
    *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x880) = 8;
    MessageRouter::Post((_func_void *)gMessageRouter);
    this_00 = (LevelModuleManager *)
              FUN_04ac35f0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    LevelModuleManager::OnGameplayEnded(this_00);
    this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_01 != (UIMessageBox *)0x0) {
      std::string::string(asStack_68,"[PVP_PLAYBACK_TIP]");
      StringHelper::ToStringValue(asStack_68);
      std::string::string(asStack_58,"[SUMMARY_NOTICE]");
      StringHelper::ToStringValue(asStack_58);
      UIMessageBox::SetMessage(this_01,awStack_60,awStack_50);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
      FUN_05476c50(awStack_60);
      std::string::~string(asStack_68);
      nop();
      UIMessageBox::SetShowType(this_01,6);
      lVar2 = UIMessageBox::GetButtonOK(this_01);
      std::string::string(asStack_58,"[PVP_PLAYBACK_REPLAY]");
      StringHelper::ToStringValue(asStack_58);
      FUN_054766c8(lVar2 + 0xd8,awStack_50);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
      lVar2 = UIMessageBox::GetButtonCancel(this_01);
      std::string::string(asStack_58,"[PVP_PLAYBACK_RETURN]");
      StringHelper::ToStringValue(asStack_58);
      FUN_054766c8(lVar2 + 0xd8,awStack_50);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onMessageBoxCallback);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<PlaybackModule,void(PlaybackModule::*)(UIMessageBox*,int)>(aDStack_38,awStack_50);
      UIMessageBox::SetCallback(this_01,aDStack_38);
      *(undefined8 *)(this + 0x30) = *(undefined8 *)(lVar1 + 0xe8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlaybackModule::onUpdate() */

void __thiscall PlaybackModule::onUpdate(PlaybackModule *this)

{
  char cVar1;
  long lVar2;
  PlaybackData *this_00;
  PlaybackManager *this_01;
  
  lVar2 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  this_00 = (PlaybackData *)FUN_04ac35f4(*(undefined8 *)(lVar2 + 8));
  if (this_00 != (PlaybackData *)0x0) {
    PlaybackData::Update(this_00);
    cVar1 = PlaybackData::IsPlayingEnd(this_00);
    if (cVar1 != '\0') {
      endPlaying(this);
      this_01 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
      PlaybackManager::EndPlayback(this_01);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackModule::onArenaEndingButtonPressed() */

void __thiscall PlaybackModule::onArenaEndingButtonPressed(PlaybackModule *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  UIMessageBox *this_00;
  string asStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  wstring awStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  lVar2 = FUN_04ac35f4(*(undefined8 *)(lVar2 + 8));
  if (lVar2 != 0) {
    lVar3 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    cVar1 = FUN_04ac3604(*(undefined4 *)(lVar3 + 0x40));
    if ((cVar1 != '\0') &&
       (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
       this_00 != (UIMessageBox *)0x0)) {
      Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
      (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
      std::string::string(asStack_68,"[PVP_PLAYBACK_TIP_PAUSE]");
      StringHelper::ToStringValue(asStack_68);
      std::string::string(asStack_58,"[SUMMARY_NOTICE]");
      StringHelper::ToStringValue(asStack_58);
      UIMessageBox::SetMessage(this_00,awStack_60,awStack_50);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
      FUN_05476c50(awStack_60);
      std::string::~string(asStack_68);
      nop();
      UIMessageBox::SetShowType(this_00,6);
      lVar3 = UIMessageBox::GetButtonOK(this_00);
      std::string::string(asStack_58,"[PVP_PLAYBACK_CONTINUE]");
      StringHelper::ToStringValue(asStack_58);
      FUN_054766c8(lVar3 + 0xd8,awStack_50);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_00);
      std::string::string(asStack_58,"[PVP_PLAYBACK_RETURN]");
      StringHelper::ToStringValue(asStack_58);
      FUN_054766c8(lVar3 + 0xd8,awStack_50);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onMessageBoxCallback);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<PlaybackModule,void(PlaybackModule::*)(UIMessageBox*,int)>(aDStack_38,awStack_50);
      UIMessageBox::SetCallback(this_00,aDStack_38);
      *(undefined8 *)(this + 0x30) = *(undefined8 *)(lVar2 + 0xe8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlaybackModule::PlaybackModule() */

void __thiscall PlaybackModule::PlaybackModule(PlaybackModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06949020;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 1;
  return;
}


/* PlaybackModule::StaticNew() */

PlaybackModule * PlaybackModule::StaticNew(void)

{
  PlaybackModule *this;
  
  this = ::operator_new(0x40);
  PlaybackModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackModule::onGameStarted() */

void __thiscall PlaybackModule::onGameStarted(PlaybackModule *this)

{
  char cVar1;
  long lVar2;
  PlaybackManager *this_00;
  ResourceInfo *pRVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  cVar1 = FUN_04ac3604(*(undefined4 *)(lVar2 + 0x40));
  if (cVar1 != '\0') {
    this_00 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    PlaybackManager::StartPlayback(this_00);
    Sexy::SRand(0);
    lVar2 = FUN_04ac4a90(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (lVar2 != 0) {
      PVPSeedBankModule::GetSkillSeedBank();
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      setSeedBankClickable(this,(PVPSeedBank *)pRVar3,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      PVPSeedBankModule::GetZombieSeedBank();
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      setSeedBankClickable(this,(PVPSeedBank *)pRVar3,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackModule::~PlaybackModule() */

void __thiscall PlaybackModule::~PlaybackModule(PlaybackModule *this)

{
  bool bVar1;
  long *plVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  *(undefined ***)this = &PTR_GetModuleClass_06949020;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<PTrigger*,std::allocator<PTrigger*>>::clear
            ((vector<PTrigger*,std::allocator<PTrigger*>> *)this_00);
  std::vector<PTrigger*,std::allocator<PTrigger*>>::~vector
            ((vector<PTrigger*,std::allocator<PTrigger*>> *)this_00);
  LevelModule::~LevelModule((LevelModule *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlaybackModule::~PlaybackModule() */

void __thiscall PlaybackModule::~PlaybackModule(PlaybackModule *this)

{
  ~PlaybackModule(this);
  AK::FreeHook(this);
  return;
}


/* PlaybackModule::onNotifyBattleEnd(bool, int) */

void PlaybackModule::onNotifyBattleEnd(bool param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  PlaybackManager *pPVar4;
  long lVar5;
  PlaybackData *this;
  PVPManager *pPVar6;
  uint *puVar7;
  undefined8 uVar8;
  vector *pvVar9;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auVar10 [16];
  
  if ((param_2 & 0xffU) != 0) {
    lVar5 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    cVar2 = FUN_04ac35f8(*(undefined4 *)(lVar5 + 0x40));
    if (cVar2 != '\0') {
      lVar5 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
      this = (PlaybackData *)FUN_04ac35f4(*(undefined8 *)(lVar5 + 8));
      if (this != (PlaybackData *)0x0) {
        pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        puVar7 = (uint *)PVPManager::GetChangedCurrency(pPVar6);
        uVar1 = (int)*puVar7 >> 0x1f;
        *(uint *)(this + 0x118) = (*puVar7 ^ uVar1) - uVar1;
        pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        lVar5 = PVPManager::GetChangedCurrency(pPVar6);
        uVar1 = (int)*(uint *)(lVar5 + 4) >> 0x1f;
        *(uint *)(this + 0x11c) = (*(uint *)(lVar5 + 4) ^ uVar1) - uVar1;
        pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        lVar5 = PVPManager::GetChangedCurrency(pPVar6);
        uVar1 = (int)*(uint *)(lVar5 + 8) >> 0x1f;
        *(uint *)(this + 0x114) = (*(uint *)(lVar5 + 8) ^ uVar1) - uVar1;
        auVar10 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
        uVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (auVar10._0_8_,auVar10._8_8_,in_x2,in_x3,in_x4);
        *(undefined4 *)(this + 0xf8) = uVar3;
        lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        lVar5 = FUN_04ac3628(*(undefined8 *)(lVar5 + 0x180));
        *(uint *)(this + 0x120) = (uint)(lVar5 != 0);
        lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        uVar8 = FUN_04ac3628(*(undefined8 *)(lVar5 + 0x180));
        *(undefined8 *)(this + 0x128) = uVar8;
        pPVar6 = (PVPManager *)FUN_04ac4b88(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        if (pPVar6 != (PVPManager *)0x0) {
          pvVar9 = (vector *)PVPManager::GetSkillDatas(pPVar6);
          std::vector<ZombieRecord,std::allocator<ZombieRecord>>::operator=
                    ((vector<ZombieRecord,std::allocator<ZombieRecord>> *)(this + 200),pvVar9);
          uVar3 = FUN_04ac3618(*(undefined4 *)(pPVar6 + 0x90));
          *(undefined4 *)(this + 0x110) = uVar3;
        }
        PlaybackData::SaveToServer(this);
        lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04ac36ac(lVar5 + 0x180);
        pPVar4 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
        PlaybackManager::EndPlayback(pPVar4);
        return;
      }
    }
  }
  pPVar4 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  PlaybackManager::EndPlayback(pPVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackModule::registerForEvents() */

void __thiscall PlaybackModule::registerForEvents(PlaybackModule *this)

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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
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
            ((ReceivedDataCallback *)this,onGameStarted);
  Sexy::Delegate0::Delegate0<PlaybackModule,void(PlaybackModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameEnded);
  Sexy::Delegate0::Delegate0<PlaybackModule,void(PlaybackModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<PlaybackModule,void(PlaybackModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::Delegate0<PlaybackModule,void(PlaybackModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBattleStart);
  Sexy::Delegate0::Delegate0<PlaybackModule,void(PlaybackModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PVPBattleStart,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBattleEnd);
  local_d0 = local_b0;
  uStack_c8 = uStack_a8;
  local_c0 = local_a0;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<PlaybackModule,void(PlaybackModule::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::PVPBattleEnding,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBattleEndingNetworkError);
  Sexy::Delegate0::Delegate0<PlaybackModule,void(PlaybackModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyBattleEndingNetworkError,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombiePlanted);
  local_e0 = local_88;
  local_f0 = local_98;
  uStack_e8 = uStack_90;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PlaybackModule,void(PlaybackModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombiePlanted,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPSkillUsed);
  local_110 = local_80;
  uStack_108 = uStack_78;
  local_100 = local_70;
  MessageRouter::
  Subscribe<Zombie*,int,Sexy::CBMemberTranslatorX<PlaybackModule,void(PlaybackModule::*)(Zombie*,int)>>
            ((MessageRouter *)puVar1,Message::PVPSkillUsed,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyPlantfoodUsed);
  local_120 = local_58;
  local_130 = local_68;
  uStack_128 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlaybackModule,void(PlaybackModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::NotifyPlantfoodUsed,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onArenaEndingButtonPressed);
  Sexy::Delegate0::Delegate0<PlaybackModule,void(PlaybackModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArenaEndingButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombiePlaybackAddParams);
  local_110 = local_50;
  uStack_108 = uStack_48;
  local_100 = local_40;
  MessageRouter::
  Subscribe<Zombie*,int,Sexy::CBMemberTranslatorX<PlaybackModule,void(PlaybackModule::*)(Zombie*,int)>>
            ((MessageRouter *)puVar1,Message::ZombiePlaybackAddParams,&local_110);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlaybackModule::addTrigger(PTrigger*) */

void __thiscall PlaybackModule::addTrigger(PlaybackModule *this,PTrigger *param_1)

{
  int iVar1;
  long lVar2;
  PlaybackData *this_00;
  PTrigger *local_8;
  
  local_8 = param_1;
  lVar2 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  this_00 = (PlaybackData *)FUN_04ac35f4(*(undefined8 *)(lVar2 + 8));
  if ((this_00 != (PlaybackData *)0x0) &&
     (iVar1 = FUN_04ac35e0(*(undefined4 *)(this_00 + 0x2c)), iVar1 != 0)) {
    PlaybackData::AddTrigger(this_00,local_8);
    return;
  }
  std::vector<PTrigger*,std::allocator<PTrigger*>>::push_back
            ((vector<PTrigger*,std::allocator<PTrigger*>> *)(this + 0x18),&local_8);
  return;
}


/* PlaybackModule::onZombiePlanted(Zombie*) */

void __thiscall PlaybackModule::onZombiePlanted(PlaybackModule *this,Zombie *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  PTriggerZombiePlaced *this_00;
  
  if (param_1 != (Zombie *)0x0) {
    lVar3 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    cVar2 = FUN_04ac35f8(*(undefined4 *)(lVar3 + 0x40));
    if (cVar2 != '\0') {
      lVar3 = PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)param_1);
      iVar1 = *(int *)(this + 0x38);
      *(int *)(this + 0x38) = iVar1 + 1;
      FUN_04ac35e8(lVar3 + 0x30,iVar1);
      this_00 = ::operator_new(0x28);
      PTriggerZombiePlaced::PTriggerZombiePlaced(this_00);
      PTriggerZombiePlaced::SetZombie(this_00,param_1);
      addTrigger(this,(PTrigger *)this_00);
      return;
    }
    lVar3 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    cVar2 = FUN_04ac3604(*(undefined4 *)(lVar3 + 0x40));
    if (cVar2 != '\0') {
      lVar3 = PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)param_1);
      FUN_04ac36b4(lVar3 + 0x34);
      return;
    }
  }
  return;
}


/* PlaybackModule::onZombiePlaybackAddParams(Zombie*, int) */

void __thiscall
PlaybackModule::onZombiePlaybackAddParams(PlaybackModule *this,Zombie *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  PTriggerZombieAddParams *this_00;
  map *extraout_x0;
  
  if ((param_1 != (Zombie *)0x0) && (param_2 != 0)) {
    lVar3 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    cVar1 = FUN_04ac35f8(*(undefined4 *)(lVar3 + 0x40));
    if (cVar1 != '\0') {
      lVar3 = PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)param_1);
      this_00 = ::operator_new(0x30);
      PTriggerZombieAddParams::PTriggerZombieAddParams(this_00);
      uVar2 = FUN_04ac35e4(*(undefined4 *)(lVar3 + 0x30));
      FUN_04ac35d8(this_00 + 0xc,uVar2);
      nop();
      PTriggerZombieAddParams::SetParams(this_00,param_2,extraout_x0);
      addTrigger(this,(PTrigger *)this_00);
      if (*(code **)(*(long *)param_1 + 0x9e0) != Zombie::ClearPlaybackParams) {
        (**(code **)(*(long *)param_1 + 0x9e0))(param_1,param_2);
        return;
      }
    }
  }
  return;
}


/* PlaybackModule::onPVPSkillUsed(Zombie*, int) */

void __thiscall PlaybackModule::onPVPSkillUsed(PlaybackModule *this,Zombie *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  PTriggerSkillUsed *this_00;
  
  if (param_1 != (Zombie *)0x0) {
    lVar2 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    cVar1 = FUN_04ac35f8(*(undefined4 *)(lVar2 + 0x40));
    if (cVar1 != '\0') {
      this_00 = ::operator_new(0x28);
      PTriggerSkillUsed::PTriggerSkillUsed(this_00);
      PTriggerSkillUsed::SetSkill(this_00,param_1,param_2);
      addTrigger(this,(PTrigger *)this_00);
      return;
    }
    lVar2 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    cVar1 = FUN_04ac3604(*(undefined4 *)(lVar2 + 0x40));
    if (cVar1 != '\0') {
      lVar2 = PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)param_1);
      FUN_04ac36b4(lVar2 + 0x34);
      return;
    }
  }
  return;
}


/* PlaybackModule::onNotifyPlantfoodUsed(Plant*) */

void __thiscall PlaybackModule::onNotifyPlantfoodUsed(PlaybackModule *this,Plant *param_1)

{
  char cVar1;
  long lVar2;
  PTriggerPlantfood *this_00;
  
  lVar2 = Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  cVar1 = FUN_04ac35f8(*(undefined4 *)(lVar2 + 0x40));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = ::operator_new(0x18);
  PTriggerPlantfood::PTriggerPlantfood(this_00);
  PTriggerPlantfood::SetPlant(this_00,param_1);
  addTrigger(this,(PTrigger *)this_00);
  return;
}

