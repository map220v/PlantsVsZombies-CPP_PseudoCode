// Class: NewRecallSelectItem


/* NewRecallSelectItem::OnItemSelect(int, int) */

void NewRecallSelectItem::OnItemSelect(int param_1,int param_2)

{
  *(bool *)((ulong)(uint)param_1 + 0x164) = *(int *)((ulong)(uint)param_1 + 0x168) == param_2;
  return;
}


/* NewRecallSelectItem::TouchBegan(Sexy::Touch const&) */

void __thiscall NewRecallSelectItem::TouchBegan(NewRecallSelectItem *this,Touch *param_1)

{
  UIRewardFrameSelect::TouchBegan((Touch *)this);
  *(int *)(this + 0x160) = (int)*(undefined8 *)param_1;
  return;
}


/* NewRecallSelectItem::~NewRecallSelectItem() */

void __thiscall NewRecallSelectItem::~NewRecallSelectItem(NewRecallSelectItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0670a540;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIRewardFrameSelect::~UIRewardFrameSelect((UIRewardFrameSelect *)this);
  return;
}


/* NewRecallSelectItem::~NewRecallSelectItem() */

void __thiscall NewRecallSelectItem::~NewRecallSelectItem(NewRecallSelectItem *this)

{
  ~NewRecallSelectItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallSelectItem::LoadData(S2C_BonusInfo const&) */

void __thiscall NewRecallSelectItem::LoadData(NewRecallSelectItem *this,S2C_BonusInfo *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 uVar3;
  size_t __n;
  string asStack_40 [8];
  int local_38;
  int local_34;
  long local_8;
  
  __n = 0;
  *(undefined8 *)(this + 0x168) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)param_1;
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 8);
  GetGameItemInfo(iVar2,0x7fffffff,0);
  if (local_38 == 0) goto LAB_03a563f8;
  if (local_34 == 0x20) {
    *(undefined4 *)(this + 0xd4) = 8;
    iVar2 = PlantAccessoryPieceMapper::GetInstance();
LAB_03a5660c:
    NameMapperBase::GetNameForId(iVar2);
    FUN_05474278(this + 0xd8,asStack_40);
    std::string::~string(asStack_40);
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 4);
    this[0xd1] = (NewRecallSelectItem)0x1;
  }
  else {
    if (local_34 < 0x21) {
      if (local_34 == 2) {
        iVar2 = PlantChipNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        uVar3 = 3;
      }
      else {
        if (local_34 < 3) {
          if (local_34 == 1) {
            iVar2 = PlantNameMapperServerID::GetInstance();
            NameMapperBase::GetNameForId(iVar2);
            *(undefined4 *)(this + 0xd4) = 2;
            thunk_FUN_05475e00(this + 0xd8,asStack_40);
            *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 4);
            this[0xd1] = (NewRecallSelectItem)0x1;
            std::string::~string(asStack_40);
          }
          goto LAB_03a563f8;
        }
        if (local_34 != 4) {
          if (local_34 != 8) goto LAB_03a563f8;
          *(undefined4 *)(this + 0xd4) = 4;
          iVar2 = AvatarChipNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar2);
          FUN_05474278(this + 0xd8,asStack_40);
          std::string::~string(asStack_40);
          *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 4);
          this[0xd1] = (NewRecallSelectItem)0x1;
          goto LAB_03a56488;
        }
        iVar2 = AvatarNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        uVar3 = 6;
      }
      *(undefined4 *)(this + 0xd4) = uVar3;
    }
    else {
      if (local_34 == 0x100) {
        *(undefined4 *)(this + 0xd4) = 9;
        iVar2 = MaterialItemMapper::GetInstance();
        goto LAB_03a5660c;
      }
      if (local_34 < 0x101) {
        if (local_34 == 0x40) {
          *(undefined4 *)(this + 0xd4) = 1;
          std::string::append((string *)(this + 0xd8),"gem",__n);
          *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 4);
          this[0xd1] = (NewRecallSelectItem)0x1;
        }
        else if (local_34 == 0x80) {
          *(undefined4 *)(this + 0xd4) = 0;
          std::string::append((string *)(this + 0xd8),"coin",__n);
          *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 4);
          this[0xd1] = (NewRecallSelectItem)0x1;
        }
        goto LAB_03a563f8;
      }
      if (local_34 != 0x1000) {
        if (local_34 != 0x4000) goto LAB_03a563f8;
LAB_03a56488:
        *(undefined4 *)(this + 0xd4) = 0xc;
        iVar2 = ArtifactMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        FUN_05474278(this + 0xd8,asStack_40);
        std::string::~string(asStack_40);
        *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 4);
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
        if ((this_01 != (PlayerInfo *)0x0) &&
           (cVar1 = PlayerInfo::IsArtifactUnlocked(this_01,*(int *)param_1), cVar1 != '\0')) {
          (**(code **)(*(long *)this + 0x188))(this,1);
          std::string::string(asStack_40,"IMAGE_UI_DIALOG_ASSET_TIPS_BG");
          UIRewardFrame::SetLockString((UIRewardFrame *)this,asStack_40);
          std::string::~string(asStack_40);
          nop();
        }
        this[0xd1] = (NewRecallSelectItem)0x1;
        goto LAB_03a563f8;
      }
      *(undefined4 *)(this + 0xd4) = 10;
      iVar2 = PlantNewAvatarMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
    }
    thunk_FUN_05475e00(this + 0xd8,asStack_40);
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 4);
    this[0xd1] = (NewRecallSelectItem)0x1;
    std::string::~string(asStack_40);
  }
