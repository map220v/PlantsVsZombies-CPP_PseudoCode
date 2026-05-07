// Class: ArtifactDisplayBoard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDisplayBoard::SetArtifactLevel(int) */

void __thiscall ArtifactDisplayBoard::SetArtifactLevel(ArtifactDisplayBoard *this,int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x118) = param_1;
  local_8 = ___stack_chk_guard;
  if (0 < param_1) {
    uVar3 = *(undefined8 *)(this + 0x150);
    iVar1 = FUN_037ba5ac(uVar3,*(undefined8 *)(this + 0x158));
    if (param_1 <= iVar1) goto LAB_037baaa4;
  }
  TodStringTranslate(L"[DISPLAY_ACTION_NORMAL]");
  FUN_054766c8(this + 0x110,auStack_10);
  FUN_05476c50(auStack_10);
  uVar3 = *(undefined8 *)(this + 0x150);
LAB_037baaa4:
  lVar2 = FUN_037ba5e0(uVar3,(long)(param_1 + -1));
  Sexy::ToWString((string *)(lVar2 + 0x48));
  TodStringTranslate(awStack_18);
  FUN_054766c8(this + 0x110,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDisplayBoard::HideDisplayItems(bool) */

void __thiscall ArtifactDisplayBoard::HideDisplayItems(ArtifactDisplayBoard *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this[0xd1] = (ArtifactDisplayBoard)0x1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x138));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      plVar3 = (long *)*puVar2;
      (**(code **)(*plVar3 + 0x158))(plVar3,0);
      (**(code **)(*plVar3 + 0x188))(plVar3,1);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDisplayBoard::SetDisplayLevelButtonPosOffset(Sexy::SexyVector2) */

void ArtifactDisplayBoard::SetDisplayLevelButtonPosOffset(float param_1,float param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  *(ulong *)(param_3 + 0x130) = CONCAT44(param_2,param_1);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_3 + 0x138));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_3 + 0x138));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    plVar2 = (long *)*plVar2;
    (**(code **)(*plVar2 + 0x1a8))
              (plVar2,(int)((float)(int)plVar2[9] + param_1),
               (int)((float)*(int *)((long)plVar2 + 0x4c) + param_2));
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDisplayBoard::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
ArtifactDisplayBoard::DrawAll(ArtifactDisplayBoard *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  Image *pIVar11;
  undefined8 uVar12;
  SalesProgressBar *this_00;
  LotteryResultProgressBar *this_01;
  float fVar13;
  float fVar14;
  GraphicsAutoState aGStack_30 [8];
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd1] == (ArtifactDisplayBoard)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_2);
    Sexy::Graphics::ClearClipRect(param_2);
    this_01 = *(LotteryResultProgressBar **)(this + 0x108);
    if (this_01 != (LotteryResultProgressBar *)0x0) {
      iVar3 = FUN_037ba910(200);
      iVar4 = FUN_037ba924(0x19);
      iVar9 = *(int *)(this + 0x50);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
      iVar6 = FUN_037ba910(0xa0);
      iVar7 = FUN_037ba924(0x74);
      iVar1 = *(int *)(this + 0x54);
      this_00 = *(SalesProgressBar **)(this + 0x108);
      iVar8 = SalesProgressBar::GetCurrentLevel(this_00);
      Sexy::Graphics::DrawImage
                (param_2,(Image *)this_00,(iVar3 - iVar4) + (iVar9 - iVar5) / 2,
                 (iVar6 - iVar7) + (iVar1 - iVar8) / 2);
    }
    Sexy::Graphics::ClearClipRect(param_2);
    bVar2 = std::operator!=((wstring *)(this + 0x110),L"");
    if (bVar2) {
      iVar4 = FUN_037ba910(200);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0d28);
      iVar9 = *(int *)(lVar10 + 0x38);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0d78);
      iVar1 = *(int *)(lVar10 + 0x38);
      fVar13 = *(float *)(this + 0x128);
      iVar5 = FUN_037ba910(0xa0);
      iVar6 = FUN_037ba924(10);
      fVar14 = *(float *)(this + 300);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0d78);
      iVar3 = *(int *)(lVar10 + 0x38);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0d78);
      Sexy::Insets::Insets
                ((Insets *)&local_28,(int)((float)(iVar4 + (iVar9 - iVar1) / 2) + fVar13),
                 (int)((float)(iVar5 + iVar6) + fVar14),iVar3,*(int *)(lVar10 + 0x3c));
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0d78);
      iVar9 = FUN_037ba924(5);
      Sexy::Graphics::DrawImage(param_2,pIVar11,local_28,local_24 - iVar9);
      uVar12 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      Sexy::Color::Color((Color *)&local_18,1);
      WriteWordInRect(param_2,(wstring *)(this + 0x110),(Insets *)&local_28,uVar12,
                      (Color *)&local_18,2,1);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
    if (this[0xd1] == (ArtifactDisplayBoard)0x0) {
      iVar6 = FUN_037ba910(200);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0d28);
      iVar9 = *(int *)(lVar10 + 0x38);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0c18);
      iVar1 = *(int *)(lVar10 + 0x38);
      iVar7 = FUN_037ba910(0xa0);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0d28);
      iVar3 = *(int *)(lVar10 + 0x3c);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0c18);
      iVar4 = *(int *)(lVar10 + 0x3c);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0c18);
      iVar5 = *(int *)(lVar10 + 0x38);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0c18);
      Sexy::Insets::Insets
                ((Insets *)&local_18,iVar6 + (iVar9 - iVar1) / 2,(iVar7 + iVar3) - iVar4,iVar5,
                 *(int *)(lVar10 + 0x3c));
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0c18);
      Sexy::Graphics::DrawImage
                (param_2,pIVar11,(int)((float)local_18 + *(float *)(this + 0x130)),
                 (int)((float)local_14 + *(float *)(this + 0x134)));
    }
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDisplayBoard::DisplayNexyAction() */

