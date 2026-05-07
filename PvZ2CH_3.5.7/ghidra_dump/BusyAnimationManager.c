// Class: BusyAnimationManager


/* BusyAnimationManager::OnBackButtonPressed() */

bool __thiscall BusyAnimationManager::OnBackButtonPressed(BusyAnimationManager *this)

{
  return *(int *)(this + 300) != 0;
}


/* BusyAnimationManager::Draw(Sexy::Graphics*) */

void BusyAnimationManager::Draw(Graphics *param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  if (*(float *)(param_1 + 0x128) == fVar1) {
    return;
  }
  Sexy::Widget::DeferOverlay((Widget *)param_1,99);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BusyAnimationManager::Update() */

void __thiscall BusyAnimationManager::Update(BusyAnimationManager *this)

{
  TipsManager *this_00;
  PopAnimRig *pPVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (TipsManager *)Sexy::LazySingleton<TipsManager>::GetInstance();
  TipsManager::Update(this_00);
  if (this[0x131] == (BusyAnimationManager)0x0) {
    fVar3 = (float)PVZ_EOT();
    if (fVar3 != *(float *)(this + 0x128)) {
LAB_03ba0f70:
      if ((this[0x130] != (BusyAnimationManager)0x0) ||
         (fVar4 = (float)PVZ_RealT(), fVar4 - *(float *)(this + 0x128) <= 1.2)) {
        pPVar1 = *(PopAnimRig **)(this + 0xe0);
        fVar3 = (float)PVZ_T();
        fVar4 = (float)PVZ_Dt();
        PopAnimRig::UpdateAnim(pPVar1,fVar3,fVar4);
        pPVar1 = *(PopAnimRig **)(this + 0xd8);
        fVar3 = (float)PVZ_T();
        fVar4 = (float)PVZ_Dt();
        if (local_8 == ___stack_chk_guard) {
          PopAnimRig::UpdateAnim(pPVar1,fVar3,fVar4);
          return;
        }
        goto LAB_03ba10ac;
      }
      *(float *)(this + 0x128) = fVar3;
    }
  }
  else {
    fVar4 = *(float *)(this + 0x128);
    this[0x131] = (BusyAnimationManager)0x0;
    fVar3 = (float)PVZ_EOT();
    if (fVar4 < fVar3) {
      fVar5 = (float)PVZ_RealT();
      fVar6 = *(float *)(this + 0x128);
      fVar4 = (float)PVZ_RealT();
      local_10 = 0.6 - (fVar5 - fVar6);
      local_c = 0.0;
      pfVar2 = eastl::max_alt<float>(&local_10,&local_c);
      fVar5 = *pfVar2;
      this[0x130] = (BusyAnimationManager)0x0;
      fVar4 = fVar4 - fVar5;
      *(undefined4 *)(this + 0x60) = 0x30;
      *(float *)(this + 0x128) = fVar4;
    }
    else {
      this[0x130] = (BusyAnimationManager)0x0;
      *(undefined4 *)(this + 0x60) = 0x30;
    }
    if (fVar3 != fVar4) goto LAB_03ba0f70;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03ba10ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BusyAnimationManager::StopBusyIcon() */

void __thiscall BusyAnimationManager::StopBusyIcon(BusyAnimationManager *this)

{
  int iVar1;
  TipsManager *this_00;
  
  if ((*(int *)(this + 300) != 0) &&
     (iVar1 = *(int *)(this + 300) + -1, *(int *)(this + 300) = iVar1, iVar1 == 0)) {
    this[0x131] = (BusyAnimationManager)0x1;
    this_00 = (TipsManager *)Sexy::LazySingleton<TipsManager>::GetInstance();
    TipsManager::StopTip(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BusyAnimationManager::DrawOverlay(Sexy::Graphics*) */

void __thiscall BusyAnimationManager::DrawOverlay(BusyAnimationManager *this,Graphics *param_1)

{
  TipsManager *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (TipsManager *)Sexy::LazySingleton<TipsManager>::GetInstance();
  TipsManager::Draw(this_00,param_1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,0.0,0.0);
  if (this[0x130] == (BusyAnimationManager)0x0) {
    fVar2 = (float)PVZ_RealT();
    fVar2 = 0.6 - (fVar2 - *(float *)(this + 0x128));
    local_48 = (float)TimeLineTrack<float>::GetValueAt
                                ((TimeLineTrack<float> *)(this + 0xe8),fVar2 + 0.060000002);
    local_44 = (float)TimeLineTrack<float>::GetValueAt
                                ((TimeLineTrack<float> *)(this + 0x108),fVar2 + 0.060000002);
    local_3c = (float)TimeLineTrack<float>::GetValueAt((TimeLineTrack<float> *)(this + 0xe8),fVar2);
    local_40 = (float)TimeLineTrack<float>::GetValueAt((TimeLineTrack<float> *)(this + 0x108),fVar2)
    ;
  }
  else {
    fVar2 = (float)PVZ_RealT();
    fVar3 = *(float *)(this + 0x128);
    local_48 = (float)TimeLineTrack<float>::GetValueAt
                                ((TimeLineTrack<float> *)(this + 0xe8),fVar2 - fVar3);
    local_3c = local_48;
    local_44 = (float)TimeLineTrack<float>::GetValueAt
                                ((TimeLineTrack<float> *)(this + 0x108),fVar2 - fVar3);
    local_40 = local_44;
  }
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,local_48,local_44);
  lVar1 = FUN_03ba0e8c(*(undefined8 *)(*(long *)(this + 0xe0) + 0x20));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_38,(float)*(int *)(lVar1 + 0x3c),(float)*(int *)(lVar1 + 0x40));
  local_38 = *(float *)(lVar1 + 0x28) * local_38 * local_48;
  local_34 = *(float *)(lVar1 + 0x28) * local_34 * local_44;
  if (this[0x133] == (BusyAnimationManager)0x0) {
    FUN_03ba0e70(((float)*(int *)(gLawnApp + 0xd4) - local_38) * 0.5,
                 ((float)*(int *)(gLawnApp + 0xd8) - local_34) * 0.5,auStack_28,auStack_1c);
  }
  else {
    FUN_03ba0e70((float)*(int *)(gLawnApp + 0xd4) - local_38,
                 (float)*(int *)(gLawnApp + 0xd8) - local_34,auStack_28,auStack_1c);
  }
  PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0xe0),aSStack_30);
  PopAnimRig::Draw(*(PopAnimRig **)(this + 0xe0),param_1);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0xd8),aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,local_40,local_3c);
  lVar1 = FUN_03ba0e8c(*(undefined8 *)(*(long *)(this + 0xe0) + 0x20));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_38,(float)*(int *)(lVar1 + 0x3c),(float)*(int *)(lVar1 + 0x40));
  local_38 = *(float *)(lVar1 + 0x28) * local_38 * local_40;
  local_34 = *(float *)(lVar1 + 0x28) * local_34 * local_3c;
  if (this[0x133] == (BusyAnimationManager)0x0) {
    FUN_03ba0e70(((float)*(int *)(gLawnApp + 0xd4) - local_38) * 0.5,
                 ((float)*(int *)(gLawnApp + 0xd8) - local_34) * 0.5,auStack_28,auStack_1c);
  }
  else {
    FUN_03ba0e70((float)*(int *)(gLawnApp + 0xd4) - local_38,
                 (float)*(int *)(gLawnApp + 0xd8) - local_34,auStack_28,auStack_1c);
  }
  PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0xd8),aSStack_30);
  PopAnimRig::Draw(*(PopAnimRig **)(this + 0xd8),param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BusyAnimationManager::BusyAnimationManager() */

void __thiscall BusyAnimationManager::BusyAnimationManager(BusyAnimationManager *this)

{
  undefined4 uVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06736e60;
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0xe8));
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x108));
  *(undefined4 *)(this + 0x60) = 0x30;
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  this[0x132] = (BusyAnimationManager)0x0;
  this[0x130] = (BusyAnimationManager)0x0;
  this[0x131] = (BusyAnimationManager)0x0;
  *(undefined4 *)(this + 300) = 0;
  uVar1 = PVZ_EOT();
  this[0x133] = (BusyAnimationManager)0x0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0x128) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BusyAnimationManager::InitializeData() */

