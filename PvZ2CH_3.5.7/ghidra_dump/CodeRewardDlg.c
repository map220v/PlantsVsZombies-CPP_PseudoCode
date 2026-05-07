// Class: CodeRewardDlg


/* CodeRewardDlg::ButtonDepress(int) */

void CodeRewardDlg::ButtonDepress(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x158))((long *)(ulong)(uint)param_1,0);
  return;
}


/* non-virtual thunk to CodeRewardDlg::ButtonDepress(int) */

void __thiscall CodeRewardDlg::ButtonDepress(CodeRewardDlg *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* CodeRewardDlg::calStartX(int) */

int __thiscall CodeRewardDlg::calStartX(CodeRewardDlg *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *pLVar4;
  
  iVar1 = *(int *)(this + 0x108);
  if ((param_1 & 1U) != 0) {
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    iVar3 = FUN_04c02ee8(0x3c);
    return (int)((float)(iVar1 / 2) - (float)(param_1 / 2) * (float)(iVar2 + iVar3));
  }
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  iVar3 = FUN_04c02ee8(0x3c);
  return (int)((float)(iVar1 / 2) - ((float)(param_1 / 2) + -0.5) * (float)(iVar2 + iVar3));
}


/* CodeRewardDlg::~CodeRewardDlg() */

void __thiscall CodeRewardDlg::~CodeRewardDlg(CodeRewardDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_069815d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069818f8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xf8);
  std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>::~vector
            ((vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>> *)(this + 0xe0))
  ;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CodeRewardDlg::~CodeRewardDlg() */

void __thiscall CodeRewardDlg::~CodeRewardDlg(CodeRewardDlg *this)

{
  ~CodeRewardDlg(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardDlg::CodeRewardDlg() */

void __thiscall CodeRewardDlg::CodeRewardDlg(CodeRewardDlg *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  PVZ2UIButton *this_00;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069815d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069818f8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  FUN_05476574(this + 0xf8);
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  Sexy::Insets::Insets
            ((Insets *)&local_40,0,0,*(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  *(undefined8 *)(this + 0x100) = local_40;
  *(undefined8 *)(this + 0x108) = uStack_38;
  FUN_05478178(awStack_78,L"[BUTTON_OK]",auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar5 = FUN_04c02ee8(0x96);
  iVar1 = *(int *)(this + 0x108);
  iVar2 = *(int *)(this + 0x10c);
  iVar3 = *(int *)(this + 0x100);
  iVar4 = *(int *)(this + 0x104);
  iVar6 = FUN_04c02ee8(0x4b);
  uVar7 = FUN_04c02ee8(0x3c);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,iVar3 + (iVar1 - iVar5) / 2,(iVar4 + iVar2) - iVar6,iVar5,uVar7);
  pcVar9 = *(code **)(*(long *)this_00 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  (*pcVar9)(this_00,uVar8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8d980,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8da68,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardDlg::showRewardList(S2C_CodeRewardResult const*) */

void __thiscall CodeRewardDlg::showRewardList(CodeRewardDlg *this,S2C_CodeRewardResult *param_1)

{
  vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>> *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  SalesProgressBar *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>> *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToSexyString((string *)(param_1 + 0x18));
  FUN_054766c8(this + 0xf8,
               (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10);
  FUN_05476c50((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10);
  std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>::clear(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar5 = FUN_04c03450(*(undefined8 *)(param_1 + 0x20));
  uVar6 = FUN_04c034a0(*(undefined8 *)(param_1 + 0x28));
  std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>::
  insert<__gnu_cxx::__normal_iterator<S2C_CodeRewardPlantNum_const*,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>>,void>
            (this_00,local_10,uVar5,uVar6);
  uVar2 = FUN_04c02df4(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  if ((int)uVar2 < 5) {
    *(uint *)(this + 0x118) = uVar2;
    *(int *)(this + 0x114) = *(int *)(this + 0x10c) / 2;
  }
  else {
    iVar3 = (int)uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar1 = *(int *)(this + 0x10c);
    *(int *)(this + 0x118) = iVar3;
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar4 = FUN_04c02ee8(0x32);
    *(int *)(this + 0x114) = iVar1 / 2 - (iVar3 + iVar4) / 2;
  }
  (**(code **)(*(long *)this + 0x158))(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardDlg::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall CodeRewardDlg::DrawAll(CodeRewardDlg *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *this_00;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d8f0);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d8f0);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d8f0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::DrawImage(param_2,pIVar4,(TRect *)(this + 0x100),(TRect *)aIStack_18);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8db40);
  iVar1 = *(int *)(this + 0x50);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8db40);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  iVar3 = FUN_04c02ee8(0x28);
  Sexy::Graphics::DrawImage(param_2,pIVar4,(iVar1 - iVar2) / 2,iVar3 + *(int *)(this + 0x104));
  pcVar7 = *(code **)(*(long *)this + 0x290);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  iVar2 = FUN_04c02ee8(0x3c);
  iVar1 = *(int *)(this + 0x104);
  TodStringTranslate(L"[CODE_REWARD_TITLE]");
  (*pcVar7)(this,param_2,uVar6,aIStack_18,iVar2 + iVar1,auStack_20);
  FUN_05476c50(auStack_20);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardDlg::Draw(Sexy::Graphics*) */

void __thiscall CodeRewardDlg::Draw(CodeRewardDlg *this,Graphics *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  PrimeTypeface *this_00;
  SalesProgressBar *pSVar12;
  int *piVar13;
  LotteryResultProgressBar *pLVar14;
  NameMapperBase *pNVar15;
  string *psVar16;
  Image *pIVar17;
  SeedPacketUtils *this_01;
  long lVar18;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar19;
  string *extraout_x1;
  int iVar20;
  code *pcVar21;
  float fVar22;
  int iVar23;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [8];
  Insets aIStack_78 [16];
  Color aCStack_68 [16];
  RtMixedPtrBase aRStack_58 [16];
  wstring awStack_48 [16];
  int local_38 [10];
  wstring awStack_10 [8];
  long local_8;
  
  bVar1 = true;
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_04c02ee8(0x19);
  iVar23 = *(int *)(this + 0x100);
  iVar20 = 0;
  iVar5 = FUN_04c02ee8(0x87);
  iVar8 = *(int *)(this + 0x104);
  iVar6 = FUN_04c02ee8(0x32);
  iVar9 = *(int *)(this + 0x108);
  iVar7 = FUN_04c02ee8(0x3c);
  Sexy::Insets::Insets(aIStack_78,iVar4 + iVar23,iVar5 + iVar8,iVar9 - iVar6,iVar7);
  Sexy::Color::Color(aCStack_68,0xff,0xd8,0xa6);
  pcVar21 = *(code **)(*(long *)this + 0x2a8);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)local_38,(Insets *)aCStack_68);
  this_00 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  fVar22 = (float)Sexy::PrimeTypeface::GetLineSpacing(this_00);
  (*pcVar21)(this,param_1,uVar11,(Insets *)local_38,aIStack_78,this + 0xf8,(int)fVar22,0);
  iVar8 = calStartX(this,*(int *)(this + 0x118));
  iVar23 = *(int *)(this + 0x114);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe0));
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xe0));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
    if (!bVar2) {
      nop();
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar13 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    GetGameItemInfo(*piVar13,0x7fffffff,0);
    if (local_38[0] != 0) {
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar9 = iVar8 - iVar9 / 2;
      pSVar12 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
      iVar4 = iVar23 - iVar4 / 2;
      if (local_38[0] == 0xbc0) {
        pIVar17 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8da98);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
        Sexy::Insets::Insets((Insets *)aRStack_58,iVar9,iVar4,iVar5,iVar6);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8da98);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8da98);
        iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
        Sexy::Insets::Insets((Insets *)awStack_48,0,0,iVar4,iVar5);
        Sexy::Graphics::DrawImage(param_1,pIVar17,(TRect *)aRStack_58,(TRect *)awStack_48);
      }
      else if (local_38[0] == 0xfad) {
        pIVar17 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8da20);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
        Sexy::Insets::Insets((Insets *)aRStack_58,iVar9,iVar4,iVar5,iVar6);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8da20);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        pSVar12 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8da20);
        iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
        Sexy::Insets::Insets((Insets *)awStack_48,0,0,iVar4,iVar5);
        Sexy::Graphics::DrawImage(param_1,pIVar17,(TRect *)aRStack_58,(TRect *)awStack_48);
      }
      else {
        pNVar15 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        cVar3 = NameMapperBase::ContainsId(pNVar15,local_38[0]);
        if (cVar3 == '\0') {
          pNVar15 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
          cVar3 = NameMapperBase::ContainsId(pNVar15,local_38[0]);
          if (cVar3 == '\0') {
            pNVar15 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
            cVar3 = NameMapperBase::ContainsId(pNVar15,local_38[0]);
            if (cVar3 == '\0') {
              LawnApp::GetUIImageFromStringId(gLawnApp);
              pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)awStack_48);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_48);
              if (pRVar19 != (ResourceInfo *)0x0) {
                pLVar14 = (LotteryResultProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
                iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                pSVar12 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
                iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
                Sexy::Insets::Insets((Insets *)aRStack_58,iVar9,iVar4,iVar5,iVar6);
                iVar4 = LotteryResultProgressBar::GetCurrentLevel
                                  ((LotteryResultProgressBar *)pRVar19);
                iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pRVar19);
                Sexy::Insets::Insets((Insets *)awStack_48,0,0,iVar4,iVar5);
                Sexy::Graphics::DrawImage
                          (param_1,(Image *)pRVar19,(TRect *)aRStack_58,(TRect *)awStack_48);
              }
              goto LAB_04c05b8c;
            }
            lVar18 = NewAvatar::GetNewAvatarPieceImage(local_38[0]);
          }
          else {
            lVar18 = NewAvatar::GetAvatarTinyImage(local_38[0]);
          }
          if (lVar18 != 0) {
            pLVar14 = (LotteryResultProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
            iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
            pSVar12 = (SalesProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
            iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
            Sexy::Insets::Insets((Insets *)awStack_48,iVar9,iVar4,iVar5,iVar6);
            DrawAdaptiveImage(param_1,(Insets *)awStack_48,lVar18);
          }
        }
        else {
          psVar16 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar16);
          cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
          if (cVar3 != '\0') {
            this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
            lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
            this_02 = (RtWeakPtr *)
                      SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,(string *)(lVar18 + 8))
            ;
            iVar5 = *(int *)(this_02 + 0x10);
            iVar6 = *(int *)(this_02 + 0x28);
            iVar7 = *(int *)(this_02 + 0x2c);
            iVar10 = *(int *)(this_02 + 0x14);
            pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02 + 0x170);
            Sexy::Insets::Insets
                      ((Insets *)awStack_48,iVar9 + *(int *)(this_02 + 0x30),
                       iVar4 + *(int *)(this_02 + 0x34),iVar6,iVar7);
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar19,(TRect *)awStack_48,(TRect *)(this_02 + 0x20));
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
            if (bVar2) {
              lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
              pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                  ((RtWeakPtr *)(lVar18 + 0x48));
              Sexy::Insets::Insets
                        ((Insets *)awStack_48,iVar9 + *(int *)(this_02 + 0x18),
                         iVar4 + *(int *)(this_02 + 0x1c),iVar5,iVar10);
              Sexy::Graphics::DrawImage
                        (param_1,(Image *)pRVar19,(TRect *)awStack_48,(TRect *)(this_02 + 8));
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
        }
      }
