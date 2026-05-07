// Class: PVPSkillUpgrade


/* PVPSkillUpgrade::GetLeftTopSectionRect() */

void PVPSkillUpgrade::GetLeftTopSectionRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long in_x0;
  Insets *in_x8;
  
  iVar3 = FUN_04b00ba8(0x14);
  iVar1 = *(int *)(in_x0 + 0xe0);
  iVar4 = FUN_04b00ba8(0x4b);
  iVar2 = *(int *)(in_x0 + 0xe4);
  iVar5 = FUN_04b00ba8(0xf0);
  Sexy::Insets::Insets(in_x8,iVar3 + iVar1,iVar4 + iVar2,iVar5,iVar5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::DrawTimeLeft(Sexy::Graphics*, float) */

void __thiscall PVPSkillUpgrade::DrawTimeLeft(PVPSkillUpgrade *this,Graphics *param_1,float param_2)

{
  int iVar1;
  undefined8 uVar2;
  int extraout_w1;
  GraphicsAutoState aGStack_40 [8];
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetLeftTopSectionRect();
  iVar1 = FUN_04b00ba8(0x1c);
  local_28 = local_28 + iVar1;
  iVar1 = FUN_04b00ba8(0x32);
  local_24 = local_24 + iVar1;
  iVar1 = FUN_04b00ba8(0x38);
  local_20 = local_20 - iVar1;
  local_1c = FUN_04b00ba8(0x1e);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  Sexy::Insets::Insets(aIStack_18,0,0,0,0x7f);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::FillRect(param_1,(TRect *)&local_28);
  TodStringTranslate(L"[SKILL_UPGRADE_TIME]");
  StringHelper::ToTimeString((StringHelper *)0x0,param_2,extraout_w1);
  TodReplaceString(awStack_30,L"{TIME}",(wstring *)aIStack_18);
  FUN_05476c50(aIStack_18);
  FUN_05476c50(awStack_30);
  iVar1 = FUN_04b00ba8(0x1e);
  local_28 = local_28 + iVar1;
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_38,(TRect *)&local_28,uVar2,aIStack_18,0,1);
  FUN_05476c50(auStack_38);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSkillUpgrade::GetBottomSectionRect() */

void PVPSkillUpgrade::GetBottomSectionRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long in_x0;
  Insets *in_x8;
  
  iVar3 = FUN_04b00ba8(0x2e4);
  iVar4 = FUN_04b00ba8(0x96);
  iVar5 = FUN_04b00ba8(0x30c);
  iVar1 = *(int *)(in_x0 + 0xe0);
  iVar6 = FUN_04b00ba8(0x1ea);
  iVar2 = *(int *)(in_x0 + 0xe4);
  iVar7 = FUN_04b00ba8(0xf);
  Sexy::Insets::Insets
            (in_x8,iVar1 + (iVar5 - iVar3) / 2,((iVar6 + iVar2) - iVar4) - iVar7,iVar3,iVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::DrawUpgradeTip(Sexy::Graphics*, Sexy::TRect<int> const&) */

void __thiscall
PVPSkillUpgrade::DrawUpgradeTip(PVPSkillUpgrade *this,Graphics *param_1,TRect *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  AssetsManagerManifest *this_00;
  PVPLabData *pPVar6;
  long extraout_x0;
  float *pfVar7;
  float *pfVar8;
  long extraout_x0_00;
  long extraout_x0_01;
  wchar_t *pwVar9;
  long extraout_x0_02;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(*(long *)(this + 0x118) + 8);
  FUN_05476574(auStack_40);
  Sexy::Color::Color((Color *)&local_28);
  iVar4 = ZombiePVPSkillProps::GetMaxLevel(*(ZombiePVPSkillProps **)(this + 0x128));
  if (iVar4 <= iVar1) {
    FUN_05476c50(auStack_40);
    goto LAB_04b01254;
  }
  lVar11 = (long)iVar1;
  puVar5 = (uint *)FUN_04b009e0(*(undefined8 *)(*(long *)(this + 0x128) + 0x238),lVar11);
  uVar2 = *puVar5;
  this_00 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pPVar6 = (PVPLabData *)AssetsManagerManifest::getAssets(this_00);
  iVar4 = PVPLabData::GetLabItemLevel(pPVar6,1);
  if (iVar4 < (int)uVar2) {
    TodStringTranslate(L"[SKILL_NEED_BASE_LEVEL]");
    Sexy::StrFormat(L"%d",awStack_30,(ulong)uVar2);
    TodReplaceString(awStack_38,L"{COUNT}",awStack_30);
    FUN_054766c8(auStack_40,(Color *)&local_18);
    FUN_05476c50((Color *)&local_18);
    FUN_05476c50(awStack_30);
    FUN_05476c50(awStack_38);
    Sexy::Color::Color((Color *)&local_18,2);
    local_28 = local_18;
    uStack_20 = uStack_10;
  }
  else if (0 < iVar1) {
    local_28 = PrimeText_Game::Color_AlmanacDesc;
    uStack_20 = DAT_06af9cd0;
    if (*(RtObject **)(this + 0x128) == (RtObject *)0x0) {
LAB_04b011e0:
      nop();
      uVar12 = *(undefined8 *)(extraout_x0 + 0x268);
      pfVar7 = (float *)FUN_04b009e8(uVar12,lVar11);
      pfVar8 = (float *)FUN_04b009e8(uVar12,0);
      fVar13 = *pfVar7;
      fVar14 = *pfVar8;
      TodStringTranslate(L"[PVPSKILL_ZOMBIEFOOD_UPGRADE_DESCRIPTION]");
      uVar10 = (ulong)(uint)(int)((fVar13 - fVar14) * 100.0);
    }
    else {
      bVar3 = Sexy::RtObject::IsA<ZombiePVPSkillRageProps>(*(RtObject **)(this + 0x128));
      if (bVar3) {
        nop();
        uVar12 = *(undefined8 *)(extraout_x0_00 + 0x288);
        pfVar7 = (float *)FUN_04b009e8(uVar12,lVar11);
        pfVar8 = (float *)FUN_04b009e8(uVar12,0);
        uVar10 = (ulong)(uint)((int)(*pfVar7 * 100.0) - (int)(*pfVar8 * 100.0));
        TodStringTranslate(L"[PVPSKILL_RAGE_UPGRADE_DESCRIPTION]");
      }
      else {
        if (*(RtObject **)(this + 0x128) == (RtObject *)0x0) goto LAB_04b011e0;
        bVar3 = Sexy::RtObject::IsA<ZombiePVPSkillInvisibleProps>(*(RtObject **)(this + 0x128));
        if (bVar3) {
          nop();
          uVar12 = *(undefined8 *)(extraout_x0_02 + 0x280);
          pfVar7 = (float *)FUN_04b009e8(uVar12,lVar11);
          pfVar8 = (float *)FUN_04b009e8(uVar12,0);
          fVar14 = *pfVar8;
          pwVar9 = L"[PVPSKILL_INVISIBLE_UPGRADE_DESCRIPTION]";
          fVar13 = *pfVar7;
        }
        else {
          if ((*(RtObject **)(this + 0x128) == (RtObject *)0x0) ||
             (bVar3 = Sexy::RtObject::IsA<ZombiePVPSkillAidProps_const>
                                (*(RtObject **)(this + 0x128)), !bVar3)) goto LAB_04b011e0;
          nop();
          uVar12 = *(undefined8 *)(extraout_x0_01 + 0x288);
          pfVar7 = (float *)FUN_04b009e8(uVar12,lVar11);
          pfVar8 = (float *)FUN_04b009e8(uVar12,0);
          fVar13 = *pfVar7;
          fVar14 = *pfVar8;
          pwVar9 = L"[PVPSKILL_AID_UPGRADE_DESCRIPTION]";
        }
        TodStringTranslate(pwVar9);
        uVar10 = (ulong)(uint)(int)(fVar13 - fVar14);
      }
    }
    Sexy::StrFormat(L"%d",awStack_30,uVar10);
    TodReplaceString(awStack_38,L"{COUNT}",awStack_30);
    FUN_054766c8(auStack_40,&local_18);
    FUN_05476c50(&local_18);
    FUN_05476c50(awStack_30);
    FUN_05476c50(awStack_38);
  }
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
  WriteWordInRect(param_1,auStack_40,param_2,uVar12,(Insets *)&local_18,0,1);
  FUN_05476c50(auStack_40);
LAB_04b01254:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::GetPVPCompleteUpgradeGemSuccess(int) */

void __thiscall PVPSkillUpgrade::GetPVPCompleteUpgradeGemSuccess(PVPSkillUpgrade *this,int param_1)

{
  PVPFinishButton *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(CardGameDeckButton **)(this + 0xf0) != (CardGameDeckButton *)0x0) {
    CardGameDeckButton::SetIndex(*(CardGameDeckButton **)(this + 0xf0),param_1);
    pPVar1 = *(PVPFinishButton **)(this + 0xf0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ConfirmCompletePVPUpgrade);
    Sexy::Delegate1<int>::Delegate1<PVPSkillUpgrade,void(PVPSkillUpgrade::*)(int)>
              (aDStack_38,aCStack_50);
    PVPFinishButton::ShowBuyConfirm(pPVar1,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::DrawRightTopSection(Sexy::Graphics*) */

void __thiscall PVPSkillUpgrade::DrawRightTopSection(PVPSkillUpgrade *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  Zombie aZStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04b00ba8(0x10e);
  iVar1 = iVar1 + *(int *)(this + 0xe0);
  iVar2 = FUN_04b00ba8(0x4b);
  iVar2 = iVar2 + *(int *)(this + 0xe4);
  iVar3 = FUN_04b00ba8(0x1ea);
  iVar4 = FUN_04b00ba8(0xf0);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b831f0);
  Draw9SliceImage(param_1,aIStack_18,uVar8);
  TodStringTranslate(L"[SKILL_ATTRIBUTE]");
  iVar4 = FUN_04b00ba8(0xf);
  iVar5 = FUN_04b00ba8(0x32);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar4 + iVar2,iVar3,iVar5);
  uVar8 = PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,aZStack_30,aIStack_28,uVar8,aIStack_18,2,1);
  FUN_05476c50(aZStack_30);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aIStack_18,(RtWeakPtrBase *)(this + 0x120));
  Zombie::GetFormattedDescription(aZStack_30,aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  iVar4 = FUN_04b00ba8(10);
  iVar5 = FUN_04b00ba8(0x50);
  iVar6 = FUN_04b00ba8(0x14);
  iVar7 = FUN_04b00ba8(100);
  Sexy::Insets::Insets(aIStack_28,iVar4 + iVar1,iVar5 + iVar2,iVar3 - iVar6,iVar7);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_AlmanacDesc);
  WriteWordInRect(param_1,aZStack_30,aIStack_28,uVar8,aIStack_18,0,1);
  iVar4 = FUN_04b00ba8(10);
  iVar5 = FUN_04b00ba8(0xb4);
  iVar6 = FUN_04b00ba8(0x14);
  iVar7 = FUN_04b00ba8(0x32);
  Sexy::Insets::Insets(aIStack_18,iVar4 + iVar1,iVar5 + iVar2,iVar3 - iVar6,iVar7);
  DrawUpgradeTip(this,param_1,(TRect *)aIStack_18);
  FUN_05476c50(aZStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::~PVPSkillUpgrade() */

void __thiscall PVPSkillUpgrade::~PVPSkillUpgrade(PVPSkillUpgrade *this)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06953348;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06953020;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP_Upgrade");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_WorldPreview");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
  std::vector<PVPSkillUpgrade::SkillButton*,std::allocator<PVPSkillUpgrade::SkillButton*>>::~vector
            ((vector<PVPSkillUpgrade::SkillButton*,std::allocator<PVPSkillUpgrade::SkillButton*>> *)
             (this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSkillUpgrade::~PVPSkillUpgrade() */

void __thiscall PVPSkillUpgrade::~PVPSkillUpgrade(PVPSkillUpgrade *this)

{
  ~PVPSkillUpgrade(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::RefreshSkillButton() */

void __thiscall PVPSkillUpgrade::RefreshSkillButton(PVPSkillUpgrade *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  PVPManager *this_01;
  map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
  *this_02;
  long lVar7;
  SkillButton *pSVar8;
  ulong uVar9;
  uint uVar10;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  SkillButton *local_38;
  wstring awStack_30 [8];
  undefined8 local_28;
  undefined8 local_18;
  int local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_18);
    if (!bVar2) break;
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    (**(code **)(*(long *)this + 0x68))(this,*plVar6);
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 0x18))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  std::vector<PVPSkillUpgrade::SkillButton*,std::allocator<PVPSkillUpgrade::SkillButton*>>::clear
            ((vector<PVPSkillUpgrade::SkillButton*,std::allocator<PVPSkillUpgrade::SkillButton*>> *)
             this_00);
  GetBottomSectionRect();
  iVar3 = FUN_04b00ba8(0x23);
  local_28._0_4_ = (int)local_28 + iVar3;
  iVar3 = FUN_04b00ba8(0xf);
  local_28 = CONCAT44(local_28._4_4_ + iVar3,(int)local_28);
  this_01 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  this_02 = (map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
             *)PVPManager::GetSkillDatas(this_01);
  local_40 = std::
             map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
             ::begin(this_02);
  uVar10 = (uint)bVar2;
  while( true ) {
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_02);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_40,(rbtree_iterator *)&local_18);
    if (!bVar2) break;
    lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
    ServerZombieID::ServerZombieID((ServerZombieID *)&local_18,(string *)(lVar7 + 8));
    ImageLib::Image::GetWidth((Image *)&local_18);
    FUN_05478178(awStack_30,&DAT_056f11a8,auStack_48);
    Sexy::Color::Color((Color *)&local_18,1);
    pSVar8 = ::operator_new(0x308);
    SkillButton::SkillButton
              (pSVar8,uVar10,(ButtonListener *)(this + 0xd8),awStack_30,(Color *)&local_18);
    local_38 = pSVar8;
    FUN_05476c50(awStack_30);
    nop();
    CardGameDeckButton::SetIndex((CardGameDeckButton *)local_38,*(int *)(lVar7 + 0x10));
    SkillButton::SetSkill((string *)local_38);
    pSVar8 = local_38;
    uVar9 = local_28 & 0xffffffff;
    uVar1 = local_28 >> 0x20;
    uVar4 = FUN_04b00ba8(0x7d);
    (**(code **)(*(long *)pSVar8 + 0x198))(pSVar8,uVar9,uVar1,uVar4,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,local_38);
    std::vector<PVPSkillUpgrade::SkillButton*,std::allocator<PVPSkillUpgrade::SkillButton*>>::
    push_back((vector<PVPSkillUpgrade::SkillButton*,std::allocator<PVPSkillUpgrade::SkillButton*>> *
              )this_00,&local_38);
    (**(code **)(*(long *)local_38 + 0x48))((ServerZombieID *)&local_18,local_38);
    iVar3 = local_10;
    iVar5 = FUN_04b00ba8(0x37);
    local_28 = CONCAT44(local_28._4_4_,(int)local_28 + iVar3 + iVar5);
    FUN_04b0099c((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
    uVar10 = uVar10 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::GetCurrentSkillCompleteTime() */

void __thiscall PVPSkillUpgrade::GetCurrentSkillCompleteTime(PVPSkillUpgrade *this)

{
  int iVar1;
  int iVar2;
  AssetsManagerManifest *pAVar3;
  long lVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  int local_1c;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x118) == 0) {
    iVar1 = 0;
  }
  else {
    local_1c = 0;
    pAVar3 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar4 = AssetsManagerManifest::getAssets(pAVar3);
    iVar1 = FUN_04b00990(*(undefined4 *)(lVar4 + 0x30));
    if (iVar1 == 7) {
      pAVar3 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      lVar4 = AssetsManagerManifest::getAssets(pAVar3);
      iVar1 = FUN_04b00994(*(undefined4 *)(lVar4 + 0x34));
      ServerZombieID::ServerZombieID((ServerZombieID *)local_18,*(string **)(this + 0x118));
      iVar2 = ImageLib::Image::GetWidth((Image *)local_18);
      if (iVar2 == iVar1) {
        pAVar3 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        iVar1 = 0;
        lVar4 = AssetsManagerManifest::getAssets(pAVar3);
        fVar6 = (float)FUN_04b00998(*(undefined4 *)(lVar4 + 0x38));
        local_1c = (int)fVar6;
        fVar7 = (float)local_1c;
        fVar6 = (float)PVZ_EOT();
        if (fVar7 != fVar6) {
          fVar6 = (float)PVZ_T();
          local_18[0] = 0;
          local_1c = (int)(fVar7 - fVar6);
          piVar5 = eastl::max_alt<int>((int *)local_18,&local_1c);
          iVar1 = *piVar5;
        }
        goto LAB_04b02484;
      }
    }
    iVar1 = 0;
  }
LAB_04b02484:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::RefreshUpgradeButton() */

void __thiscall PVPSkillUpgrade::RefreshUpgradeButton(PVPSkillUpgrade *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  PVPManager *pPVar12;
  ulong uVar13;
  PVPFinishButton *this_02;
  uint *puVar14;
  PVZ2UIButton *pPVar15;
  CardGameDeckButton *this_03;
  long *plVar16;
  undefined1 auStack_d0 [8];
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
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe8) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    if (*(long **)(this + 0xe8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    }
    *(undefined8 *)(this + 0xe8) = 0;
  }
  *(undefined8 *)(this + 0xf0) = 0;
  if ((*(long *)(this + 0x118) != 0) && (*(int *)(*(long *)(this + 0x118) + 8) != 0)) {
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b830f0);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar2 = FUN_04b00ba8(0x5a);
    iVar1 = iVar1 + iVar2;
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b830f0);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar3 = ZombiePVPSkillProps::GetMaxLevel(*(ZombiePVPSkillProps **)(this + 0x128));
    if (*(int *)(*(long *)(this + 0x118) + 8) < iVar3) {
      FUN_05476574(auStack_c8);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_b0);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78);
      iVar3 = GetCurrentSkillCompleteTime(this);
      if (iVar3 < 1) {
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b82ee0,1);
        local_b0 = local_40;
        uStack_a8 = uStack_38;
        local_a0 = local_30;
        uStack_98 = uStack_28;
        local_90 = local_20;
        uStack_88 = uStack_18;
        local_80 = local_10;
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b83098,2);
        local_48 = local_10;
        local_78 = local_40;
        uStack_70 = uStack_38;
        local_68 = local_30;
        uStack_60 = uStack_28;
        local_58 = local_20;
        uStack_50 = uStack_18;
        puVar14 = (uint *)FUN_04b009e0(*(undefined8 *)(*(long *)(this + 0x128) + 0x220),
                                       (long)(*(int *)(*(long *)(this + 0x118) + 8) + -1));
        Sexy::StrFormat(L"%d",(Insets *)&local_40,(ulong)*puVar14);
        FUN_054766c8(auStack_c8,(Insets *)&local_40);
        FUN_05476c50((Insets *)&local_40);
        FUN_05478178((Insets *)&local_c0,&DAT_056f11a8,auStack_d0);
        Sexy::Color::Color((Color *)&local_40,1);
        pPVar15 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar15,-2,(ButtonListener *)(this + 0xd8),(wstring *)&local_c0,
                   (Color *)&local_40);
        *(PVZ2UIButton **)(this + 0xe8) = pPVar15;
        FUN_05476c50((Insets *)&local_c0);
        nop();
        iVar6 = FUN_04b00ba8(0x46);
        iVar4 = FUN_04b00ba8(5);
        iVar5 = FUN_04b00ba8(2);
        iVar7 = PVZ2UIImage::GetHeight((PVZ2UIImage *)&local_b0);
        iVar8 = FUN_04b00ba8(0x14);
        iVar9 = PVZ2UIImage::GetHeight((PVZ2UIImage *)&local_b0);
        iVar10 = PVZ2UIImage::GetWidth((PVZ2UIImage *)&local_b0);
        iVar3 = 0;
        if (iVar10 != 0) {
          iVar3 = (iVar8 * iVar9) / iVar10;
        }
        Sexy::Insets::Insets((Insets *)&local_c0,iVar4,((iVar2 - iVar5) - iVar7) / 2,iVar8,iVar3);
        PVZ2UIButton::AddImage
                  (*(PVZ2UIButton **)(this + 0xe8),(PVZ2UIImage *)&local_b0,(TRect *)&local_c0);
        iVar3 = FUN_04b00ba8(3);
        Sexy::Insets::Insets
                  ((Insets *)&local_40,(int)local_b8 + (int)local_c0 + iVar3,0,
                   (iVar1 - (int)local_b8) - iVar6,iVar2);
        pPVar15 = *(PVZ2UIButton **)(this + 0xe8);
        local_c0 = local_40;
        local_b8 = uStack_38;
        Sexy::Insets::Insets((Insets *)&local_40,(Insets *)&local_c0);
        PVZ2UIButton::AddText
                  (pPVar15,auStack_c8,(Insets *)&local_40,
                   PrimeText_Game::Typeface_FZCuYuan_19_Outline,0);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b82f08,2);
        local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0 + (int)local_b8);
        local_b0 = local_40;
        uStack_a8 = uStack_38;
        local_a0 = local_30;
        uStack_98 = uStack_28;
        local_90 = local_20;
        uStack_88 = uStack_18;
        local_80 = local_10;
        uVar11 = FUN_04b00ba8(4);
        local_c0._4_4_ = uVar11;
        iVar3 = FUN_04b00ba8(10);
        local_b8._4_4_ = iVar2 - iVar3;
        uVar11 = PVZ2UIImage::GetWidth((PVZ2UIImage *)&local_b0);
        local_b8 = CONCAT44(local_b8._4_4_,uVar11);
        PVZ2UIButton::AddImage
                  (*(PVZ2UIButton **)(this + 0xe8),(PVZ2UIImage *)&local_b0,(TRect *)&local_c0);
        iVar3 = (int)local_c0 + (int)local_b8;
        iVar6 = FUN_04b00ba8(3);
        local_c0 = CONCAT44(local_c0._4_4_,iVar3 + iVar6);
        uVar11 = FUN_04b00ba8(0xc);
        local_c0 = CONCAT44(uVar11,(int)local_c0);
        iVar6 = FUN_04b00ba8(0x17);
        local_b8._4_4_ = iVar6;
        iVar4 = PVZ2UIImage::GetWidth((PVZ2UIImage *)&local_78);
        iVar5 = PVZ2UIImage::GetHeight((PVZ2UIImage *)&local_78);
        iVar3 = 0;
        if (iVar5 != 0) {
          iVar3 = (iVar6 * iVar4) / iVar5;
        }
        local_b8 = CONCAT44(local_b8._4_4_,iVar3);
        PVZ2UIButton::AddImage
                  (*(PVZ2UIButton **)(this + 0xe8),(PVZ2UIImage *)&local_78,(TRect *)&local_c0);
      }
      else {
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b82fe8,1);
        local_b0 = local_40;
        uStack_a8 = uStack_38;
        local_a0 = local_30;
        uStack_98 = uStack_28;
        local_90 = local_20;
        uStack_88 = uStack_18;
        local_80 = local_10;
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b82f80,2);
        local_78 = local_40;
        uStack_70 = uStack_38;
        local_48 = local_10;
        local_68 = local_30;
        uStack_60 = uStack_28;
        local_58 = local_20;
        uStack_50 = uStack_18;
        pPVar12 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        uVar13 = PVPManager::TimeToGem(pPVar12,iVar3);
        Sexy::StrFormat(L"%d",(Insets *)&local_40,uVar13 & 0xffffffff);
        FUN_054766c8(auStack_c8,(Insets *)&local_40);
        FUN_05476c50((Insets *)&local_40);
        FUN_05478178((wstring *)&local_c0,&DAT_056f11a8,auStack_d0);
        Sexy::Color::Color((Color *)&local_40,1);
        this_02 = ::operator_new(0x338);
        PVPFinishButton::PVPFinishButton
                  (this_02,-3,(ButtonListener *)(this + 0xd8),(wstring *)&local_c0,
                   (Color *)&local_40);
        *(PVPFinishButton **)(this + 0xf0) = this_02;
        FUN_05476c50((wstring *)&local_c0);
        nop();
        this_03 = *(CardGameDeckButton **)(this + 0xf0);
        pPVar12 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        iVar3 = PVPManager::TimeToGem(pPVar12,iVar3);
        CardGameDeckButton::SetIndex(this_03,iVar3);
        *(undefined8 *)(this + 0xe8) = *(undefined8 *)(this + 0xf0);
      }
      FUN_05476c50(auStack_c8);
    }
    else {
      FUN_05478178((Insets *)&local_78,&DAT_056f11a8,&local_b0);
      Sexy::Color::Color((Color *)&local_40,1);
      pPVar15 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar15,-2,(ButtonListener *)(this + 0xd8),(wstring *)&local_78,(Color *)&local_40)
      ;
      *(PVZ2UIButton **)(this + 0xe8) = pPVar15;
      FUN_05476c50((Insets *)&local_78);
      nop();
      Sexy::Insets::Insets((Insets *)&local_78,0,0,iVar1,iVar2);
      TodStringTranslate(L"[PVP_ZOMBIE_LEVEL_UP_MAX]");
      pPVar15 = *(PVZ2UIButton **)(this + 0xe8);
      Sexy::Insets::Insets((Insets *)&local_40,(Insets *)&local_78);
      PVZ2UIButton::AddText
                (pPVar15,&local_b0,(Insets *)&local_40,PrimeText_Game::Typeface_FZCuYuan_19_Outline,
                 0);
      *(undefined1 *)(*(long *)(this + 0xe8) + 0x6e) = 1;
      FUN_05476c50(&local_b0);
    }
    GetLeftTopSectionRect();
    iVar6 = (int)local_b0;
    plVar16 = *(long **)(this + 0xe8);
    iVar4 = FUN_04b00ba8(0x1e);
    iVar3 = local_b0._4_4_ + uStack_a8._4_4_;
    iVar5 = FUN_04b00ba8(0x19);
    (**(code **)(*plVar16 + 0x198))(plVar16,iVar6 + iVar4,(iVar3 - iVar2) - iVar5,iVar1,iVar2);
    pPVar15 = *(PVZ2UIButton **)(this + 0xe8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b830f0,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b83140,3);
    PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::SetCurrentSkill(int) */

