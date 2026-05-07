// Class: AutumnHarvestRewardFrame


/* AutumnHarvestRewardFrame::~AutumnHarvestRewardFrame() */

void __thiscall AutumnHarvestRewardFrame::~AutumnHarvestRewardFrame(AutumnHarvestRewardFrame *this)

{
  *(undefined ***)this = &PTR_GetClass_069f5cb0;
  FUN_05476c50(this + 0x178);
  FUN_05476c50(this + 0x168);
  UIRewardFrameSelect::~UIRewardFrameSelect((UIRewardFrameSelect *)this);
  return;
}


/* AutumnHarvestRewardFrame::~AutumnHarvestRewardFrame() */

void __thiscall AutumnHarvestRewardFrame::~AutumnHarvestRewardFrame(AutumnHarvestRewardFrame *this)

{
  ~AutumnHarvestRewardFrame(this);
  AK::FreeHook(this);
  return;
}


/* AutumnHarvestRewardFrame::SetItemName(std::wstring) */

void AutumnHarvestRewardFrame::SetItemName(long param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x168);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestRewardFrame::AutumnHarvestRewardFrame(UIRewardFrame::RewardType, std::string const&,
   int, bool) */

void __thiscall AutumnHarvestRewardFrame::AutumnHarvestRewardFrame(AutumnHarvestRewardFrame *this)

