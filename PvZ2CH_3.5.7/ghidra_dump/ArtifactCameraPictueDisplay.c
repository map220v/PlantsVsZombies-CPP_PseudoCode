// Class: ArtifactCameraPictueDisplay


/* ArtifactCameraPictueDisplay::~ArtifactCameraPictueDisplay() */

void __thiscall
ArtifactCameraPictueDisplay::~ArtifactCameraPictueDisplay(ArtifactCameraPictueDisplay *this)

{
  *(undefined ***)this = &PTR_GetClass_0669c2f0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ArtifactCameraPictueDisplay::~ArtifactCameraPictueDisplay() */

void __thiscall
ArtifactCameraPictueDisplay::~ArtifactCameraPictueDisplay(ArtifactCameraPictueDisplay *this)

{
  ~ArtifactCameraPictueDisplay(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactCameraPictueDisplay::ArtifactCameraPictueDisplay() */

void __thiscall
ArtifactCameraPictueDisplay::ArtifactCameraPictueDisplay(ArtifactCameraPictueDisplay *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0669c2f0;
  Sexy::Insets::Insets((Insets *)(this + 0xe4));
  Sexy::Insets::Insets((Insets *)(this + 0xf4));
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraPictueDisplay::PopUp(Sexy::Image*) */

void __thiscall ArtifactCameraPictueDisplay::PopUp(ArtifactCameraPictueDisplay *this,Image *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)((long)gLawnApp + 0xd4),(int)gLawnApp[0x1b]);
  *(Image **)(this + 0x108) = param_1;
  *(undefined4 *)(this + 0xd8) = 0;
  uVar6 = PVZ_T();
  *(undefined4 *)(this + 0xdc) = uVar6;
  fVar7 = (float)PVZ_T();
  *(float *)(this + 0xe0) = fVar7 + 1.0;
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0x50) / 6,*(int *)(this + 0x54) / 6,
             (*(int *)(this + 0x50) << 1) / 3,(*(int *)(this + 0x54) << 1) / 3);
  *(undefined8 *)(this + 0xf4) = local_18;
  *(undefined8 *)(this + 0xfc) = uStack_10;
  std::string::string((string *)&local_18,"UIArtifactIconWithCamera");
  lVar4 = UIWidget::GetWidgetBySheetName((string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (lVar4 != 0) {
    UIWidget::GetDrawRect();
    plVar1 = gLawnApp;
    pcVar5 = *(code **)(*gLawnApp + 0x360);
    *(undefined8 *)(this + 0xe4) = local_18;
    *(undefined8 *)(this + 0xec) = uStack_10;
    cVar2 = (*pcVar5)(plVar1);
    if (cVar2 != '\0') {
      iVar3 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
      *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + iVar3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraPictueDisplay::ShrinkDown(Sexy::Image*) */

void __thiscall
ArtifactCameraPictueDisplay::ShrinkDown(ArtifactCameraPictueDisplay *this,Image *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)((long)gLawnApp + 0xd4),(int)gLawnApp[0x1b]);
  *(Image **)(this + 0x108) = param_1;
  *(undefined4 *)(this + 0xd8) = 1;
  uVar6 = PVZ_T();
  *(undefined4 *)(this + 0xdc) = uVar6;
  fVar7 = (float)PVZ_T();
  *(float *)(this + 0xe0) = fVar7 + 1.0;
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0x50) / 6,*(int *)(this + 0x54) / 6,
             (*(int *)(this + 0x50) << 1) / 3,(*(int *)(this + 0x54) << 1) / 3);
  *(undefined8 *)(this + 0xe4) = local_18;
  *(undefined8 *)(this + 0xec) = uStack_10;
  std::string::string((string *)&local_18,"UIArtifactIconWithCamera");
  lVar4 = UIWidget::GetWidgetBySheetName((string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (lVar4 != 0) {
    UIWidget::GetDrawRect();
    plVar1 = gLawnApp;
    pcVar5 = *(code **)(*gLawnApp + 0x360);
    *(undefined8 *)(this + 0xf4) = local_18;
    *(undefined8 *)(this + 0xfc) = uStack_10;
    cVar2 = (*pcVar5)(plVar1);
    if (cVar2 != '\0') {
      iVar3 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
      *(int *)(this + 0xf4) = *(int *)(this + 0xf4) + iVar3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraPictueDisplay::Draw(Sexy::Graphics*) */

void __thiscall
ArtifactCameraPictueDisplay::Draw(ArtifactCameraPictueDisplay *this,Graphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_18);
  uVar4 = *(undefined4 *)(this + 0xdc);
  uVar3 = *(undefined4 *)(this + 0xe0);
  uVar2 = PVZ_T();
  iVar1 = CurveLerp<int>(uVar4,uVar3,uVar2,this + 0xe4,this + 0xf4,1);
  local_18 = CONCAT44(local_18._4_4_,iVar1);
  uVar4 = *(undefined4 *)(this + 0xdc);
  uVar3 = *(undefined4 *)(this + 0xe0);
  uVar2 = PVZ_T();
  iVar1 = CurveLerp<int>(uVar4,uVar3,uVar2,this + 0xe8,this + 0xf8,1);
  local_18 = CONCAT44(iVar1,(int)local_18);
  uVar4 = *(undefined4 *)(this + 0xdc);
  uVar3 = *(undefined4 *)(this + 0xe0);
  uVar2 = PVZ_T();
  iVar1 = CurveLerp<int>(uVar4,uVar3,uVar2,this + 0xec,this + 0xfc,1);
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  uVar4 = *(undefined4 *)(this + 0xdc);
  uVar3 = *(undefined4 *)(this + 0xe0);
  uVar2 = PVZ_T();
  iVar1 = CurveLerp<int>(uVar4,uVar3,uVar2,this + 0xf0,this + 0x100,1);
  local_10 = CONCAT44(iVar1,(int)local_10);
  if (*(int *)(this + 0xd8) == 2) {
    local_18 = *(undefined8 *)(this + 0xf4);
    local_10 = *(undefined8 *)(this + 0xfc);
  }
  if (*(Image **)(this + 0x108) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x108),(int)local_18,local_18._4_4_,(int)local_10,
               local_10._4_4_);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraPictueDisplay::TouchEnded(Sexy::Touch const&) */

void __thiscall
ArtifactCameraPictueDisplay::TouchEnded(ArtifactCameraPictueDisplay *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ArtifactMgr *this_00;
  BoardArtifactManager *this_01;
  Effect_PopAnim *pEVar4;
  ArtifactCameraSubSystem *pAVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) && (*(int *)(this + 0xd8) == 2)) {
    cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0xf4),(TPoint *)(param_1 + 0x10));
    if (cVar1 == '\0') {
      pAVar5 = Board::GetGameSubSystem<ArtifactCameraSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      ArtifactCameraSubSystem::CloseArtifactCameraPictueDisplay(pAVar5);
    }
    else {
      this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
      if (this_00 != (ArtifactMgr *)0x0) {
        iVar2 = ArtifactMgr::GetActivatedArtifactUsedTime();
        iVar3 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
        cVar1 = ArtifactMgr::CanTriggerActivatedArtifact();
        if ((iVar2 < iVar3) && (cVar1 != '\0')) {
          ArtifactMgr::RequestTriggerArtifact(this_00);
          this_01 = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0))
          ;
          BoardArtifactManager::GetAnimateArtifactMower(this_01);
          AnimateArtifactMower::GetEffect();
          pEVar4 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          std::string::string(asStack_10,"idle");
          PVZ_EOT();
          Effect_PopAnim::PlayLoopingAnimation(pEVar4,asStack_10,0);
          std::string::~string(asStack_10);
          nop();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
      }
      pAVar5 = Board::GetGameSubSystem<ArtifactCameraSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      ArtifactCameraSubSystem::CloseArtifactCameraPictueDisplay(pAVar5);
    }
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactCameraPictueDisplay::Update() */

void __thiscall ArtifactCameraPictueDisplay::Update(ArtifactCameraPictueDisplay *this)

{
  ArtifactCameraSubSystem *this_00;
  float fVar1;
  undefined4 uVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(int *)(this + 0xd8) == 1) {
    fVar1 = (float)PVZ_T();
    if (*(float *)(this + 0xe0) < fVar1) {
      uVar2 = PVZ_EOT();
      *(undefined4 *)(this + 0xe0) = uVar2;
      this_00 = Board::GetGameSubSystem<ArtifactCameraSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      ArtifactCameraSubSystem::CloseArtifactCameraPictueDisplay(this_00);
      return;
    }
  }
  else if ((*(int *)(this + 0xd8) == 0) && (fVar1 = (float)PVZ_T(), *(float *)(this + 0xe0) < fVar1)
          ) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0xd8) = 2;
    *(undefined4 *)(this + 0xe0) = uVar2;
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
    return;
  }
  return;
}