void __thiscall ArtifactDisplayBoard::DisplayNexyAction(ArtifactDisplayBoard *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  bool bVar1;
  int iVar2;
  string *psVar3;
  NameMapperBase *this_02;
  long lVar4;
  ArtifactMgr *this_03;
  char *pcVar5;
  undefined8 uVar6;
  Zombie *this_04;
  ulong uVar7;
  string *psVar8;
  Plant *this_05;
  ResourceInfo *pRVar9;
  int iVar10;
  long *plVar11;
  ArtifactMiniBoard *this_06;
  code *pcVar12;
  ulong uVar13;
  Board *pBVar14;
  undefined4 uVar15;
  float fVar16;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_037ba5ac(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158));
  if (((0 < iVar2) &&
      (this_06 = *(ArtifactMiniBoard **)(this + 0xe8), this_06 != (ArtifactMiniBoard *)0x0)) &&
     (iVar10 = *(int *)(this + 0xd8), iVar10 < iVar2)) {
    if (this[0xd2] != (ArtifactDisplayBoard)0x0) {
      iVar10 = iVar10 + 1;
      *(int *)(this + 0xd8) = iVar10;
    }
    if (*(int *)(this + 0xe0) < iVar10) {
      *(undefined4 *)(this + 0xd8) = *(undefined4 *)(this + 0xdc);
    }
    *(undefined4 *)(this + 0xe4) = 0;
    uVar15 = PVZ_EOT();
    *(undefined4 *)(this + 0xf8) = uVar15;
    ArtifactMiniBoard::ResetBoard(this_06);
    *(undefined8 *)(this + 0x108) = 0;
    psVar3 = (string *)FUN_037ba5e0(*(undefined8 *)(this + 0x150),(long)*(int *)(this + 0xd8));
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::ArtifactDisplaySelectButton,
               *(int *)(psVar3 + 0x3c));
    SetArtifactLevel(this,*(int *)(psVar3 + 0x3c));
    bVar1 = std::operator!=(psVar3,"");
    plVar11 = *(long **)(this + 0xe8);
    if (bVar1) {
      (**(code **)(*plVar11 + 0x158))(plVar11,0);
      lVar4 = LawnApp::GetUIImageInfoFromStringId(gLawnApp,psVar3);
      if (lVar4 != 0) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
        *(ResourceInfo **)(this + 0x108) = pRVar9;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
    else {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100);
      this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xf0);
      (**(code **)(*plVar11 + 0x158))(plVar11,1);
      this_02 = (NameMapperBase *)ArtifactMapper::GetInstance();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar2 = NameMapperBase::GetIdForName(this_02,(string *)(lVar4 + 0x10));
      this_03 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      ArtifactMgr::SyncArtifact(this_03,iVar2,*(int *)(psVar3 + 0x60),*(int *)(psVar3 + 100));
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pcVar5 = (char *)FUN_0547429c(lVar4 + 0x18);
      uVar6 = Sexy::RtClass::StaticGetClassNamed(pcVar5);
      GameObject::Create(uVar6,0x87);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pcVar12 = *(code **)(*plVar11 + 0x78);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)this_00);
      (*pcVar12)(plVar11,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      FUN_037ba818(lVar4 + 0x3e);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      FUN_037ba544(lVar4 + 0x1c,*(undefined4 *)(psVar3 + 0x60));
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      FUN_037ba54c(lVar4 + 0x20,*(undefined4 *)(psVar3 + 100));
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      (**(code **)(*plVar11 + 0x80))();
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      if (*(code **)(*plVar11 + 200) != Artifact::ActivateSpeciallyOnDisplayBoard) {
        (**(code **)(*plVar11 + 200))(plVar11,*(undefined4 *)(this + 0xd8));
      }
      if (psVar3[0x40] != (string)0x0) {
        fVar16 = (float)PVZ_T();
        *(float *)(this + 0xf8) = fVar16 + *(float *)(psVar3 + 0x44);
      }
      uVar6 = *(undefined8 *)(psVar3 + 0x20);
      uVar13 = 0;
      lVar4 = FUN_037ba5f0(uVar6,*(undefined8 *)(psVar3 + 0x28));
      if (lVar4 != 0) {
        do {
          pBVar14 = *(Board **)(this + 0xe8);
          uVar6 = FUN_037ba604(uVar6,uVar13);
          FUN_05475d88(aRStack_10,uVar6);
          lVar4 = FUN_037ba604(*(undefined8 *)(psVar3 + 0x20),uVar13);
          this_04 = (Zombie *)
                    Board::AddZombie(pBVar14,aRStack_10,*(undefined4 *)(lVar4 + 8),
                                     *(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14));
          std::string::~string((string *)aRStack_10);
          uVar6 = *(undefined8 *)(psVar3 + 0x20);
          lVar4 = FUN_037ba604(uVar6,uVar13);
          if (0 < *(int *)(lVar4 + 0xc)) {
            Zombie::SetHitpoints(this_04,(float)*(int *)(lVar4 + 0xc));
            uVar6 = *(undefined8 *)(psVar3 + 0x20);
          }
          uVar13 = uVar13 + 1;
          uVar7 = FUN_037ba5f0(uVar6,*(undefined8 *)(psVar3 + 0x28));
        } while (uVar13 < uVar7);
      }
      uVar13 = 0;
      while( true ) {
        uVar6 = *(undefined8 *)(psVar3 + 8);
        uVar7 = FUN_037ba610(uVar6,*(undefined8 *)(psVar3 + 0x10));
        if (uVar7 <= uVar13) break;
        psVar8 = (string *)FUN_037ba61c(uVar6,uVar13);
        this_05 = (Plant *)Board::AddPlant(*(Board **)(this + 0xe8),*(int *)(psVar8 + 0x14),
                                           *(int *)(psVar8 + 0x18),psVar8,*(int *)(psVar8 + 8),false
                                           ,false,true,false);
        lVar4 = FUN_037ba61c(*(undefined8 *)(psVar3 + 8),uVar13);
        if (0 < *(int *)(lVar4 + 0x10)) {
          *(float *)(this_05 + 0xd8) = (float)*(int *)(lVar4 + 0x10);
        }
        Plant::SetPlantAvatarShowIndex(this_05,-(*(byte *)(lVar4 + 0xc) ^ 1));
        lVar4 = FUN_037ba61c(*(undefined8 *)(psVar3 + 8),uVar13);
        PlantFramework::SetAvatarEnable(*(PlantFramework **)(this_05 + 0xa8),*(bool *)(lVar4 + 0xc))
        ;
        uVar13 = uVar13 + 1;
      }
      if (psVar3[0x68] != (string)0x0) {
        plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        if (*(code **)(*plVar11 + 0xb0) != Artifact::DisplayPassiveSkill) {
          (**(code **)(*plVar11 + 0xb0))(*(undefined4 *)(psVar3 + 0x6c));
        }
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
/* ArtifactDisplayBoard::Update() */

void __thiscall ArtifactDisplayBoard::Update(ArtifactDisplayBoard *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  Artifact *this_01;
  long *plVar7;
  RtWeakPtr *this_02;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  cVar2 = FUN_037ba564(*(undefined1 *)(*(long *)(this + 0xe8) + 0x9dc));
  if (((cVar2 == '\0') && (iVar1 = *(int *)(this + 0xd8), -1 < iVar1)) &&
     (iVar4 = FUN_037ba5ac(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158)),
     iVar1 < iVar4)) {
    fVar8 = (float)PVZ_T();
    if (*(float *)(this + 0xf8) < fVar8) {
      uVar9 = PVZ_EOT();
      *(undefined4 *)(this + 0xf8) = uVar9;
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xf0));
      if (bVar3) {
        this_01 = (Artifact *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
        Artifact::TriggerMain(this_01);
      }
    }
    this_02 = (RtWeakPtr *)(this + 0xf0);
    lVar5 = FUN_037ba5e0(*(undefined8 *)(this + 0x150),(long)*(int *)(this + 0xd8));
    if (*(char *)(lVar5 + 0x41) != '\0') {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      if (*(code **)(*plVar7 + 0xa8) != Artifact::AutoClick) {
        (**(code **)(*plVar7 + 0xa8))(plVar7,*(undefined4 *)(this + 0xd8));
      }
    }
    fVar8 = (float)PVZ_Dt();
    fVar10 = *(float *)(this + 0xe4);
    *(float *)(this + 0xe4) = fVar8 + fVar10;
    lVar5 = FUN_037ba5e0(*(undefined8 *)(this + 0x150),(long)*(int *)(this + 0xd8));
    if (*(float *)(lVar5 + 0x38) <= fVar8 + fVar10) {
      DisplayNexyAction(this);
    }
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x138);
    if (this[0xd1] == (ArtifactDisplayBoard)0x0) {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar3) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        plVar7 = (long *)*puVar6;
        (**(code **)(*plVar7 + 0x158))(plVar7,1);
        (**(code **)(*plVar7 + 0x188))(plVar7,0);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
    }
    else {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar3) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        plVar7 = (long *)*puVar6;
        (**(code **)(*plVar7 + 0x158))(plVar7,0);
        (**(code **)(*plVar7 + 0x188))(plVar7,1);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
    }
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
    if (bVar3) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      cVar2 = FUN_037ba554(*(undefined1 *)(lVar5 + 0x3d));
      if (cVar2 == '\0') {
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDisplayBoard::SetDisplayLevel(int) */

void __thiscall ArtifactDisplayBoard::SetDisplayLevel(ArtifactDisplayBoard *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((0 < param_1) &&
     (iVar2 = FUN_037ba5ac(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158)), 0 < iVar2))
  {
    SetArtifactLevel(this,param_1);
    if (this[0xd2] == (ArtifactDisplayBoard)0x0) {
      iVar3 = FUN_037ba5ac(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158));
      iVar1 = param_1 + iVar3 + -1;
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = iVar1 / iVar3;
      }
      *(int *)(this + 0xd8) = iVar1 - iVar2 * iVar3;
      DisplayNexyAction(this);
      return;
    }
    iVar3 = FUN_037ba5ac(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158));
    iVar1 = param_1 + iVar3 + -2;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = iVar1 / iVar3;
    }
    *(int *)(this + 0xd8) = iVar1 - iVar2 * iVar3;
    DisplayNexyAction(this);
    return;
  }
  return;
}