void __thiscall PVPSkillUpgrade::SetCurrentSkill(PVPSkillUpgrade *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  PVPManager *this_00;
  string *psVar3;
  long lVar4;
  undefined8 extraout_x0;
  undefined8 uVar5;
  SkillButton *this_01;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < param_1) {
    uVar5 = *(undefined8 *)(this + 0xf8);
    uVar1 = FUN_04b009cc(uVar5,*(undefined8 *)(this + 0x100));
    if ((ulong)(long)param_1 < uVar1) {
      if ((-1 < *(int *)(this + 0x110)) && ((ulong)(long)*(int *)(this + 0x110) < uVar1)) {
        puVar2 = (undefined8 *)FUN_04b009d8(uVar5);
        SkillButton::SetSelect((SkillButton *)*puVar2,false);
        uVar5 = *(undefined8 *)(this + 0xf8);
      }
      *(int *)(this + 0x110) = param_1;
      puVar2 = (undefined8 *)FUN_04b009d8(uVar5,(long)param_1);
      this_01 = (SkillButton *)*puVar2;
      SkillButton::SetSelect(this_01,true);
      uVar5 = SkillButton::GetSkill(this_01);
      FUN_05475d88(asStack_18,uVar5);
      this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      uVar5 = PVPManager::GetSkillData(this_00,asStack_18);
      *(undefined8 *)(this + 0x118) = uVar5;
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x120),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0xa0));
      nop();
      *(undefined8 *)(this + 0x128) = extraout_x0;
      std::string::~string(asStack_18);
      goto LAB_04b02d14;
    }
  }
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x120));
  *(undefined8 *)(this + 0x128) = 0;