{
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIRewardFrameSelect::UIRewardFrameSelect();
  *(undefined ***)this = &PTR_GetClass_069f5cb0;
  FUN_05476574(this + 0x168);
  FUN_05476574(this + 0x178);
  this[0x164] = (AutumnHarvestRewardFrame)0x0;
  this[0x59] = (AutumnHarvestRewardFrame)0x0;
  this[0x170] = (AutumnHarvestRewardFrame)0x0;
  this[0x171] = (AutumnHarvestRewardFrame)0x0;
  *(undefined4 *)(this + 0x174) = 0;
  std::string::string(asStack_10,"[AUTUMN_HARVEST_BONUS_CHOOSE_TITLE]");
  StringHelper::ToStringValue(asStack_10);
  FUN_054766c8(this + 0x168,auStack_18);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_10);
  nop();
  FUN_054772c4(this + 0x178,&DAT_056f11a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestRewardFrame::CreateUIRewardFrame(AutumnHarvestRewardFrame*) */

void AutumnHarvestRewardFrame::CreateUIRewardFrame(AutumnHarvestRewardFrame *param_1)

{
  wstring *this;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x180);
  AutumnHarvestRewardFrame
            ((AutumnHarvestRewardFrame *)this,*(undefined4 *)(param_1 + 0xd4),param_1 + 0xd8,
             *(undefined4 *)(param_1 + 0xe8),param_1[0xd1]);
  FUN_05477b24(auStack_10,param_1 + 0x150);
  LevelEditorStatueMazeSliderWidget::SetDescription4(this);
  FUN_05476c50(auStack_10);
  UIRewardFrame::SetObjectID((UIRewardFrame *)this,*(int *)(param_1 + 300));
  Lua::CUILabel::SetTypeface((CUILabel *)this,*(PrimeTypeface **)(param_1 + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestRewardFrame::SetRatio(int) */

void __thiscall AutumnHarvestRewardFrame::SetRatio(AutumnHarvestRewardFrame *this,int param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x174) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",auStack_10);
  FUN_054766c8(this + 0x178,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05477888(this + 0x178,&DAT_0574d5f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutumnHarvestRewardFrame::DetermineSelect(UIMessageBox*, int) */

void __thiscall
AutumnHarvestRewardFrame::DetermineSelect
          (AutumnHarvestRewardFrame *this,UIMessageBox *param_1,int param_2)

{
  undefined4 uVar1;
  UICommonItemSelect *this_00;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if ((param_2 == 1) &&
     (this_00 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::GetSingletonPtr(),
     this_00 != (UICommonItemSelect *)0x0)) {
    uVar1 = UICommonItemSelect::GetSelectIndexExtra(this_00);
    UISingletonDialog<UICommonItemSelect>::CloseDialog();
    (**(code **)(*(long *)this + 1000))(this,uVar1);
    return;
  }
  return;
}


/* AutumnHarvestRewardFrame::TouchEnded(Sexy::Touch const&) */

void AutumnHarvestRewardFrame::TouchEnded(Touch *param_1)

{
  char cVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x158) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (param_1[0x164] != (Touch)0x0) {
    lVar2 = Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
    cVar1 = FUN_04ebbd04(*(undefined1 *)(lVar2 + 0x121));
    if (cVar1 != '\0') {
      (**(code **)(*(long *)param_1 + 0x3d8))(param_1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestRewardFrame::Draw(Sexy::Graphics*) */

void __thiscall AutumnHarvestRewardFrame::Draw(AutumnHarvestRewardFrame *this,Graphics *param_1)

{
  AutumnHarvestRewardFrame AVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  undefined8 uVar5;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIRewardFrame::Draw((UIRewardFrame *)this,param_1);
  if (this[0x171] == (AutumnHarvestRewardFrame)0x0) {
    AVar1 = this[0x170];
  }
  else {
    iVar3 = FUN_04ebda84(0x1e);
    Sexy::Insets::Insets(aIStack_28,0,*(int *)(this + 0x54) - iVar3,*(int *)(this + 0x50),iVar3);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x168,aIStack_28,uVar5,aCStack_18,5,1);
    AVar1 = this[0x170];
  }
  if (AVar1 == (AutumnHarvestRewardFrame)0x0) {
    iVar3 = *(int *)(this + 0xd4);
  }
  else {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba2190);
    iVar3 = FUN_04ebda84(0xfffffffe);
    iVar2 = FUN_04ebda84(4);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,iVar3,iVar3,iVar2 + *(int *)(this + 0x50),
               iVar2 + *(int *)(this + 0x54));
    iVar3 = *(int *)(this + 0xd4);
  }
  if (iVar3 == 1) {
    iVar3 = FUN_04ebda84(0x1e);
    Sexy::Insets::Insets(aIStack_28,0,*(int *)(this + 0x54) - iVar3,*(int *)(this + 0x50),iVar3);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x178,aIStack_28,uVar5,aCStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestRewardFrame::DrawOthers(Sexy::Graphics*) */

void __thiscall
AutumnHarvestRewardFrame::DrawOthers(AutumnHarvestRewardFrame *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  undefined8 uVar3;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd1] != (AutumnHarvestRewardFrame)0x0) {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba23f8);
    Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba2368);
  Sexy::Graphics::DrawImage
            (param_1,pIVar2,(int)((float)*(int *)(this + 0x50) * 0.25),
             (int)((float)*(int *)(this + 0x54) * 0.25),(int)((float)*(int *)(this + 0x50) * 0.5),
             (int)((float)*(int *)(this + 0x54) * 0.5));
  iVar1 = FUN_04ebda84(0x14);
  Sexy::Insets::Insets(aIStack_28,0,*(int *)(this + 0x54) - iVar1,*(int *)(this + 0x50),iVar1);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12_Outline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x168,aIStack_28,uVar3,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestRewardFrame::TouchBegan(Sexy::Touch const&) */

void AutumnHarvestRewardFrame::TouchBegan(Touch *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  StoneLotteryItemTipUI *this_01;
  long lVar5;
  int iVar6;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x164] == (Touch)0x0) {
    (**(code **)(*(long *)param_1 + 0xd0))(&local_20);
    this = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba2550);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
    iVar6 = (int)((float)iVar2 + (float)iVar2);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba2550);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
    iVar2 = *(int *)(param_1 + 0x50);
    iVar4 = FUN_04ebda84(5);
    Sexy::Insets::Insets
              (aIStack_18,local_20 + (iVar2 - iVar6) / 2,
               (local_1c - (int)((float)iVar3 * 0.5)) + iVar4,iVar6,(int)((float)iVar3 * 0.5));
    lVar5 = *(long *)(param_1 + 0x158);
    if (lVar5 == 0) {
      this_01 = ::operator_new(0xe8);
      memset(this_01,0,0xe8);
      StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_01);
      uVar1 = *(uint *)(this_01 + 0x60);
      *(StoneLotteryItemTipUI **)(param_1 + 0x158) = this_01;
      *(uint *)(this_01 + 0x60) = uVar1 | 0x10;
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_01);
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
                (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0x158));
      lVar5 = *(long *)(param_1 + 0x158);
    }
    PuzzleTip::SetTip(lVar5,param_1 + 0x150);
    (**(code **)(**(long **)(param_1 + 0x158) + 0x1a0))(*(long **)(param_1 + 0x158),aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestRewardFrame::ShowSelectUI() */

void __thiscall AutumnHarvestRewardFrame::ShowSelectUI(AutumnHarvestRewardFrame *this)

{
  UICommonItemSelect *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  AutumnHarvestNetworkData *pAVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int local_18c;
  undefined4 local_188;
  undefined4 local_184;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_178 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_160 [24];
  function<bool(Sexy::Touch_const&)> afStack_148 [32];
  string asStack_128 [24];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::ShowDialog();
  std::string::string(asStack_128,"[AUTUMN_HARVEST_BONUS_SELECT_TITLE]");
  UICommonItemSelect::SetTitle(this_00,asStack_128);
  std::string::~string(asStack_128);
  nop();
  std::string::string(asStack_128,"[AUTUMN_HARVEST_BONUS_SELECT_DESCRIPTION]");
  UICommonItemSelect::SetDescription(this_00,asStack_128);
  std::string::~string(asStack_128);
  nop();
  UICommonItemSelect::SetCloseButtonVisible(this_00,false);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
  pAVar1 = (AutumnHarvestNetworkData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_01);
  AutumnHarvestNetworkData::AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128,pAVar1)
  ;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_178);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_160);
  local_18c = 0;
  while (iVar5 = local_18c, uVar4 = FUN_04ebc1cc(local_110,local_108), (ulong)(long)iVar5 < uVar4) {
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_188);
    iVar5 = local_18c;
    lVar6 = (long)local_18c;
    piVar2 = (int *)FUN_04ebc158(local_f8,lVar6);
    if (0 < *piVar2) {
      puVar3 = (undefined4 *)FUN_04ebc1e0(local_110,lVar6);
      local_188 = *puVar3;
      local_184 = puVar3[1];
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_178,
                 (S2C_BonusInfo *)&local_188);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_160,&local_18c);
      iVar5 = local_18c;
    }
    local_18c = iVar5 + 1;
  }
  (**(code **)(*(long *)this_00 + 0x358))(this_00,avStack_178);
  UICommonItemSelect::LoadDataIndex(this_00,(vector *)avStack_160);
  FUN_04ebda28(afStack_148,this);
  UICommonItemSelect::registerSelectRecall(this_00,(function *)afStack_148);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_148);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_160);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_178);
  AutumnHarvestNetworkData::~AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestRewardFrame::CreateUIRewardFrame(int, int, bool) */