void __thiscall BusyAnimationManager::InitializeData(BusyAnimationManager *this)

{
  int iVar1;
  PopAnim *pPVar2;
  PopAnim *pPVar3;
  RtClass *pRVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x132] == (BusyAnimationManager)0x0) {
    this[0x132] = (BusyAnimationManager)0x1;
    CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06acd520);
    pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06acd5e0);
    pPVar3 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
    uVar5 = PopAnimRig::CreateRigOutsideTable(pPVar2,pRVar4);
    *(undefined8 *)(this + 0xd8) = uVar5;
    pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
    uVar5 = PopAnimRig::CreateRigOutsideTable(pPVar3,pRVar4);
    *(undefined8 *)(this + 0xe0) = uVar5;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    iVar1 = FUN_03ba0e94();
    FUN_03ba0e70((float)(*(int *)(this + 0x50) / 2 - iVar1),
                 (float)(*(int *)(this + 0x54) / 2 - iVar1),auStack_28,auStack_1c);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0xd8),aSStack_30);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0xe0),aSStack_30);
    TimeLineTrack<float>::Initialize((TimeLineTrack<float> *)(this + 0xe8),0.0);
    TimeLineTrack<float>::Initialize((TimeLineTrack<float> *)(this + 0x108),0.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BusyAnimationManager::~BusyAnimationManager() */

void __thiscall BusyAnimationManager::~BusyAnimationManager(BusyAnimationManager *this)

{
  BusyAnimationManager *this_00;
  
  *(undefined ***)this = &PTR_GetClass_06736e60;
  if (this[0x132] != (BusyAnimationManager)0x0) {
    if (*(long **)(this + 0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xd8) + 0x18))();
      *(undefined8 *)(this + 0xd8) = 0;
    }
    if (*(long **)(this + 0xe0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe0) + 0x18))();
      *(undefined8 *)(this + 0xe0) = 0;
    }
  }
  this_00 = this + 0x128;
  do {
    this_00 = this_00 + -0x20;
    TimeLineTrack<float>::~TimeLineTrack((TimeLineTrack<float> *)this_00);
  } while (this + 0xe8 != this_00);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* BusyAnimationManager::~BusyAnimationManager() */