/* ArtifactDisplayBoard::~ArtifactDisplayBoard() */

void __thiscall ArtifactDisplayBoard::~ArtifactDisplayBoard(ArtifactDisplayBoard *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR_GetClass_06698fc0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  FUN_037ba824(lVar1 + 0x30);
  MiniBoard::CloseBoard(*(MiniBoard **)(this + 0xe8));
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  *(undefined8 *)(gLawnApp + 0x9f0) = 0;
  std::vector<ArtifactDisplayActionInfo,std::allocator<ArtifactDisplayActionInfo>>::~vector
            ((vector<ArtifactDisplayActionInfo,std::allocator<ArtifactDisplayActionInfo>> *)
             (this + 0x150));
  std::vector<ArtifactDisplayLevelButton*,std::allocator<ArtifactDisplayLevelButton*>>::~vector
            ((vector<ArtifactDisplayLevelButton*,std::allocator<ArtifactDisplayLevelButton*>> *)
             (this + 0x138));
  FUN_05476c50(this + 0x110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ArtifactDisplayBoard::~ArtifactDisplayBoard() */

void __thiscall ArtifactDisplayBoard::~ArtifactDisplayBoard(ArtifactDisplayBoard *this)

{
  ~ArtifactDisplayBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDisplayBoard::ArtifactDisplayBoard() */

void __thiscall ArtifactDisplayBoard::ArtifactDisplayBoard(ArtifactDisplayBoard *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  LawnApp *this_00;
  Widget *pWVar10;
  undefined8 uVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ArtifactMiniBoard *pAVar17;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar18;
  ulong uVar19;
  string *psVar20;
  long lVar21;
  ArtifactDisplayLevelButton *this_02;
  ulong uVar22;
  int iVar23;
  code *pcVar24;
  undefined4 uVar25;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  Widget *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06698fc0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  FUN_05476574(this + 0x110);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x128),0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x130),0.0,0.0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  pAVar17 = ::operator_new(0xe08);
  ArtifactMiniBoard::ArtifactMiniBoard(pAVar17);
  *(ArtifactMiniBoard **)(this + 0xe8) = pAVar17;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  this[0xd2] = (ArtifactDisplayBoard)0x1;
  this[0xd1] = (ArtifactDisplayBoard)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  ArtifactUtils::GetArtifactList((vector *)&local_68);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  uVar22 = 0;
  while( true ) {
    uVar11 = local_68;
    uVar19 = FUN_037ba568(local_68,local_60);
    if (uVar19 <= uVar22) break;
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037ba574(uVar11,uVar22);
    plVar18 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    (**(code **)(*plVar18 + 0x78))(plVar18,amStack_38);
    uVar22 = uVar22 + 1;
  }
  local_70 = (Widget *)
             std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                       ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                        amStack_38);
  while( true ) {
    local_50 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_38);
    bVar12 = eastl::operator!=((rbtree_iterator *)&local_70,(rbtree_iterator *)&local_50);
    this_00 = gLawnApp;
    if (!bVar12) break;
    psVar20 = (string *)
              std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_70);
    cVar13 = LawnApp::CanLoadGroup(this_00,psVar20);
    if (cVar13 != '\0') {
      psVar20 = (string *)
                std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_70);
      Board::LoadResourceGroupForGameplay(*(Board **)(this + 0xe8),psVar20);
    }
    FUN_037ba57c((rbtree_iterator *)&local_70);
  }
  uVar25 = PVZ_EOT();
  *(undefined4 *)(this + 0xf8) = uVar25;
  pAVar17 = *(ArtifactMiniBoard **)(this + 0xe8);
  iVar23 = 1;
  *(ArtifactMiniBoard **)(gLawnApp + 0x9f0) = pAVar17;
  ArtifactMiniBoard::InitBoard(pAVar17);
  (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),0);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe8));
  lVar21 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  FUN_037ba824(lVar21 + 0x30);
  FUN_054772c4(this + 0x110,&DAT_056f11a8);
  *(undefined4 *)(this + 0x118) = 1;
  *(uint *)(this + 0xdc) = (uint)bVar12;
  *(uint *)(this + 0xe0) = (uint)bVar12;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined4 *)(this + 0xe4) = 0;
  puVar9 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SetDisplayLevel);
  local_80 = local_40;
  local_90 = local_50;
  uStack_88 = uStack_48;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArtifactDisplayBoard,void(ArtifactDisplayBoard::*)(int)>>
            ((MessageRouter *)puVar9,Message::ArtifactDisplayLevelSelect,&local_90);
  iVar14 = FUN_037ba910(200);
  lVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0d28);
  iVar1 = *(int *)(lVar21 + 0x38);
  lVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0c18);
  iVar2 = *(int *)(lVar21 + 0x38);
  iVar15 = FUN_037ba910(0xa0);
  lVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0d28);
  iVar3 = *(int *)(lVar21 + 0x3c);
  lVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0c18);
  iVar4 = *(int *)(lVar21 + 0x3c);
  lVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0c18);
  iVar5 = *(int *)(lVar21 + 0x38);
  lVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ca0);
  local_70 = (Widget *)0x0;
  iVar8 = (iVar5 + *(int *)(lVar21 + 0x38) * -4) / 5;
  iVar5 = iVar8;
  do {
    this_02 = ::operator_new(0xf0);
    ArtifactDisplayLevelButton::ArtifactDisplayLevelButton(this_02,iVar23);
    local_70 = (Widget *)this_02;
    std::vector<ArtifactDisplayLevelButton*,std::allocator<ArtifactDisplayLevelButton*>>::push_back
              ((vector<ArtifactDisplayLevelButton*,std::allocator<ArtifactDisplayLevelButton*>> *)
               (this + 0x138),(ArtifactDisplayLevelButton **)&local_70);
    pWVar10 = local_70;
    pcVar24 = *(code **)(*(long *)local_70 + 0x198);
    lVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ca0);
    iVar6 = *(int *)(lVar21 + 0x38);
    iVar7 = iVar23 + -1;
    iVar23 = iVar23 + 1;
    iVar16 = FUN_037ba924(10);
    iVar6 = iVar14 + (iVar1 - iVar2) / 2 + iVar7 * iVar6 + iVar5;
    iVar5 = iVar5 + iVar8;
    lVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ca0);
    uVar25 = *(undefined4 *)(lVar21 + 0x38);
    lVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ca0);
    (*pcVar24)(pWVar10,iVar6,((iVar15 + iVar3) - iVar4) - iVar16,uVar25,
               *(undefined4 *)(lVar21 + 0x3c));
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,local_70);
  } while (iVar23 != 5);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  std::
  vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>::
  ~vector((vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
           *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDisplayBoard::SetArtifactId(int) */

void ArtifactDisplayBoard::SetArtifactId(int param_1)

{
  RtWeakPtr<PowerPropertySheet> *this;
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar3 = (ulong)(uint)param_1;
  this = (RtWeakPtr<PowerPropertySheet> *)(uVar3 + 0x100);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(uVar3 + 0xd8) = 0xffffffff;
  *(undefined8 *)(uVar3 + 0x108) = 0;
  *(undefined4 *)(uVar3 + 0xe4) = 0;
  ArtifactMiniBoard::ResetBoard(*(ArtifactMiniBoard **)(uVar3 + 0xe8));
  iVar2 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetArtifactByTypeId(iVar2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
  if (bVar1) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar6 + 0xd8));
    if (bVar1) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0xd8));
      std::vector<ArtifactDisplayActionInfo,std::allocator<ArtifactDisplayActionInfo>>::operator=
                ((vector<ArtifactDisplayActionInfo,std::allocator<ArtifactDisplayActionInfo>> *)
                 (uVar3 + 0x150),(vector *)(lVar6 + 0x10));
      *(undefined4 *)(uVar3 + 0xdc) = 0;
      iVar2 = FUN_037ba5ac(*(undefined8 *)(uVar3 + 0x150),*(undefined8 *)(uVar3 + 0x158));
      *(int *)(uVar3 + 0xe0) = iVar2 + -1;
    }
  }
  uVar7 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(uVar3 + 0x138);
    uVar5 = FUN_037ba5cc(uVar8,*(undefined8 *)(uVar3 + 0x140));
    if (uVar5 <= uVar7) break;
    puVar4 = (undefined8 *)FUN_037ba5d8(uVar8,uVar7);
    (**(code **)(*(long *)*puVar4 + 0x188))((long *)*puVar4,*(int *)(uVar3 + 0xe0) < (int)uVar7);
    uVar7 = uVar7 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