void AutumnHarvestRewardFrame::CreateUIRewardFrame(int param_1,int param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  NameMapperBase *pNVar4;
  wstring *this;
  string *extraout_x0;
  int iVar5;
  size_t __n;
  undefined1 uVar6;
  PrimeTypeface *pPVar7;
  string asStack_68 [8];
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  int local_38 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = (size_t)param_3;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_68);
  FUN_05476574(auStack_60);
  pNVar4 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 == '\0') {
      pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
      if (cVar1 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04ebbcd4(param_1);
        if (cVar1 != '\0') {
          uVar6 = 1;
          std::string::append(asStack_68,"gem",__n);
          goto LAB_04ec8db4;
        }
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04ebbcc4(param_1);
        if (cVar1 != '\0') {
          std::string::append(asStack_68,"coin",__n);
          uVar6 = 0;
          goto LAB_04ec8db4;
        }
        pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
        if (cVar1 == '\0') {
          pNVar4 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
          if (cVar1 == '\0') {
            pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
            if (cVar1 == '\0') {
              pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
              cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
              if (cVar1 == '\0') {
                pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
                cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                if (cVar1 == '\0') {
                  pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
                  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                  if (cVar1 == '\0') {
                    OtherServerNameMapper::GetInstance();
                    cVar1 = FUN_02fd47c0(param_1);
                    if (cVar1 != '\0') {
                      uVar6 = 5;
                      std::string::append(asStack_68,"cuke",__n);
                      goto LAB_04ec8db4;
                    }
                    if (param_1 - 0x61a9U < 999) {
                      DSingleton<HeadshotConfig>::getInstance();
                      nop();
                      DString::DString((DString *)local_38,param_1);
                      DString::operator_cast_to_string((DString *)local_38);
                      std::string::string(asStack_50,"plant");
                      uVar6 = 0xd;
                      std::string::string(asStack_48,"none");
                      DIniFile::getItem(extraout_x0,asStack_58,asStack_50);
                      thunk_FUN_05475e00(asStack_68,asStack_40);
                      std::string::~string(asStack_40);
                      std::string::~string(asStack_48);
                      nop();
                      std::string::~string(asStack_50);
                      nop();
                      std::string::~string(asStack_58);
                      DString::~DString((DString *)local_38);
                      goto LAB_04ec8db4;
                    }
                    pNVar4 = (NameMapperBase *)CollectionMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                    if (cVar1 != '\0') {
                      iVar3 = CollectionMapper::GetInstance();
                      iVar5 = (int)__n;
                      uVar6 = 0xe;
                      NameMapperBase::GetNameForId(iVar3);
                      FUN_05474278(asStack_68,(string *)local_38);
                      std::string::~string((string *)local_38);
                      CollectionUtils::GetCollectionName
                                ((CollectionUtils *)(ulong)(uint)param_1,param_2,iVar5);
                      FUN_054766c8(auStack_60,(string *)local_38);
                      FUN_05476c50((string *)local_38);
                      goto LAB_04ec8db4;
                    }
                    pNVar4 = (NameMapperBase *)CardMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                    if (cVar1 == '\0') {
                      pNVar4 = (NameMapperBase *)ArtifactMapper::GetInstance();
                      cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                      if (cVar1 == '\0') {
                        pNVar4 = (NameMapperBase *)GeneMapper::GetInstance();
                        cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                        if (cVar1 == '\0') {
                          pNVar4 = (NameMapperBase *)GeneEssenceMapper::GetInstance();
                          cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                          if (cVar1 == '\0') {
                            pNVar4 = (NameMapperBase *)RankAvatarMapper::GetInstance();
                            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                            if (cVar1 == '\0') {
                              pNVar4 = (NameMapperBase *)ExpMapper::GetInstance();
                              cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                              if (cVar1 == '\0') {
                                uVar6 = 5;
                                std::string::append(asStack_68,"",__n);
                                goto LAB_04ec8db4;
                              }
                              iVar3 = ExpMapper::GetInstance();
                              uVar6 = 0x13;
                            }
                            else {
                              iVar3 = RankAvatarMapper::GetInstance();
                              uVar6 = 0x12;
                            }
                          }
                          else {
                            iVar3 = GeneEssenceMapper::GetInstance();
                            uVar6 = 0x11;
                          }
                        }
                        else {
                          iVar3 = GeneMapper::GetInstance();
                          uVar6 = 0x10;
                        }
                      }
                      else {
                        iVar3 = ArtifactMapper::GetInstance();
                        uVar6 = 0xc;
                      }
                    }
                    else {
                      iVar3 = CardMapper::GetInstance();
                      uVar6 = 0xf;
                    }
                  }
                  else {
                    iVar3 = PlantNewAvatarPieceMapper::GetInstance();
                    uVar6 = 0xb;
                  }
                }
                else {
                  iVar3 = PlantNewAvatarMapper::GetInstance();
                  uVar6 = 10;
                }
              }
              else {
                iVar3 = MaterialItemMapper::GetInstance();
                uVar6 = 9;
              }
            }
            else {
              iVar3 = PlantAccessoryPieceMapper::GetInstance();
              uVar6 = 8;
            }
          }
          else {
            iVar3 = PlantAccessoryInfoMapper::GetInstance();
            uVar6 = 7;
          }
        }
        else {
          iVar3 = AvatarNameMapperServerID::GetInstance();
          uVar6 = 6;
        }
      }
      else {
        iVar3 = AvatarChipNameMapperServerID::GetInstance();
        uVar6 = 4;
      }
    }
    else {
      iVar3 = PlantChipNameMapperServerID::GetInstance();
      uVar6 = 3;
    }
  }
  else {
    iVar3 = PlantNameMapperServerID::GetInstance();
    uVar6 = 2;
  }
  NameMapperBase::GetNameForId(iVar3);
  FUN_05474278(asStack_68,(string *)local_38);
  std::string::~string((string *)local_38);