LAB_04c05b8c:
      Sexy::StrFormat("X%d",(Sexy *)aRStack_58,(ulong)(uint)piVar13[1]);
      Sexy::ToSexyString((Sexy *)aRStack_58,extraout_x1);
      std::operator+(awStack_10,awStack_48);
      FUN_05476c50(awStack_48);
      std::string::~string((string *)aRStack_58);
      uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
      iVar4 = FUN_04c02ee8(0x14);
      pSVar12 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
      iVar6 = FUN_04c02ee8(10);
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar10 = FUN_04c02ee8(0x28);
      FUN_05477b24((Sexy *)aRStack_58,auStack_80);
      Sexy::Color::Color((Color *)awStack_48,1);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)(iVar9 - iVar4),(float)(iVar23 + iVar5 / 2 + iVar6),
                 (float)(iVar7 + iVar10),uVar11,param_1,(Sexy *)aRStack_58,1,awStack_48,0);
      FUN_05476c50((Sexy *)aRStack_58);
      FUN_05476c50(auStack_80);
    }
    iVar20 = iVar20 + 1;
    if ((bVar1) && (iVar9 = *(int *)(this + 0x118), iVar9 <= iVar20)) {
      bVar1 = false;
      iVar8 = FUN_04c02df4(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
      iVar8 = calStartX(this,iVar8 - iVar9);
      pSVar12 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
      iVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
      iVar4 = FUN_04c02ee8(0x32);
      iVar23 = iVar23 + iVar9 + iVar4;
    }
    else {
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d9a8);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar4 = FUN_04c02ee8(0x3c);
      iVar8 = iVar8 + iVar9 + iVar4;
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  } while( true );
}

