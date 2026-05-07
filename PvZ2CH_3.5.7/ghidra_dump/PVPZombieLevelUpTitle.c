// Class: PVPZombieLevelUpTitle


/* PVPZombieLevelUpTitle::DrawZombieRank(Sexy::Graphics*) */

void __thiscall PVPZombieLevelUpTitle::DrawZombieRank(PVPZombieLevelUpTitle *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PVPManager *this_00;
  long lVar5;
  LotteryResultProgressBar *this_01;
  float fVar6;
  
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar5 = PVPManager::GetZombieData(this_00,(string *)(this + 0xe8));
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 8);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    this_01 = (LotteryResultProgressBar *)PVZ2UIGameObjectCard::GetLevelImage(iVar1);
    if (this_01 != (LotteryResultProgressBar *)0x0) {
      iVar1 = *(int *)(this + 0x50);
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
      fVar6 = (float)FUN_04afce60();
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
      iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)this_01,iVar1 + iVar2 * -3,(int)fVar6,(int)((float)iVar3 * 1.5),
                 (int)((float)iVar4 * 1.5));
      return;
    }
  }
  return;
}


/* PVPZombieLevelUpTitle::IsPVPTopicIn() */

bool PVPZombieLevelUpTitle::IsPVPTopicIn(void)

{
  int iVar1;
  AssetsManagerManifest *this;
  long lVar2;
  
  this = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar2 = AssetsManagerManifest::getAssets(this);
  iVar1 = FUN_04afcc28(*(undefined4 *)(lVar2 + 0x30));
  return iVar1 == 4;
}


/* PVPZombieLevelUpTitle::Update() */