void __thiscall BusyAnimationManager::~BusyAnimationManager(BusyAnimationManager *this)

{
  ~BusyAnimationManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BusyAnimationManager::generateBounceTrack(TimeLineTrack<float>&) */

void __thiscall
BusyAnimationManager::generateBounceTrack(BusyAnimationManager *this,TimeLineTrack *param_1)

{
  float fVar1;
  TimeLineTrack<float> *pTVar2;
  TimeLineTrack<float> *pTVar3;
  float local_14;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)Sexy::Rand(0.4);
  pTVar2._0_4_ = (TimeLineTrack<float> *)((fVar1 + 1.0) * 0.6);
  pTVar3._0_4_ = (TimeLineTrack<float> *)((float)pTVar2._0_4_ * 0.618034);
  local_14 = (float)Sexy::Rand(0.120000005);
  local_14 = local_14 + 1.1400001;
  local_10[0] = (float)Sexy::Rand(0.089999996);
  local_10[0] = local_10[0] + 0.85499996;
  TimeLineTrack<float>::Initialize((TimeLineTrack<float> *)param_1,0.0);
  local_10[1] = 0.0;
  TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)0x0,param_1,local_10 + 1,5);
  TimeLineTrack<float>::AddKeyFrame(pTVar3._0_4_,param_1,&local_14,5);
  TimeLineTrack<float>::AddKeyFrame
            ((TimeLineTrack<float> *)
             ((float)pTVar3._0_4_ + ((float)pTVar2._0_4_ - (float)pTVar3._0_4_) * 0.618034),param_1,
             local_10,5);
  local_10[1] = 1.0;
  TimeLineTrack<float>::AddKeyFrame(pTVar2._0_4_,param_1,local_10 + 1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BusyAnimationManager::generateBounceTracks() */

void __thiscall BusyAnimationManager::generateBounceTracks(BusyAnimationManager *this)

{
  generateBounceTrack(this,(TimeLineTrack *)(this + 0xe8));
  generateBounceTrack(this,(TimeLineTrack *)(this + 0x108));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BusyAnimationManager::StartBusyIcon() */

void __thiscall BusyAnimationManager::StartBusyIcon(BusyAnimationManager *this)

{
  char cVar1;
  BusyAnimationManager BVar2;
  long lVar3;
  ActivityConfig *this_00;
  TipsManager *this_01;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitializeData(this);
  iVar4 = *(int *)(this + 300);
  if ((iVar4 == 0) && (this[0x131] == (BusyAnimationManager)0x0)) {
    plVar5 = *(long **)(this + 0xe0);
    pcVar6 = *(code **)(*plVar5 + 0x78);
    std::string::string(asStack_28,"ANIMATION");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    (*pcVar6)(plVar5,asStack_28,1,0,avStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
    std::string::~string(asStack_28);
    nop();
    plVar5 = *(long **)(this + 0xd8);
    pcVar6 = *(code **)(*plVar5 + 0x78);
    std::string::string(asStack_28,"ANIMATION");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    (*pcVar6)(plVar5,asStack_28,1,0,avStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
    std::string::~string(asStack_28);
    nop();
    *(undefined4 *)(this + 0x60) = 0;
    this[0x130] = (BusyAnimationManager)0x1;
    uVar7 = PVZ_RealT();
    *(undefined4 *)(this + 0x128) = uVar7;
    generateBounceTracks(this);
    this_01 = (TipsManager *)Sexy::LazySingleton<TipsManager>::GetInstance();
    TipsManager::StartNewTipFromAcitvityConfig(this_01);
    iVar4 = *(int *)(this + 300);
  }
  *(int *)(this + 300) = iVar4 + 1;
  this[0x131] = (BusyAnimationManager)0x0;
  lVar3 = LawnApp::GetActivityConfig();
  if (lVar3 != 0) {
    this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar1 = ActivityConfig::IsActivityDays(this_00);
    if (cVar1 != '\0') {
      lVar3 = LawnApp::GetActivityConfig();
      BVar2 = (BusyAnimationManager)FUN_03ba0e90(*(undefined1 *)(lVar3 + 0x98));
      if (BVar2 != (BusyAnimationManager)0x0) goto LAB_03ba18a4;
    }
  }
  BVar2 = (BusyAnimationManager)0x0;
LAB_03ba18a4:
  this[0x133] = BVar2;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

