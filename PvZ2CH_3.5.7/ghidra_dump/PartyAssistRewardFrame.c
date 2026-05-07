// Class: PartyAssistRewardFrame


/* PartyAssistRewardFrame::TouchEnded(Sexy::Touch const&) */

void PartyAssistRewardFrame::TouchEnded(Touch *param_1)

{
  if (*(long *)(param_1 + 0x158) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (param_1[0x164] != (Touch)0x0) {
    (**(code **)(*(long *)param_1 + 0x3d8))(param_1);
  }
  return;
}


/* PartyAssistRewardFrame::~PartyAssistRewardFrame() */

void __thiscall PartyAssistRewardFrame::~PartyAssistRewardFrame(PartyAssistRewardFrame *this)

{
  *(undefined ***)this = &PTR_GetClass_069f1b30;
  AutumnHarvestRewardFrame::~AutumnHarvestRewardFrame((AutumnHarvestRewardFrame *)this);
  return;
}


/* PartyAssistRewardFrame::~PartyAssistRewardFrame() */

void __thiscall PartyAssistRewardFrame::~PartyAssistRewardFrame(PartyAssistRewardFrame *this)

{
  ~PartyAssistRewardFrame(this);
  AK::FreeHook(this);
  return;
}


/* PartyAssistRewardFrame::PartyAssistRewardFrame(UIRewardFrame::RewardType, std::string const&,
   int, bool) */

void __thiscall PartyAssistRewardFrame::PartyAssistRewardFrame(PartyAssistRewardFrame *this)

{
  AutumnHarvestRewardFrame::AutumnHarvestRewardFrame();
  *(undefined ***)this = &PTR_GetClass_069f1b30;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistRewardFrame::CreateUIRewardFrame(PartyAssistRewardFrame*) */

void PartyAssistRewardFrame::CreateUIRewardFrame(PartyAssistRewardFrame *param_1)

{
  wstring *this;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x180);
  PartyAssistRewardFrame
            ((PartyAssistRewardFrame *)this,*(undefined4 *)(param_1 + 0xd4),param_1 + 0xd8,
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
/* PartyAssistRewardFrame::Draw(Sexy::Graphics*) */

void __thiscall PartyAssistRewardFrame::Draw(PartyAssistRewardFrame *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIRewardFrame::Draw((UIRewardFrame *)this,param_1);
  if (this[0x171] != (PartyAssistRewardFrame)0x0) {
    iVar1 = FUN_04ea3948(0x1e);
    Sexy::Insets::Insets(aIStack_28,0,*(int *)(this + 0x54) - iVar1,*(int *)(this + 0x50),iVar1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x168,aIStack_28,uVar2,aCStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistRewardFrame::TouchBegan(Sexy::Touch const&) */

void PartyAssistRewardFrame::TouchBegan(Touch *param_1)

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
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba1b88);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
    iVar6 = (int)((float)iVar2 + (float)iVar2);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba1b88);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
    iVar2 = *(int *)(param_1 + 0x50);
    iVar4 = FUN_04ea3948(5);
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
/* PartyAssistRewardFrame::ShowSelectUI() */

void __thiscall PartyAssistRewardFrame::ShowSelectUI(PartyAssistRewardFrame *this)

{
  int iVar1;
  UICommonItemSelect *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PartyAssistMainData *pPVar2;
  undefined4 *puVar3;
  ulong uVar4;
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_158 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_140 [24];
  function<bool(Sexy::Touch_const&)> afStack_128 [32];
  string asStack_108 [232];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::ShowDialog();
  std::string::string(asStack_108,"[AUTUMN_HARVEST_BONUS_SELECT_TITLE]");
  UICommonItemSelect::SetTitle(this_00,asStack_108);
  std::string::~string(asStack_108);
  nop();
  std::string::string(asStack_108,"[AUTUMN_HARVEST_BONUS_SELECT_DESCRIPTION]");
  UICommonItemSelect::SetDescription(this_00,asStack_108);
  std::string::~string(asStack_108);
  nop();
  UICommonItemSelect::SetCloseButtonVisible(this_00,false);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar2 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_01);
  PartyAssistMainData::PartyAssistMainData((PartyAssistMainData *)asStack_108,pPVar2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_158);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_140);
  for (local_16c = 0; iVar1 = local_16c, uVar4 = FUN_04ea23bc(local_20,local_18),
      (ulong)(long)iVar1 < uVar4; local_16c = local_16c + 1) {
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_168);
    puVar3 = (undefined4 *)FUN_04ea23d0(local_20,(long)local_16c);
    local_168 = *puVar3;
    local_164 = puVar3[1];
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_158,
               (S2C_BonusInfo *)&local_168);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_140,&local_16c);
  }
  (**(code **)(*(long *)this_00 + 0x350))(this_00,avStack_158);
  UICommonItemSelect::LoadDataIndex(this_00,(vector *)avStack_140);
  FUN_04ea38ec(afStack_128,this);
  UICommonItemSelect::registerSelectRecall(this_00,(function *)afStack_128);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_128);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_140);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_158);
  PartyAssistMainData::~PartyAssistMainData((PartyAssistMainData *)asStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistRewardFrame::CreateUIRewardFrame(int, int, bool) */

void PartyAssistRewardFrame::CreateUIRewardFrame(int param_1,int param_2,bool param_3)

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
        cVar1 = FUN_04ea1d50(param_1);
        if (cVar1 != '\0') {
          uVar6 = 1;
          std::string::append(asStack_68,"gem",__n);
          goto LAB_04eae280;
        }
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04ea1d40(param_1);
        if (cVar1 != '\0') {
          std::string::append(asStack_68,"coin",__n);
          uVar6 = 0;
          goto LAB_04eae280;
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
                    cVar1 = FUN_02fd47b4(param_1);
                    if (cVar1 != '\0') {
                      uVar6 = 5;
                      std::string::append(asStack_68,"cuke",__n);
                      goto LAB_04eae280;
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
                      goto LAB_04eae280;
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
                      goto LAB_04eae280;
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
                                goto LAB_04eae280;
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
LAB_04eae280:
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
  PartyAssistRewardFrame
            ((PartyAssistRewardFrame *)this,uVar6,asStack_68,(ulong)(uint)param_2,param_3);
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
/* PartyAssistRewardFrame::RequestSelectReward(int) */

void __thiscall
PartyAssistRewardFrame::RequestSelectReward(PartyAssistRewardFrame *this,int param_1)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2984];
  string asStack_140 [312];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_04ea3890(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_140,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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