LAB_03a563f8:
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* NewRecallSelectItem::NewRecallSelectItem(UIRewardFrame::RewardType, std::string const&, int,
   bool) */

void __thiscall NewRecallSelectItem::NewRecallSelectItem(NewRecallSelectItem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UIRewardFrameSelect::UIRewardFrameSelect();
  this[0x164] = (NewRecallSelectItem)0x0;
  *(undefined ***)this = &PTR_GetClass_0670a540;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x168));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnItemSelect);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<NewRecallSelectItem,void(NewRecallSelectItem::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NewRecallSelect,&local_40);
  return;
}


/* NewRecallSelectItem::Draw(Sexy::Graphics*) */

void __thiscall NewRecallSelectItem::Draw(NewRecallSelectItem *this,Graphics *param_1)

{
  Image *pIVar1;
  
  UIRewardFrame::Draw((UIRewardFrame *)this,param_1);
  if (this[0x164] == (NewRecallSelectItem)0x0) {
    return;
  }
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5c30);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5898);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* NewRecallSelectItem::TouchEnded(Sexy::Touch const&) */

void __thiscall NewRecallSelectItem::TouchEnded(NewRecallSelectItem *this,Touch *param_1)

{
  UIRewardFrameSelect::TouchesCanceled((UIRewardFrameSelect *)this);
  if (*(int *)(this + 0x160) != (int)*(undefined8 *)param_1) {
    return;
  }
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::NewRecallSelect,*(int *)(this + 0x168),
             *(int *)(this + 0x174));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallSelectItem::CreateUIRewardFrame(int, int, bool) */