LAB_04b02d14:
  RefreshUpgradeButton(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::PVPSkillUpgrade() */

void __thiscall PVPSkillUpgrade::PVPSkillUpgrade(PVPSkillUpgrade *this)

{
  ButtonListener *this_00;
  undefined *puVar1;
  LawnApp *pLVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  PrimeText *this_01;
  PVZ2UIButton *this_02;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  PVPCancelUpgradeBtn *this_03;
  code *pcVar14;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  int local_b8;
  int local_b4;
  Delegate0 aDStack_a8 [48];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  *(undefined ***)this = &PTR_GetClass_06953020;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06953348;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x120));
  *(undefined8 *)(this + 0x130) = 0;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_40,"UI_PVP_Upgrade");
  LawnApp::LoadGroup(pLVar2,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_40,"UI_WorldPreview");
  LawnApp::LoadGroup(pLVar2,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  *(undefined8 *)(this + 0xe8) = 0;
  pLVar2 = gLawnApp;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)(pLVar2 + 0x71c));
  iVar3 = FUN_04b00ba8(0x1ea);
  iVar4 = FUN_04b00ba8(10);
  *(int *)(this + 0xe4) = iVar4 + (*(int *)(this + 0x54) - iVar3) / 2;
  iVar3 = FUN_04b00ba8(0x30c);
  *(int *)(this + 0xe0) = (*(int *)(this + 0x50) - iVar3) / 2;
  FUN_05478178((wstring *)&local_78,&DAT_056f11a8,&local_b8);
  Sexy::Color::Color((Color *)&local_40,1);
  this_02 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_02,-1,this_00,(wstring *)&local_78,(Color *)&local_40);
  FUN_05476c50((wstring *)&local_78);
  nop();
  pcVar14 = *(code **)(*(long *)this_02 + 0x198);
  iVar5 = FUN_04b00ba8(0x30c);
  iVar3 = *(int *)(this + 0xe0);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b830c0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar7 = FUN_04b00ba8(0x14);
  iVar8 = FUN_04b00ba8(3);
  iVar4 = *(int *)(this + 0xe4);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b830c0);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b830c0);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b830c0);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar13);
  (*pcVar14)(this_02,(((iVar5 + iVar3) - iVar6) - iVar7) + iVar8,iVar4 - iVar9,uVar10,uVar11);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b830c0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b82f30,1);
  PVZ2UIButton::SetDialogStates(this_02,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_02);
  this_03 = ::operator_new(0x300);
  PVPCancelUpgradeBtn::PVPCancelUpgradeBtn(this_03,-10,this_00);
  GetLeftTopSectionRect();
  iVar3 = FUN_04b00ba8(0x1e);
  *(int *)(this_03 + 0x48) = local_b8 + iVar3;
  iVar3 = FUN_04b00ba8(0x32);
  *(int *)(this_03 + 0x4c) = local_b4 + iVar3;
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_03);
  (**(code **)(*(long *)this_03 + 0x158))(this_03,0);
  *(PVPCancelUpgradeBtn **)(this + 0x130) = this_03;
  RefreshSkillButton(this);
  SetCurrentSkill(this,0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPLabRefresh);
  Sexy::Delegate0::Delegate0<PVPSkillUpgrade,void(PVPSkillUpgrade::*)()>
            (aDStack_a8,(string *)&local_40);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PVPLabRefresh,aDStack_a8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,BeginPVPUpgradeSuccess);
  Sexy::Delegate0::Delegate0<PVPSkillUpgrade,void(PVPSkillUpgrade::*)()>
            (aDStack_a8,(string *)&local_40);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BeginPVPUpgradeSuccess,aDStack_a8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GetPVPCompleteUpgradeGemSuccess);
  local_d0 = local_68;
  local_e0 = local_78;
  uStack_d8 = uStack_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PVPSkillUpgrade,void(PVPSkillUpgrade::*)(int)>>
            ((MessageRouter *)puVar1,Message::GetPVPCompleteUpgradeGemSuccess,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GetPVPCompletePVPUpgrade);
  local_100 = local_40;
  uStack_f8 = uStack_38;
  local_f0 = local_30;
  MessageRouter::
  Subscribe<S2C_PVPCompleteUpgradeData*,Sexy::CBMemberTranslatorX<PVPSkillUpgrade,void(PVPSkillUpgrade::*)(S2C_PVPCompleteUpgradeData*)>>
            ((MessageRouter *)puVar1,Message::GetPVPCompletePVPUpgrade,&local_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSkillUpgrade::onPVPLabRefresh() */

void __thiscall PVPSkillUpgrade::onPVPLabRefresh(PVPSkillUpgrade *this)

{
  RefreshSkillButton(this);
  SetCurrentSkill(this,*(int *)(this + 0x110));
  return;
}


/* PVPSkillUpgrade::ConfirmCompletePVPUpgrade(int) */

void __thiscall PVPSkillUpgrade::ConfirmCompletePVPUpgrade(PVPSkillUpgrade *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  RefreshUpgradeButton(this);
  if (param_1 != 1) {
    return;
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestCompletePVPUpgrade(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::DrawLeftTopSection(Sexy::Graphics*) */

void __thiscall PVPSkillUpgrade::DrawLeftTopSection(PVPSkillUpgrade *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  LotteryResultProgressBar *this_00;
  Image *pIVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  SkillButton *this_01;
  Zombie aZStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetLeftTopSectionRect();
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b831f0);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83038);
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83038);
  iVar5 = local_38;
  iVar1 = FUN_04b00ba8(0x14);
  iVar6 = local_34;
  iVar2 = FUN_04b00ba8(0x2d);
  iVar3 = FUN_04b00ba8(200);
  iVar4 = FUN_04b00ba8(0xb4);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5 + iVar1,iVar6 + iVar2,iVar3,iVar4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aIStack_18,(RtWeakPtrBase *)(this + 0x120));
  Zombie::GetFormattedNameString(aZStack_40,aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  iVar6 = local_34;
  iVar5 = local_38;
  iVar2 = FUN_04b00ba8(5);
  iVar1 = local_30;
  iVar3 = FUN_04b00ba8(100);
  Sexy::Insets::Insets(aIStack_28,iVar5,iVar6 + iVar2,iVar1,iVar3);
  uVar7 = PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,aZStack_40,aIStack_28,uVar7,aIStack_18,2,1);
  iVar5 = *(int *)(this + 0x110);
  if (-1 < iVar5) {
    uVar7 = *(undefined8 *)(this + 0xf8);
    uVar9 = FUN_04b009cc(uVar7,*(undefined8 *)(this + 0x100));
    if ((ulong)(long)iVar5 < uVar9) {
      puVar10 = (undefined8 *)FUN_04b009d8(uVar7,(long)iVar5);
      this_01 = (SkillButton *)*puVar10;
      iVar5 = FUN_04b00ba8(100);
      iVar6 = FUN_04b00ba8(0x3c);
      Sexy::Insets::Insets
                (aIStack_18,local_38 + (local_30 - iVar5) / 2,local_34 + iVar6,iVar5,iVar5);
      SkillButton::Draw(this_01,param_1,(TRect *)aIStack_18,false);
    }
  }
  iVar5 = GetCurrentSkillCompleteTime(this);
  if (0 < iVar5) {
    DrawTimeLeft(this,param_1,(float)iVar5);
  }
  plVar11 = *(long **)(this + 0x130);
  if (((plVar11 != (long *)0x0) && ((bool)*(char *)((long)plVar11 + 0x6c) != 0 < iVar5)) &&
     ((**(code **)(*plVar11 + 0x158))(plVar11,0 < iVar5), iVar5 < 1)) {
    RefreshUpgradeButton(this);
  }
  FUN_05476c50(aZStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::Draw(Sexy::Graphics*) */

void __thiscall PVPSkillUpgrade::Draw(PVPSkillUpgrade *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  nop();
  iVar1 = FUN_04b00ba8(0x30c);
  iVar2 = FUN_04b00ba8(0x1ea);
  Sexy::Insets::Insets(aIStack_38,*(int *)(this + 0xe0),*(int *)(this + 0xe4),iVar1,iVar2);
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83168);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  TodStringTranslate(L"[SKILL_LEVEL]");
  iVar2 = FUN_04b00ba8(10);
  iVar1 = *(int *)(this + 0xe4);
  iVar3 = FUN_04b00ba8(100);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0xe0),iVar2 + iVar1,*(int *)(this + 0x50),iVar3);
  uVar4 = PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar4,aIStack_18,2,1);
  FUN_05476c50(auStack_40);
  DrawLeftTopSection(this,param_1);
  DrawRightTopSection(this,param_1);
  GetBottomSectionRect();
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82f58);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::ButtonDepress(int) */