LAB_04ec8db4:
  pPVar7 = (PrimeTypeface *)0x0;
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_38[0] != 0) {
    cVar1 = FUN_054765e8(auStack_60);
    if ((cVar1 != '\0') && (thunk_FUN_05477b9c(auStack_60,auStack_10), 0 < param_2)) {
      Sexy::StrFormat(L"x%d",asStack_40,(ulong)(uint)param_2);
      thunk_FUN_05477668(auStack_60,asStack_40);
      FUN_05476c50(asStack_40);
    }
    pPVar7 = (PrimeTypeface *)StringHelper::ToImage(asStack_18,false);
  }
  this = ::operator_new(0x180);
  AutumnHarvestRewardFrame
            ((AutumnHarvestRewardFrame *)this,uVar6,asStack_68,(ulong)(uint)param_2,param_3);
  FUN_05477b24(asStack_40,auStack_60);
  LevelEditorStatueMazeSliderWidget::SetDescription4(this);
  FUN_05476c50(asStack_40);
  UIRewardFrame::SetObjectID((UIRewardFrame *)this,param_1);
  bVar2 = std::operator==(asStack_68,"cuke");
  if (bVar2) {
    Lua::CUILabel::SetTypeface((CUILabel *)this,pPVar7);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  FUN_05476c50(auStack_60);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestRewardFrame::ModifyRewardItem(int, int) */

void __thiscall
AutumnHarvestRewardFrame::ModifyRewardItem(AutumnHarvestRewardFrame *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  NameMapperBase *pNVar4;
  string *extraout_x0;
  int iVar5;
  ulong __n;
  undefined4 uVar6;
  PrimeTypeface *pPVar7;
  string asStack_68 [8];
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  int local_38 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = (ulong)(uint)param_2;
  Set8BytesTo0(asStack_68);
  FUN_05476574(auStack_60);
  pNVar4 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 == '\0') {
      pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
      if (cVar1 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04ebbcd4(param_1);
        if (cVar1 != '\0') {
          uVar6 = 1;
          std::string::append(asStack_68,"gem",__n);
          goto LAB_04ec9a1c;
        }
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04ebbcc4(param_1);
        if (cVar1 != '\0') {
          std::string::append(asStack_68,"coin",__n);
          uVar6 = 0;
          goto LAB_04ec9a1c;
        }
        pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
        if (cVar1 == '\0') {
          pNVar4 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
          if (cVar1 == '\0') {
            pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
            if (cVar1 == '\0') {
              pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
              cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
              if (cVar1 == '\0') {
                pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
                cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                if (cVar1 == '\0') {
                  pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
                  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                  if (cVar1 == '\0') {
                    OtherServerNameMapper::GetInstance();
                    cVar1 = FUN_02fd47c0(param_1);
                    if (cVar1 != '\0') {
                      uVar6 = 5;
                      std::string::append(asStack_68,"cuke",__n);
                      goto LAB_04ec9a1c;
                    }
                    if (param_1 - 0x61a9U < 999) {
                      DSingleton<HeadshotConfig>::getInstance();
                      nop();
                      DString::DString((DString *)local_38,param_1);
                      DString::operator_cast_to_string((DString *)local_38);
                      std::string::string(asStack_50,"plant");
                      uVar6 = 0xd;
                      std::string::string(asStack_48,"none");
                      DIniFile::getItem(extraout_x0,asStack_58,asStack_50);
                      thunk_FUN_05475e00(asStack_68,asStack_40);
                      std::string::~string(asStack_40);
                      std::string::~string(asStack_48);
                      nop();
                      std::string::~string(asStack_50);
                      nop();
                      std::string::~string(asStack_58);
                      DString::~DString((DString *)local_38);
                      goto LAB_04ec9a1c;
                    }
                    pNVar4 = (NameMapperBase *)CollectionMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                    if (cVar1 != '\0') {
                      iVar3 = CollectionMapper::GetInstance();
                      iVar5 = (int)__n;
                      uVar6 = 0xe;
                      NameMapperBase::GetNameForId(iVar3);
                      FUN_05474278(asStack_68,(string *)local_38);
                      std::string::~string((string *)local_38);
                      CollectionUtils::GetCollectionName
                                ((CollectionUtils *)(ulong)(uint)param_1,param_2,iVar5);
                      FUN_054766c8(auStack_60,(string *)local_38);
                      FUN_05476c50((string *)local_38);
                      goto LAB_04ec9a1c;
                    }
                    pNVar4 = (NameMapperBase *)CardMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                    if (cVar1 == '\0') {
                      pNVar4 = (NameMapperBase *)ArtifactMapper::GetInstance();
                      cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                      if (cVar1 == '\0') {
                        pNVar4 = (NameMapperBase *)GeneMapper::GetInstance();
                        cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                        if (cVar1 == '\0') {
                          pNVar4 = (NameMapperBase *)GeneEssenceMapper::GetInstance();
                          cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                          if (cVar1 == '\0') {
                            pNVar4 = (NameMapperBase *)RankAvatarMapper::GetInstance();
                            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                            if (cVar1 == '\0') {
                              pNVar4 = (NameMapperBase *)ExpMapper::GetInstance();
                              cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                              if (cVar1 == '\0') {
                                uVar6 = 5;
                                std::string::append(asStack_68,"",__n);
                                goto LAB_04ec9a1c;
                              }
                              iVar3 = ExpMapper::GetInstance();
                              uVar6 = 0x13;
                            }
                            else {
                              iVar3 = RankAvatarMapper::GetInstance();
                              uVar6 = 0x12;
                            }
                          }
                          else {
                            iVar3 = GeneEssenceMapper::GetInstance();
                            uVar6 = 0x11;
                          }
                        }
                        else {
                          iVar3 = GeneMapper::GetInstance();
                          uVar6 = 0x10;
                        }
                      }
                      else {
                        iVar3 = ArtifactMapper::GetInstance();
                        uVar6 = 0xc;
                      }
                    }
                    else {
                      iVar3 = CardMapper::GetInstance();
                      uVar6 = 0xf;
                    }
                  }
                  else {
                    iVar3 = PlantNewAvatarPieceMapper::GetInstance();
                    uVar6 = 0xb;
                  }
                }
                else {
                  iVar3 = PlantNewAvatarMapper::GetInstance();
                  uVar6 = 10;
                }
              }
              else {
                iVar3 = MaterialItemMapper::GetInstance();
                uVar6 = 9;
              }
            }
            else {
              iVar3 = PlantAccessoryPieceMapper::GetInstance();
              uVar6 = 8;
            }
          }
          else {
            iVar3 = PlantAccessoryInfoMapper::GetInstance();
            uVar6 = 7;
          }
        }
        else {
          iVar3 = AvatarNameMapperServerID::GetInstance();
          uVar6 = 6;
        }
      }
      else {
        iVar3 = AvatarChipNameMapperServerID::GetInstance();
        uVar6 = 4;
      }
    }
    else {
      iVar3 = PlantChipNameMapperServerID::GetInstance();
      uVar6 = 3;
    }
  }
  else {
    iVar3 = PlantNameMapperServerID::GetInstance();
    uVar6 = 2;
  }
  NameMapperBase::GetNameForId(iVar3);
  FUN_05474278(asStack_68,(string *)local_38);
  std::string::~string((string *)local_38);