void NewRecallSelectItem::CreateUIRewardFrame(int param_1,int param_2,bool param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  NameMapperBase *pNVar6;
  wstring *this;
  string *extraout_x0;
  size_t __n;
  PrimeTypeface *pPVar7;
  string asStack_90 [8];
  undefined1 auStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  int local_68 [8];
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  string asStack_38 [12];
  int local_2c;
  long local_8;
  
  __n = (size_t)param_3;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_90);
  FUN_05476574(auStack_88);
  pNVar6 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
  if (cVar1 == '\0') {
    pNVar6 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
    if (cVar1 == '\0') {
      pNVar6 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
      if (cVar1 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_03a53f40(param_1);
        if (cVar1 != '\0') {
          cVar1 = '\x01';
          std::string::append(asStack_90,"gem",__n);
          goto LAB_03a5fbac;
        }
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_03a53f30(param_1);
        if (cVar1 != '\0') {
          std::string::append(asStack_90,"coin",__n);
          cVar1 = '\0';
          goto LAB_03a5fbac;
        }
        pNVar6 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
        if (cVar1 == '\0') {
          pNVar6 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
          if (cVar1 == '\0') {
            pNVar6 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
            if (cVar1 == '\0') {
              pNVar6 = (NameMapperBase *)MaterialItemMapper::GetInstance();
              cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
              if (cVar1 == '\0') {
                pNVar6 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
                cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
                if (cVar1 == '\0') {
                  pNVar6 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
                  cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
                  if (cVar1 == '\0') {
                    OtherServerNameMapper::GetInstance();
                    cVar1 = FUN_02fd3c64(param_1);
                    if (cVar1 != '\0') {
                      cVar1 = '\x05';
                      std::string::append(asStack_90,"cuke",__n);
                      goto LAB_03a5fbac;
                    }
                    if (param_1 - 0x61a9U < 999) {
                      DSingleton<HeadshotConfig>::getInstance();
                      nop();
                      DString::DString((DString *)asStack_38,param_1);
                      DString::operator_cast_to_string((DString *)asStack_38);
                      std::string::string(asStack_78,"plant");
                      cVar1 = '\r';
                      std::string::string(asStack_70,"none");
                      DIniFile::getItem(extraout_x0,asStack_80,asStack_78);
                      thunk_FUN_05475e00(asStack_90,(string *)local_68);
                      std::string::~string((string *)local_68);
                      std::string::~string(asStack_70);
                      nop();
                      std::string::~string(asStack_78);
                      nop();
                      std::string::~string(asStack_80);
                      DString::~DString((DString *)asStack_38);
                      goto LAB_03a5fbac;
                    }
                    pNVar6 = (NameMapperBase *)CollectionMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
                    if (cVar1 != '\0') {
                      iVar4 = CollectionMapper::GetInstance();
                      iVar5 = (int)__n;
                      cVar1 = '\x0e';
                      NameMapperBase::GetNameForId(iVar4);
                      FUN_05474278(asStack_90,asStack_38);
                      std::string::~string(asStack_38);
                      CollectionUtils::GetCollectionName
                                ((CollectionUtils *)(ulong)(uint)param_1,param_2,iVar5);
                      FUN_054766c8(auStack_88,asStack_38);
                      FUN_05476c50(asStack_38);
                      goto LAB_03a5fbac;
                    }
                    pNVar6 = (NameMapperBase *)CardMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
                    if (cVar1 == '\0') {
                      pNVar6 = (NameMapperBase *)ArtifactMapper::GetInstance();
                      cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
                      if (cVar1 == '\0') {
                        pNVar6 = (NameMapperBase *)GeneMapper::GetInstance();
                        cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
                        if (cVar1 == '\0') {
                          pNVar6 = (NameMapperBase *)GeneEssenceMapper::GetInstance();
                          cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
                          if (cVar1 == '\0') {
                            pNVar6 = (NameMapperBase *)RankAvatarMapper::GetInstance();
                            cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
                            if (cVar1 == '\0') {
                              pNVar6 = (NameMapperBase *)ExpMapper::GetInstance();
                              cVar1 = NameMapperBase::ContainsId(pNVar6,param_1);
                              if (cVar1 == '\0') {
                                cVar1 = TrialCardManager::ContainsId(param_1);
                                if (cVar1 == '\0') {
                                  cVar1 = '\x05';
                                  std::string::append(asStack_90,"",__n);
                                }
                                else {
                                  iVar4 = PlantNameMapperServerID::GetInstance();
                                  iVar5 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
                                  cVar1 = '\x14';
                                  TrialCardManager::GetTrialCardConfigByID(iVar5);
                                  NameMapperBase::GetNameForId(iVar4);
                                  FUN_05474278(asStack_90,(string *)local_68);
                                  std::string::~string((string *)local_68);
                                  TrialCardConfig::~TrialCardConfig((TrialCardConfig *)asStack_38);
                                }
                                goto LAB_03a5fbac;
                              }
                              iVar4 = ExpMapper::GetInstance();
                              cVar1 = '\x13';
                            }
                            else {
                              iVar4 = RankAvatarMapper::GetInstance();
                              cVar1 = '\x12';
                            }
                          }
                          else {
                            iVar4 = GeneEssenceMapper::GetInstance();
                            cVar1 = '\x11';
                          }
                        }
                        else {
                          iVar4 = GeneMapper::GetInstance();
                          cVar1 = '\x10';
                        }
                      }
                      else {
                        iVar4 = ArtifactMapper::GetInstance();
                        cVar1 = '\f';
                      }
                    }
                    else {
                      iVar4 = CardMapper::GetInstance();
                      cVar1 = '\x0f';
                    }
                  }
                  else {
                    iVar4 = PlantNewAvatarPieceMapper::GetInstance();
                    cVar1 = '\v';
                  }
                }
                else {
                  iVar4 = PlantNewAvatarMapper::GetInstance();
                  cVar1 = '\n';
                }
              }
              else {
                iVar4 = MaterialItemMapper::GetInstance();
                cVar1 = '\t';
              }
            }
            else {
              iVar4 = PlantAccessoryPieceMapper::GetInstance();
              cVar1 = '\b';
            }
          }
          else {
            iVar4 = PlantAccessoryInfoMapper::GetInstance();
            cVar1 = '\a';
          }
        }
        else {
          iVar4 = AvatarNameMapperServerID::GetInstance();
          cVar1 = '\x06';
        }
      }
      else {
        iVar4 = AvatarChipNameMapperServerID::GetInstance();
        cVar1 = '\x04';
      }
    }
    else {
      iVar4 = PlantChipNameMapperServerID::GetInstance();
      cVar1 = '\x03';
    }
  }
  else {
    iVar4 = PlantNameMapperServerID::GetInstance();
    cVar1 = '\x02';
  }
  NameMapperBase::GetNameForId(iVar4);
  FUN_05474278(asStack_90,asStack_38);
  std::string::~string(asStack_38);
