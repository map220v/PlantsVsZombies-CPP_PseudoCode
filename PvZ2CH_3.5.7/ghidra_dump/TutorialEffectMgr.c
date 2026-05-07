// Class: TutorialEffectMgr


/* TutorialEffectMgr::Draw(Sexy::Graphics*) */

void __thiscall TutorialEffectMgr::Draw(TutorialEffectMgr *this,Graphics *param_1)

{
  long *plVar1;
  
  if (this[0x38] != (TutorialEffectMgr)0x0) {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  }
  plVar1 = *(long **)(this + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xe8))(plVar1,param_1);
  }
  AnimationMgr::InnerDraw((AnimationMgr *)(this + 0x40),param_1);
  return;
}


/* TutorialEffectMgr::Update() */

void __thiscall TutorialEffectMgr::Update(TutorialEffectMgr *this)

{
  if (*(TutorialIconEffect **)(this + 8) != (TutorialIconEffect *)0x0) {
    TutorialIconEffect::onUpdate(*(TutorialIconEffect **)(this + 8));
  }
  DataPersistorFactory::GetOfflinePersistor((DataPersistorFactory *)(this + 0x10));
  AnimationMgr::Update((AnimationMgr *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialEffectMgr::TryRemoveIconEffect() */

void __thiscall TutorialEffectMgr::TryRemoveIconEffect(TutorialEffectMgr *this)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 8) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar2 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined8 *)(this + 8) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialEffectMgr::DisplayAdvice(std::string const&) */

void __thiscall TutorialEffectMgr::DisplayAdvice(TutorialEffectMgr *this,string *param_1)

{
  AnimationMgr *pAVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AnimationMgr::Clear((AnimationMgr *)(this + 0x40));
  FUN_044b41bc(this + 0x50);
  pAVar1 = (AnimationMgr *)FUN_044b41c8(*(undefined4 *)(this + 0x50));
  Sexy::UTF8StringToWString((Sexy *)param_1,param_1);
  ShowAdvice::Create(aRStack_10,7);
  FUN_05476c50(aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  AnimationMgr::Add(pAVar1,(AnimationMgr *)(this + 0x40),aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialEffectMgr::TutorialEffectMgr() */

void __thiscall TutorialEffectMgr::TutorialEffectMgr(TutorialEffectMgr *this)

{
  Sexy::LazySingleton<TutorialEffectMgr>::LazySingleton((LazySingleton<TutorialEffectMgr> *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__TutorialEffectMgr_06853480;
  ForeverSequentialActionRunner::ForeverSequentialActionRunner
            ((ForeverSequentialActionRunner *)(this + 0x10));
  this[0x38] = (TutorialEffectMgr)0x0;
  *(undefined4 *)(this + 0x3c) = 0;
  AnimationMgr::AnimationMgr((AnimationMgr *)(this + 0x40));
  this[0x70] = (TutorialEffectMgr)0x0;
  RunnableAction::Begin((RunnableAction *)(this + 0x10));
  return;
}


/* TutorialEffectMgr::NotifyTutorialEffectEnd() */

void __thiscall TutorialEffectMgr::NotifyTutorialEffectEnd(TutorialEffectMgr *this)

{
  this[0x70] = (TutorialEffectMgr)0x0;
  MessageRouter::Post<int,TutorialIconType>
            ((MessageRouter *)gMessageRouter,Message::NotifyTutorialEffectEnd,
             *(undefined4 *)(this + 0x3c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialEffectMgr::IsSpecialIconType(TutorialIconType) */

void __thiscall TutorialEffectMgr::IsSpecialIconType(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  local_18 = std::
             map<TutorialIconType,SpecialIconData,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,SpecialIconData>>>
             ::find((map<TutorialIconType,SpecialIconData,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,SpecialIconData>>>
                     *)&DAT_06b0cd40,(TutorialIconType *)local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)&DAT_06b0cd40);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* TutorialEffectMgr::GetActivityIdByIconType(TutorialIconType) */

undefined4 __thiscall
TutorialEffectMgr::GetActivityIdByIconType(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = param_2;
  puVar1 = (undefined4 *)
           std::
           map<TutorialIconType,HomeActityType,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,HomeActityType>>>
           ::operator[]((map<TutorialIconType,HomeActityType,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,HomeActityType>>>
                         *)&DAT_06b0cd10,(TutorialIconType *)&local_4);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialEffectMgr::GetIconPositionByIconType(TutorialIconType) */

void __thiscall
TutorialEffectMgr::GetIconPositionByIconType(TutorialEffectMgr *this,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  TPoint *pTVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  undefined4 local_54 [3];
  undefined4 local_48;
  undefined4 local_44;
  string asStack_40 [8];
  string asStack_38 [8];
  float local_30;
  float local_2c;
  ulong local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_54[0] = param_2;
  pTVar5 = (TPoint *)
           std::
           map<TutorialIconType,Sexy::Point,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,Sexy::Point>>>
           ::operator[]((map<TutorialIconType,Sexy::Point,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,Sexy::Point>>>
                         *)&DAT_06b0cbe8,(TutorialIconType *)local_54);
  Sexy::Point::Point((Point *)&local_48,pTVar5);
  uVar6 = std::
          map<TutorialIconType,std::string,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,std::string>>>
          ::operator[]((map<TutorialIconType,std::string,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,std::string>>>
                        *)&DAT_06b0cc68,(TutorialIconType *)local_54);
  FUN_05475d88(asStack_40,uVar6);
  plVar7 = (long *)UIWidget::GetWidgetBySheetName(asStack_40);
  if (plVar7 == (long *)0x0) {
    cVar2 = IsSpecialIconType(this,local_54[0]);
    if (cVar2 == '\0') {
      puVar9 = (undefined4 *)
               std::
               map<TutorialIconType,HomeActityType,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,HomeActityType>>>
               ::operator[]((map<TutorialIconType,HomeActityType,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,HomeActityType>>>
                             *)&DAT_06b0cd10,(TutorialIconType *)local_54);
      uVar1 = *puVar9;
      std::string::string(asStack_38,"");
      nop();
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_30);
      LawnApp::GetRelativeParentPosition(gLawnApp,uVar1,(ResistenceValueInfo *)&local_30,asStack_38)
      ;
      iVar3 = FUN_044b437c(local_48);
      iVar4 = FUN_044b437c(local_44);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)&local_28,(float)iVar3 + local_30,(float)iVar4 + local_2c,0.0);
      local_18 = local_28;
      local_10 = local_20;
      std::string::~string(asStack_38);
      goto LAB_044b9344;
    }
    lVar8 = LawnApp::GetChoosePlantsDialog(gLawnApp);
    if (lVar8 == 0) {
      fVar11 = 0.0;
      fVar10 = 0.0;
    }
    else {
      std::
      map<TutorialIconType,SpecialIconData,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,SpecialIconData>>>
      ::operator[]((map<TutorialIconType,SpecialIconData,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,SpecialIconData>>>
                    *)&DAT_06b0cd40,(TutorialIconType *)local_54);
      WorldMapChooseDialog::GetButtonPosition((int)lVar8);
      iVar3 = FUN_044b437c(local_48);
      iVar4 = FUN_044b437c(local_44);
      fVar10 = (float)((int)local_30 + iVar3);
      fVar11 = (float)((int)local_2c + iVar4);
    }
  }
  else {
    (**(code **)(*plVar7 + 0xb0))(&local_30);
    iVar3 = FUN_044b437c(local_48);
    iVar4 = FUN_044b437c(local_44);
    fVar10 = (float)((int)local_30 + iVar3);
    fVar11 = (float)((int)local_2c + iVar4);
  }
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,fVar10,fVar11,0.0);
  local_18 = local_28;
  local_10 = local_20;
LAB_044b9344:
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18 & 0xffffffff,local_18._4_4_,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialEffectMgr::BuildActions(TutorialIconType) */

void __thiscall TutorialEffectMgr::BuildActions(TutorialEffectMgr *this,undefined4 param_2)

{
  SequentialActionRunner *this_00;
  TutorialIconAppearAction *this_01;
  void *pvVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x28);
  SequentialActionRunner::SequentialActionRunner(this_00);
  pcVar2 = *(code **)(*(long *)this_00 + 0x28);
  this_01 = ::operator_new(0x20);
  TutorialIconAppearAction::TutorialIconAppearAction
            (this_01,_FUN_044b9608,*(TutorialIconEffect **)(this + 8));
  (*pcVar2)(this_00,this_01);
  pcVar2 = *(code **)(*(long *)this_00 + 0x28);
  pvVar1 = ::operator_new(0x30);
  uVar3 = 0x3fc00000;
  uVar4 = 0x40400000;
  TutorialIconScaleAction::TutorialIconScaleAction
            ((TutorialIconScaleAction *)0x0,pvVar1,5,*(undefined8 *)(this + 8));
  (*pcVar2)(this_00,pvVar1);
  pcVar2 = *(code **)(*(long *)this_00 + 0x28);
  local_18 = GetIconPositionByIconType(this,param_2);
  local_14 = uVar3;
  local_10 = uVar4;
  pvVar1 = ::operator_new(0x48);
  TutorialIconMoveScaleAction::TutorialIconMoveScaleAction
            ((TutorialIconMoveScaleAction *)0x3fc00000,0x3f800000,0x3f800000,pvVar1,5,
             *(undefined8 *)(this + 8),&local_18);
  (*pcVar2)(this_00,pvVar1);
  SequentialActionRunner::Add((SequentialActionRunner *)(this + 0x10),(RunnableAction *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialEffectMgr::GetImageTypeByIconType(TutorialIconType) */

void TutorialEffectMgr::GetImageTypeByIconType
               (undefined8 param_1,TutorialEffectMgr *param_2,undefined4 param_3)

{
  UIWidgetSheet *pUVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  RtObject *this;
  UIWidgetSheet *pUVar6;
  undefined4 *puVar7;
  undefined4 local_24;
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24 = param_3;
  uVar4 = std::
          map<TutorialIconType,std::string,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,std::string>>>
          ::operator[]((map<TutorialIconType,std::string,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,std::string>>>
                        *)&DAT_06b0cc68,(TutorialIconType *)&local_24);
  FUN_05475d88(asStack_20,uVar4);
  lVar5 = UIWidget::GetWidgetBySheetName(asStack_20);
  if (lVar5 == 0) {
    cVar3 = IsSpecialIconType(param_2,local_24);
    if (cVar3 == '\0') {
      puVar7 = (undefined4 *)
               std::
               map<TutorialIconType,HomeActityType,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,HomeActityType>>>
               ::operator[]((map<TutorialIconType,HomeActityType,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,HomeActityType>>>
                             *)&DAT_06b0cd10,(TutorialIconType *)&local_24);
      uVar2 = *puVar7;
      std::string::string(asStack_18,"");
      nop();
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)aRStack_10);
      LawnApp::GetRelativeParentPosition
                (gLawnApp,uVar2,(ResistenceValueInfo *)aRStack_10,asStack_18);
      FUN_05474148(param_1,asStack_18);
      std::string::~string(asStack_18);
    }
    else {
      lVar5 = std::
              map<TutorialIconType,SpecialIconData,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,SpecialIconData>>>
              ::operator[]((map<TutorialIconType,SpecialIconData,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,SpecialIconData>>>
                            *)&DAT_06b0cd40,(TutorialIconType *)&local_24);
      FUN_05475d88(param_1,lVar5 + 8);
    }
  }
  else {
    PlantImitater::GetImitatedPlant();
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pUVar6 = Sexy::RtObject::Cast<UIWidgetSheet>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar3 = FUN_0547419c(pUVar6 + 0x38);
    pUVar1 = pUVar6 + 0x38;
    if (cVar3 != '\0') {
      pUVar1 = pUVar6 + 0x50;
    }
    FUN_05475d88(param_1,pUVar1);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialEffectMgr::BuildIcon(TutorialIconType) */

void __thiscall TutorialEffectMgr::BuildIcon(TutorialEffectMgr *this,undefined8 param_2)

{
  TutorialIconEffect *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TryRemoveIconEffect(this);
  this_00 = GameObject::Create<TutorialIconEffect>();
  GetImageTypeByIconType(asStack_10,this,param_2);
  TutorialIconEffect::initializeRenderEffect(this_00,asStack_10);
  std::string::~string(asStack_10);
  std::string::string(asStack_10,"POPANIM_EFFECTS_LOTTERY_RESULT_BG");
  TutorialIconEffect::initializeBackgroundRenderEffect(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  TutorialIconEffect::SetIsHidden(this_00,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* TutorialEffectMgr::GetSpecialIconType(TutorialIconType) */

undefined4 __thiscall TutorialEffectMgr::GetSpecialIconType(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = param_2;
  puVar1 = (undefined4 *)
           std::
           map<TutorialIconType,SpecialIconData,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,SpecialIconData>>>
           ::operator[]((map<TutorialIconType,SpecialIconData,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,SpecialIconData>>>
                         *)&DAT_06b0cd40,(TutorialIconType *)&local_4);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialEffectMgr::ShowOriginalIcon(bool) */

void __thiscall TutorialEffectMgr::ShowOriginalIcon(TutorialEffectMgr *this,bool param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  UIWidget *this_00;
  WorldMapChooseDialog *this_01;
  long *plVar5;
  undefined4 *puVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = std::
          map<TutorialIconType,std::string,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,std::string>>>
          ::operator[]((map<TutorialIconType,std::string,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,std::string>>>
                        *)&DAT_06b0cc68,(TutorialIconType *)(this + 0x3c));
  FUN_05475d88(asStack_10,uVar4);
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  if (this_00 == (UIWidget *)0x0) {
    cVar2 = IsSpecialIconType(this,*(undefined4 *)(this + 0x3c));
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      puVar6 = (undefined4 *)
               std::
               map<TutorialIconType,HomeActityType,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,HomeActityType>>>
               ::operator[]((map<TutorialIconType,HomeActityType,std::less<TutorialIconType>,std::allocator<std::pair<TutorialIconType_const,HomeActityType>>>
                             *)&DAT_06b0cd10,(TutorialIconType *)(this + 0x3c));
      LawnApp::ShowActivityInnerWidget(pLVar1,*puVar6,param_1);
    }
    else {
      this_01 = (WorldMapChooseDialog *)LawnApp::GetChoosePlantsDialog(gLawnApp);
      if (this_01 != (WorldMapChooseDialog *)0x0) {
        iVar3 = GetSpecialIconType(this,*(undefined4 *)(this + 0x3c));
        plVar5 = (long *)WorldMapChooseDialog::GetButton(this_01,iVar3);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x158))(plVar5,param_1);
        }
      }
    }
  }
  else {
    UIWidget::SetVisible(this_00,param_1);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialEffectMgr::TriggerIconEffect(TutorialIconType) */

void __thiscall TutorialEffectMgr::TriggerIconEffect(TutorialEffectMgr *this,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = SequentialActionRunner::IsEmpty((SequentialActionRunner *)(this + 0x10));
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x3c) = param_2;
    uVar2 = BuildIcon(this,param_2);
    *(undefined8 *)(this + 8) = uVar2;
    BuildActions(this,param_2);
    ShowOriginalIcon(this,false);
    this[0x70] = (TutorialEffectMgr)0x1;
  }
  return;
}


/* TutorialEffectMgr::~TutorialEffectMgr() */

void __thiscall TutorialEffectMgr::~TutorialEffectMgr(TutorialEffectMgr *this)

{
  *(undefined ***)this = &PTR__TutorialEffectMgr_06853480;
  TryRemoveIconEffect(this);
  AnimationMgr::~AnimationMgr((AnimationMgr *)(this + 0x40));
  ForeverSequentialActionRunner::~ForeverSequentialActionRunner
            ((ForeverSequentialActionRunner *)(this + 0x10));
  Sexy::LazySingleton<TutorialEffectMgr>::~LazySingleton((LazySingleton<TutorialEffectMgr> *)this);
  return;
}


/* TutorialEffectMgr::~TutorialEffectMgr() */

void __thiscall TutorialEffectMgr::~TutorialEffectMgr(TutorialEffectMgr *this)

{
  ~TutorialEffectMgr(this);
  AK::FreeHook(this);
  return;
}