void __thiscall PVPSkillUpgrade::ButtonDepress(PVPSkillUpgrade *this,int param_1)

{
  int iVar1;
  NetworkMgr *pNVar2;
  INetworkMsgProcess *pIVar3;
  AssetsManagerManifest *this_00;
  long lVar4;
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case -10:
    this_00 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar4 = AssetsManagerManifest::getAssets(this_00);
    iVar1 = FUN_04b00990(*(undefined4 *)(lVar4 + 0x30));
    if (iVar1 == 7) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      pIVar3 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      iVar1 = FUN_04b00994(*(undefined4 *)(lVar4 + 0x34));
      INetworkMsgProcess::RequestPVPUpgradeCancel(pIVar3,7,iVar1);
    }
    break;
  default:
    SetCurrentSkill(this,param_1);
    break;
  case -3:
    pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar3 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
    INetworkMsgProcess::RequestPvPUpgradeCompleteGem(pIVar3);
    break;
  case -2:
    ServerZombieID::ServerZombieID(aSStack_18,*(string **)(this + 0x118));
    iVar1 = ImageLib::Image::GetWidth((Image *)aSStack_18);
    pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar3 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
    INetworkMsgProcess::RequestBeginPVPUpgrade(pIVar3,7,iVar1);
    break;
  case -1:
    LawnApp::KillPvpUpgrade(gLawnApp);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVPSkillUpgrade::ButtonDepress(int) */