LAB_04ec9a1c:
  pPVar7 = (PrimeTypeface *)0x0;
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_38[0] != 0) {
    cVar1 = FUN_054765e8(auStack_60);
    if ((cVar1 != '\0') && (thunk_FUN_05477b9c(auStack_60,auStack_10), 0 < param_2)) {
      Sexy::StrFormat(L"x%d",asStack_40,(ulong)(uint)param_2);
      thunk_FUN_05477668(auStack_60,asStack_40);
      FUN_05476c50(asStack_40);
    }
    pPVar7 = (PrimeTypeface *)StringHelper::ToImage(asStack_18,false);
  }
  *(undefined4 *)(this + 0xd4) = uVar6;
  thunk_FUN_05475e00(this + 0xd8,asStack_68);
  *(int *)(this + 0xe8) = param_2;
  *(undefined8 *)(this + 0xe0) = 0;
  FUN_05477b24(asStack_40,auStack_60);
  LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)this);
  FUN_05476c50(asStack_40);
  UIRewardFrame::SetObjectID((UIRewardFrame *)this,param_1);
  bVar2 = std::operator==(asStack_68,"cuke");
  if (bVar2) {
    Lua::CUILabel::SetTypeface((CUILabel *)this,pPVar7);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  FUN_05476c50(auStack_60);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestRewardFrame::RequestSelectReward(int) */

void __thiscall
AutumnHarvestRewardFrame::RequestSelectReward(AutumnHarvestRewardFrame *this,int param_1)

{
  string *this_00;
  string *psVar1;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3240];
  string asStack_40 [56];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  psVar1 = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"1",(size_t)psVar1);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"pk");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,param_1);
  __s = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar1,__s,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04ebd970(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_40,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

