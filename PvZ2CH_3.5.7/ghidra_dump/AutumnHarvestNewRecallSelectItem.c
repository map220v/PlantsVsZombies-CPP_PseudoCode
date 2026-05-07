// Class: AutumnHarvestNewRecallSelectItem


/* AutumnHarvestNewRecallSelectItem::~AutumnHarvestNewRecallSelectItem() */

void __thiscall
AutumnHarvestNewRecallSelectItem::~AutumnHarvestNewRecallSelectItem
          (AutumnHarvestNewRecallSelectItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0670a150;
  NewRecallSelectItem::~NewRecallSelectItem((NewRecallSelectItem *)this);
  return;
}


/* AutumnHarvestNewRecallSelectItem::~AutumnHarvestNewRecallSelectItem() */

void __thiscall
AutumnHarvestNewRecallSelectItem::~AutumnHarvestNewRecallSelectItem
          (AutumnHarvestNewRecallSelectItem *this)

{
  ~AutumnHarvestNewRecallSelectItem(this);
  AK::FreeHook(this);
  return;
}


/* AutumnHarvestNewRecallSelectItem::AutumnHarvestNewRecallSelectItem(UIRewardFrame::RewardType,
   std::string const&, int, bool) */

void __thiscall
AutumnHarvestNewRecallSelectItem::AutumnHarvestNewRecallSelectItem
          (AutumnHarvestNewRecallSelectItem *this)

{
  NewRecallSelectItem::NewRecallSelectItem();
  *(undefined ***)this = &PTR_GetClass_0670a150;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestNewRecallSelectItem::CreateUIRewardFrame(int, int, bool) */

void AutumnHarvestNewRecallSelectItem::CreateUIRewardFrame(int param_1,int param_2,bool param_3)

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
          goto LAB_03a5f1a4;
        }
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_03a53f30(param_1);
        if (cVar1 != '\0') {
          std::string::append(asStack_90,"coin",__n);
          cVar1 = '\0';
          goto LAB_03a5f1a4;
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
                      goto LAB_03a5f1a4;
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
                      goto LAB_03a5f1a4;
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
                      goto LAB_03a5f1a4;
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
                                goto LAB_03a5f1a4;
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
LAB_03a5f1a4:
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
  AutumnHarvestNewRecallSelectItem
            ((AutumnHarvestNewRecallSelectItem *)this,cVar1,asStack_90,(ulong)(uint)param_2,param_3)
  ;
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