void __thiscall PVPSkillUpgrade::ButtonDepress(PVPSkillUpgrade *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::BeginPVPUpgradeSuccess() */

void __thiscall PVPSkillUpgrade::BeginPVPUpgradeSuccess(PVPSkillUpgrade *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  AssetsManagerManifest *this_00;
  PVPLabData *pPVar4;
  string *psVar5;
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  psVar5 = *(string **)(this + 0x118);
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined4 *)
           FUN_04b009e0(*(undefined8 *)(*(long *)(this + 0x128) + 0x250),
                        (long)(*(int *)(psVar5 + 8) + -1));
  uVar1 = *puVar3;
  ServerZombieID::ServerZombieID(aSStack_18,psVar5);
  uVar2 = ImageLib::Image::GetWidth((Image *)aSStack_18);
  this_00 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pPVar4 = (PVPLabData *)AssetsManagerManifest::getAssets(this_00);
  PVPLabData::SetUpgradeItem(pPVar4,7,uVar2,uVar1);
  RefreshUpgradeButton(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::GetPVPCompletePVPUpgrade(S2C_PVPCompleteUpgradeData*) */

void __thiscall
PVPSkillUpgrade::GetPVPCompletePVPUpgrade(PVPSkillUpgrade *this,S2C_PVPCompleteUpgradeData *param_1)

{
  int iVar1;
  AssetsManagerManifest *this_00;
  PVPLabData *pPVar2;
  PlayerInfo *this_01;
  PVPManager *this_02;
  long lVar3;
  string asStack_20 [8];
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x14);
  local_8 = ___stack_chk_guard;
  this_00 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pPVar2 = (PVPLabData *)AssetsManagerManifest::getAssets(this_00);
  PVPLabData::SetUpgradeItem(pPVar2,0,0,0);
  this_01 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::SetGems(this_01,*(int *)(param_1 + 0x20));
  }
  if (iVar1 == 7) {
    ServerZombieID::ServerZombieID(aSStack_18,*(int *)(param_1 + 0x1c));
    ServerZombieID::ToString();
    this_02 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar3 = PVPManager::GetSkillData(this_02,asStack_20);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 8) = *(undefined4 *)(param_1 + 0x18);
    }
    std::string::~string(asStack_20);
  }
  RefreshSkillButton(this);
  SetCurrentSkill(this,*(int *)(this + 0x110));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