void __thiscall PVPZombieLevelUpTitle::Update(PVPZombieLevelUpTitle *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  this_00 = *(PopAnimRig **)(this + 0xe0);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_RealT();
    fVar2 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* PVPZombieLevelUpTitle::ButtonPress(int) */

void PVPZombieLevelUpTitle::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to PVPZombieLevelUpTitle::ButtonPress(int) */

void __thiscall PVPZombieLevelUpTitle::ButtonPress(PVPZombieLevelUpTitle *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpTitle::CreateZombieAnimation() */

void __thiscall PVPZombieLevelUpTitle::CreateZombieAnimation(PVPZombieLevelUpTitle *this)

{
  string *psVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  uVar2 = CreateStandaloneZombieAnimRig(aRStack_58,1);
  *(undefined8 *)(this + 0xe0) = uVar2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  plVar3 = *(long **)(this + 0xe0);
  pcVar4 = *(code **)(*plVar3 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar4)(plVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  (**(code **)(**(long **)(this + 0xe0) + 0x90))(*(long **)(this + 0xe0),this + 0xf0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpTitle::ReleaseZombieAnimation() */

void __thiscall PVPZombieLevelUpTitle::ReleaseZombieAnimation(PVPZombieLevelUpTitle *this)

{
  LawnApp *this_00;
  string *psVar1;
  RAttribute *this_01;
  vector *pvVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe0) + 0x18))();
    *(undefined8 *)(this + 0xe0) = 0;
  }
  this_00 = gLawnApp;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  pvVar2 = (vector *)Reflection::RAttribute::GetValue(this_01);
  LawnApp::DeleteGroups(this_00,pvVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPZombieLevelUpTitle::~PVPZombieLevelUpTitle() */

void __thiscall PVPZombieLevelUpTitle::~PVPZombieLevelUpTitle(PVPZombieLevelUpTitle *this)

{
  *(undefined ***)this = &PTR_GetClass_069525a0;
  *(undefined **)(this + 0xd8) = &DAT_069528d0;
  ReleaseZombieAnimation(this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::string::~string((string *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVPZombieLevelUpTitle::~PVPZombieLevelUpTitle() */

void __thiscall PVPZombieLevelUpTitle::~PVPZombieLevelUpTitle(PVPZombieLevelUpTitle *this)

{
  ~PVPZombieLevelUpTitle(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpTitle::DrawZombieAnimation(Sexy::Graphics*) */

void __thiscall
PVPZombieLevelUpTitle::DrawZombieAnimation(PVPZombieLevelUpTitle *this,Graphics *param_1)

{
  int iVar1;
  string *psVar2;
  ZombieType *this_00;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GraphicsAutoState aGStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe0) != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    nop();
    lVar3 = ZombieType::GetProps(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    FUN_04afcc08((float)((*(int *)(this + 0x50) - *(int *)(this + 0xf8)) / 2 - *(int *)(this + 0xf0)
                        ),(float)*(int *)(this + 0x54) * 0.7,auStack_28,auStack_1c);
    fVar4 = (float)FUN_04afce3c(*(undefined4 *)(lVar3 + 200));
    FUN_04afcc08(0,-fVar4,auStack_28,auStack_1c);
    uVar5 = FUN_04afce3c(*(undefined4 *)(lVar3 + 0xcc));
    uVar6 = FUN_04afce3c(*(undefined4 *)(lVar3 + 0xd0));
    FUN_04afcc08(uVar5,uVar6,auStack_28,auStack_1c);
    fVar4 = *(float *)(lVar3 + 0xd4);
    if (fVar4 <= 0.0) {
      iVar1 = FUN_04afce28();
      fVar4 = (float)iVar1 / (float)*(int *)(this + 0xfc);
      if (fVar4 < 1.0) {
        FUN_04afcc08((1.0 - fVar4) * (float)*(int *)(this + 0xf8),
                     (1.0 - fVar4) * (float)*(int *)(this + 0xfc),auStack_28,auStack_1c);
        Sexy::SexyTransform2D::Scale(aSStack_30,fVar4,fVar4);
      }
    }
    else {
      Sexy::SexyTransform2D::Scale(aSStack_30,fVar4,fVar4);
    }
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0xe0),param_1,aSStack_30);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpTitle::DrawZombieCNName(Sexy::Graphics*) */

void __thiscall
PVPZombieLevelUpTitle::DrawZombieCNName(PVPZombieLevelUpTitle *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Zombie aZStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  Zombie::GetFormattedNameString(aZStack_30,aRStack_38);
  iVar1 = FUN_04afce4c(2);
  iVar2 = FUN_04afce4c(0x28);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,aZStack_30,aIStack_28,uVar4,aCStack_18,5,1);
  FUN_05476c50(aZStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpTitle::RefreshLevelUpButton() */

void __thiscall PVPZombieLevelUpTitle::RefreshLevelUpButton(PVPZombieLevelUpTitle *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  string *psVar8;
  ZombieType *this_00;
  long lVar9;
  PVPManager *pPVar10;
  long lVar11;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  PVZ2UIButton *pPVar12;
  AssetsManagerManifest *pAVar13;
  PVPFinishButton *this_03;
  CardGameDeckButton *this_04;
  undefined8 uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  nop();
  lVar9 = ZombieType::GetProps(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  pPVar10 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar11 = PVPManager::GetZombieData(pPVar10,(string *)(this + 0xe8));
  if ((lVar9 != 0) && (lVar11 != 0)) {
    uVar14 = *(undefined8 *)(lVar9 + 0x150);
    iVar1 = *(int *)(lVar11 + 8);
    lVar9 = FUN_04afcc64(uVar14,*(undefined8 *)(lVar9 + 0x158));
    if ((ulong)(long)iVar1 < lVar9 + 1U) {
      lVar9 = FUN_04afcc70(uVar14,(long)(iVar1 + -1));
      if (*(long *)(this + 0x108) != 0) {
        (**(code **)(*(long *)this + 0x68))(this);
        if (*(long **)(this + 0x108) != (long *)0x0) {
          (**(code **)(**(long **)(this + 0x108) + 0x18))();
        }
        *(undefined8 *)(this + 0x108) = 0;
      }
      *(undefined8 *)(this + 0x110) = 0;
      this_01 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82cc8);
      iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_01);
      iVar2 = FUN_04afce4c(0x5a);
      iVar1 = iVar1 + iVar2;
      this_02 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82cc8);
      iVar2 = SalesProgressBar::GetCurrentLevel(this_02);
      FUN_05476574(auStack_c8);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_b0);
      if (this[0x100] == (PVPZombieLevelUpTitle)0x0) {
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b82ad8,1);
        local_b0 = local_40;
        uStack_a8 = uStack_38;
        local_a0 = local_30;
        uStack_98 = uStack_28;
        local_90 = local_20;
        uStack_88 = uStack_18;
        local_80 = local_10;
        TodStringTranslate(L"[PVP_ZOMBIE_LEVEL_UP_COIN]");
        TodReplaceNumberString(awStack_78,L"{NUM}",*(int *)(lVar9 + 8));
        FUN_054766c8(auStack_c8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        FUN_05476c50(awStack_78);
        FUN_05478178(awStack_78,&DAT_056f11a8,(Insets *)&local_c0);
        Sexy::Color::Color((Color *)&local_40,1);
        pPVar12 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar12,0x1e8d,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
        *(PVZ2UIButton **)(this + 0x108) = pPVar12;
        FUN_05476c50(awStack_78);
        nop();
        iVar3 = FUN_04afce4c(5);
        iVar4 = FUN_04afce4c(2);
        iVar5 = PVZ2UIImage::GetHeight((PVZ2UIImage *)&local_b0);
        iVar6 = FUN_04afce4c(0x14);
        iVar7 = FUN_04afce4c(2);
        Sexy::Insets::Insets
                  ((Insets *)&local_c0,iVar3,((iVar2 - iVar4) - iVar5) / 2,iVar6,iVar2 - iVar7);
        PVZ2UIButton::AddImage
                  (*(PVZ2UIButton **)(this + 0x108),(PVZ2UIImage *)&local_b0,(TRect *)&local_c0);
        iVar3 = FUN_04afce4c(3);
        iVar4 = FUN_04afce4c(5);
        Sexy::Insets::Insets
                  ((Insets *)&local_40,(int)local_b8 + iVar3,0,(iVar1 - (int)local_b8) - iVar4,iVar2
                  );
        pPVar12 = *(PVZ2UIButton **)(this + 0x108);
        local_c0 = local_40;
        local_b8 = uStack_38;
        Sexy::Insets::Insets((Insets *)&local_40,(Insets *)&local_c0);
        PVZ2UIButton::AddText(pPVar12,auStack_c8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0);
        pPVar12 = *(PVZ2UIButton **)(this + 0x108);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b82cc8,3);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b82e48,3);
        PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
        plVar15 = *(long **)(this + 0x108);
      }
      else {
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b82c08,1);
        local_b0 = local_40;
        uStack_a8 = uStack_38;
        local_a0 = local_30;
        uStack_98 = uStack_28;
        local_90 = local_20;
        uStack_88 = uStack_18;
        local_80 = local_10;
        TodStringTranslate(L"[PVP_ZOMBIE_LEVEL_UP_GEM]");
        pPVar10 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        pAVar13 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        lVar9 = AssetsManagerManifest::getAssets(pAVar13);
        fVar16 = (float)FUN_04afcc30(*(undefined4 *)(lVar9 + 0x38));
        fVar17 = (float)PVZ_T();
        iVar3 = PVPManager::TimeToGem(pPVar10,(int)(fVar16 - fVar17));
        TodReplaceNumberString(awStack_78,L"{NUM}",iVar3);
        FUN_054766c8(auStack_c8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        FUN_05476c50(awStack_78);
        FUN_05478178(awStack_78,&DAT_056f11a8,&local_c0);
        Sexy::Color::Color((Color *)&local_40,1);
        this_03 = ::operator_new(0x338);
        PVPFinishButton::PVPFinishButton
                  (this_03,0x1938,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
        *(PVPFinishButton **)(this + 0x110) = this_03;
        FUN_05476c50(awStack_78);
        nop();
        pAVar13 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        lVar9 = AssetsManagerManifest::getAssets(pAVar13);
        fVar16 = (float)FUN_04afcc30(*(undefined4 *)(lVar9 + 0x38));
        fVar17 = (float)PVZ_T();
        this_04 = *(CardGameDeckButton **)(this + 0x110);
        pPVar10 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        iVar3 = PVPManager::TimeToGem(pPVar10,(int)(fVar16 - fVar17));
        CardGameDeckButton::SetIndex(this_04,iVar3);
        plVar15 = *(long **)(this + 0x110);
        *(long **)(this + 0x108) = plVar15;
      }
      iVar3 = *(int *)(this + 0x54);
      iVar4 = FUN_04afce4c(10);
      (**(code **)(*plVar15 + 0x198))
                (plVar15,(*(int *)(this + 0x50) - iVar1) / 2,(iVar3 - iVar2) - iVar4,iVar1,iVar2);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
      FUN_05476c50(auStack_c8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpTitle::DrawCDTime(Sexy::Graphics*) */

void __thiscall PVPZombieLevelUpTitle::DrawCDTime(PVPZombieLevelUpTitle *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  AssetsManagerManifest *this_00;
  long lVar8;
  undefined8 uVar9;
  int extraout_w1;
  float fVar10;
  float fVar11;
  undefined1 auStack_30 [8];
  wstring awStack_28 [16];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = IsPVPTopicIn();
  if (cVar4 != '\0') {
    this_00 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar8 = AssetsManagerManifest::getAssets(this_00);
    fVar10 = (float)FUN_04afcc30(*(undefined4 *)(lVar8 + 0x38));
    fVar11 = (float)PVZ_EOT();
    if (fVar10 != fVar11) {
      TodStringTranslate(L"[PVP_ZOMBIE_LEVEL_UP_TIME]");
      fVar11 = (float)PVZ_T();
      StringHelper::ToTimeString((StringHelper *)0x0,fVar10 - fVar11,extraout_w1);
      TodReplaceString(awStack_28,L"{CONTENT}",awStack_18);
      FUN_05476c50(awStack_18);
      FUN_05476c50(awStack_28);
      lVar8 = *(long *)(this + 0x118);
      iVar1 = *(int *)(lVar8 + 0x48);
      iVar2 = *(int *)(lVar8 + 0x50);
      iVar5 = FUN_04afce4c(5);
      iVar3 = *(int *)(lVar8 + 0x4c);
      iVar6 = FUN_04afce4c(0x50);
      Sexy::Insets::Insets
                ((Insets *)awStack_28,iVar1 + iVar2,iVar5 + iVar3,*(int *)(this + 0x50),iVar6);
      uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      cVar4 = '\x01';
      Sexy::Color::Color((Color *)awStack_18,1);
      WriteWordInRect(param_1,auStack_30,awStack_28,uVar9,awStack_18,0,1);
      FUN_05476c50(auStack_30);
      goto LAB_04afefec;
    }
  }
  cVar4 = '\0';
LAB_04afefec:
  plVar7 = *(long **)(this + 0x118);
  if (*(char *)((long)plVar7 + 0x6c) != cVar4) {
    (**(code **)(*plVar7 + 0x158))(plVar7,cVar4);
    FUN_04afcc40(this + 0x100,cVar4);
    RefreshLevelUpButton(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpTitle::Draw(Sexy::Graphics*) */

void __thiscall PVPZombieLevelUpTitle::Draw(PVPZombieLevelUpTitle *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar6;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82ab0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82b50);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82b50);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82b50);
  iVar4 = FUN_04afce4c(0xf);
  Sexy::Graphics::DrawImage
            (param_1,pIVar6,(*(int *)(this + 0x50) - iVar2) / 2,
             iVar4 + (*(int *)(this + 0x54) - (int)((float)iVar3 * 0.9)) / 2,iVar2,
             (int)((float)iVar3 * 0.9));
  DrawZombieAnimation(this,param_1);
  DrawZombieRank(this,param_1);
  DrawZombieCNName(this,param_1);
  cVar1 = FUN_04afcc48(this[0x100]);
  if (cVar1 != '\0') {
    DrawCDTime(this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpTitle::InitView() */

void __thiscall PVPZombieLevelUpTitle::InitView(PVPZombieLevelUpTitle *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  PVPCancelUpgradeBtn *this_02;
  AssetsManagerManifest *this_03;
  long lVar7;
  code *pcVar8;
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar8 = *(code **)(*(long *)this + 0x198);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82b50);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_04afce4c(0x32);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82b50);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar5 = FUN_04afce4c(0x1e);
  (*pcVar8)(this,0,0,iVar2 + iVar3,iVar4 + iVar5);
  cVar1 = IsPVPTopicIn();
  if (cVar1 != '\0') {
    this_03 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar7 = AssetsManagerManifest::getAssets(this_03);
    iVar2 = FUN_04afcc2c(*(undefined4 *)(lVar7 + 0x34));
    ServerZombieID::ServerZombieID(aSStack_18,(string *)(this + 0xe8));
    iVar3 = ImageLib::Image::GetWidth((Image *)aSStack_18);
    if (iVar2 == iVar3) {
      FUN_04afcc40(this + 0x100,1);
    }
  }
  this_02 = ::operator_new(0x300);
  PVPCancelUpgradeBtn::PVPCancelUpgradeBtn(this_02,-10,(ButtonListener *)(this + 0xd8));
  uVar6 = FUN_04afce4c(0x19);
  *(undefined4 *)(this_02 + 0x48) = uVar6;
  uVar6 = FUN_04afce4c(0x32);
  lVar7 = *(long *)this;
  *(undefined4 *)(this_02 + 0x4c) = uVar6;
  (**(code **)(lVar7 + 0x60))(this,this_02);
  (**(code **)(*(long *)this_02 + 0x158))(this_02,0);
  *(PVPCancelUpgradeBtn **)(this + 0x118) = this_02;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPZombieLevelUpTitle::PVPZombieLevelUpTitle(std::string const&) */

void __thiscall
PVPZombieLevelUpTitle::PVPZombieLevelUpTitle(PVPZombieLevelUpTitle *this,string *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_069525a0;
  *(undefined **)(this + 0xd8) = &DAT_069528d0;
  FUN_05475d88(this + 0xe8,param_1);
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  this[0x100] = (PVPZombieLevelUpTitle)0x0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  InitView(this);
  CreateZombieAnimation(this);
  RefreshLevelUpButton(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpTitle::BeginPVPUpgradeSuccess() */

void __thiscall PVPZombieLevelUpTitle::BeginPVPUpgradeSuccess(PVPZombieLevelUpTitle *this)

{
  undefined4 uVar1;
  string *psVar2;
  ZombieType *this_00;
  long lVar3;
  PVPManager *this_01;
  long lVar4;
  long lVar5;
  AssetsManagerManifest *this_02;
  PVPLabData *pPVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  nop();
  lVar3 = ZombieType::GetProps(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  this_01 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar4 = PVPManager::GetZombieData(this_01,(string *)(this + 0xe8));
  if (((lVar3 != 0) && (lVar4 != 0)) &&
     (lVar5 = FUN_04afcc64(*(undefined8 *)(lVar3 + 0x150),*(undefined8 *)(lVar3 + 0x158)),
     (ulong)(long)*(int *)(lVar4 + 8) < lVar5 + 1U)) {
    this_02 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    pPVar6 = (PVPLabData *)AssetsManagerManifest::getAssets(this_02);
    ServerZombieID::ServerZombieID((ServerZombieID *)aRStack_18,(string *)(this + 0xe8));
    uVar1 = ImageLib::Image::GetWidth((Image *)aRStack_18);
    lVar3 = FUN_04afcc70(*(undefined8 *)(lVar3 + 0x150),(long)(*(int *)(lVar4 + 8) + -1));
    PVPLabData::SetUpgradeItem(pPVar6,4,uVar1,*(undefined4 *)(lVar3 + 0xc));
    FUN_04afcc40(this + 0x100,1);
    RefreshLevelUpButton(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpTitle::ButtonDepress(int) */

void __thiscall PVPZombieLevelUpTitle::ButtonDepress(PVPZombieLevelUpTitle *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  AssetsManagerManifest *this_00;
  long lVar3;
  NetworkMgr *pNVar4;
  INetworkMsgProcess *pIVar5;
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
  if (param_1 == 0x1938) {
    pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar5 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar4);
    INetworkMsgProcess::RequestPvPUpgradeCompleteGem(pIVar5);
  }
  else if (param_1 == 0x1e8d) {
    pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar5 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar4);
    ServerZombieID::ServerZombieID(aSStack_18,(string *)(this + 0xe8));
    iVar1 = ImageLib::Image::GetWidth((Image *)aSStack_18);
    INetworkMsgProcess::RequestBeginPVPUpgrade(pIVar5,4,iVar1);
  }
  else if (param_1 == -10) {
    this_00 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar3 = AssetsManagerManifest::getAssets(this_00);
    iVar1 = FUN_04afcc28(*(undefined4 *)(lVar3 + 0x30));
    if (iVar1 == 4) {
      pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
      pIVar5 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar4);
      iVar1 = FUN_04afcc2c(*(undefined4 *)(lVar3 + 0x34));
      INetworkMsgProcess::RequestPVPUpgradeCancel(pIVar5,4,iVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVPZombieLevelUpTitle::ButtonDepress(int) */

void __thiscall PVPZombieLevelUpTitle::ButtonDepress(PVPZombieLevelUpTitle *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