LAB_03a5fbac:
  pPVar7 = (PrimeTypeface *)0x0;
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_68[0] != 0) {
    cVar2 = FUN_054765e8(auStack_88);
    if ((cVar2 != '\0') && (thunk_FUN_05477b9c(auStack_88,auStack_40), 0 < param_2)) {
      Sexy::StrFormat(L"x%d",(TrialCardConfig *)asStack_38,(ulong)(uint)param_2);
      thunk_FUN_05477668(auStack_88,(TrialCardConfig *)asStack_38);
      FUN_05476c50((TrialCardConfig *)asStack_38);
    }
    pPVar7 = (PrimeTypeface *)StringHelper::ToImage(asStack_48,false);
  }
  this = ::operator_new(0x178);
  NewRecallSelectItem((NewRecallSelectItem *)this,cVar1,asStack_90,(ulong)(uint)param_2,param_3);
  FUN_05477b24((TrialCardConfig *)asStack_38,auStack_88);
  LevelEditorStatueMazeSliderWidget::SetDescription4(this);
  FUN_05476c50((TrialCardConfig *)asStack_38);
  UIRewardFrame::SetObjectID((UIRewardFrame *)this,param_1);
  bVar3 = std::operator==(asStack_90,"cuke");
  if (bVar3) {
    Lua::CUILabel::SetTypeface((CUILabel *)this,pPVar7);
  }
  if (cVar1 == '\x14') {
    iVar4 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
    TrialCardManager::GetTrialCardConfigByID(iVar4);
    UIRewardFrame::SetLevel((UIRewardFrame *)this,local_2c);
    TrialCardConfig::~TrialCardConfig((TrialCardConfig *)asStack_38);
    MapEventItem::SetAdventurePlantLockStatus((MapEventItem *)this,false);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_68);
  FUN_05476c50(auStack_88);
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

