// Class: PVZ1ModeResultBonusWidget


/* PVZ1ModeResultBonusWidget::~PVZ1ModeResultBonusWidget() */

void __thiscall
PVZ1ModeResultBonusWidget::~PVZ1ModeResultBonusWidget(PVZ1ModeResultBonusWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069ca8a0;
  UIRewardFrame::~UIRewardFrame((UIRewardFrame *)this);
  return;
}


/* PVZ1ModeResultBonusWidget::~PVZ1ModeResultBonusWidget() */

void __thiscall
PVZ1ModeResultBonusWidget::~PVZ1ModeResultBonusWidget(PVZ1ModeResultBonusWidget *this)

{
  ~PVZ1ModeResultBonusWidget(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1ModeResultBonusWidget::PVZ1ModeResultBonusWidget(UIRewardFrame::RewardType, std::string
   const&, int, bool) */

void __thiscall
PVZ1ModeResultBonusWidget::PVZ1ModeResultBonusWidget(PVZ1ModeResultBonusWidget *this)

{
  UIRewardFrame::UIRewardFrame();
  this[0x59] = (PVZ1ModeResultBonusWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_069ca8a0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeResultBonusWidget::Draw(Sexy::Graphics*) */

void __thiscall PVZ1ModeResultBonusWidget::Draw(PVZ1ModeResultBonusWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  LotteryResultProgressBar *pLVar4;
  SalesProgressBar *pSVar5;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9bc70);
  iVar1 = FUN_04de4b00(0xffffffec);
  iVar2 = FUN_04de4b00(0x28);
  Sexy::Insets::Insets
            (aIStack_28,iVar1,iVar1,iVar2 + *(int *)(this + 0x50),iVar2 + *(int *)(this + 0x54));
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9bc70);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  pSVar5 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9bc70);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar5);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::DrawImage(param_1,pIVar3,(TRect *)aIStack_28,(TRect *)aIStack_18);
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9bc18);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9bc18);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  pSVar5 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9bc18);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar5);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::DrawImage(param_1,pIVar3,(TRect *)aIStack_28,(TRect *)aIStack_18);
  UIRewardFrame::Draw((UIRewardFrame *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeResultBonusWidget::CreateUIRewardFrame(int, int, bool) */

void PVZ1ModeResultBonusWidget::CreateUIRewardFrame(int param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  PVZ1ModeResultBonusWidget *pPVar4;
  string *extraout_x0;
  size_t __n;
  undefined1 uVar5;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  __n = (size_t)param_3;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_40,param_2);
  pNVar3 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
    if (cVar1 == '\0') {
      pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
      if (cVar1 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04de4900(param_1);
        if (cVar1 != '\0') {
          uVar5 = 1;
          std::string::append(asStack_40,"gem",__n);
          goto LAB_04de5700;
        }
        OtherServerNameMapper::GetInstance();
        cVar1 = FUN_04de48f0(param_1);
        if (cVar1 != '\0') {
          std::string::append(asStack_40,"coin",__n);
          uVar5 = 0;
          goto LAB_04de5700;
        }
        pNVar3 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
        if (cVar1 == '\0') {
          pNVar3 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
          if (cVar1 == '\0') {
            pNVar3 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
            if (cVar1 == '\0') {
              pNVar3 = (NameMapperBase *)MaterialItemMapper::GetInstance();
              cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
              if (cVar1 == '\0') {
                pNVar3 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
                cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
                if (cVar1 == '\0') {
                  pNVar3 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
                  cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
                  if (cVar1 == '\0') {
                    pNVar3 = (NameMapperBase *)ArtifactMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
                    if (cVar1 == '\0') {
                      if (param_1 - 0x61a9U < 999) {
                        DSingleton<HeadshotConfig>::getInstance();
                        nop();
                        DString::DString((DString *)asStack_18,param_1);
                        DString::operator_cast_to_string((DString *)asStack_18);
                        uVar5 = 0xd;
                        std::string::string(asStack_30,"plant");
                        std::string::string(asStack_28,"none");
                        DIniFile::getItem(extraout_x0,asStack_38,asStack_30);
                        thunk_FUN_05475e00(asStack_40,asStack_20);
                        std::string::~string(asStack_20);
                        std::string::~string(asStack_28);
                        nop();
                        std::string::~string(asStack_30);
                        nop();
                        std::string::~string(asStack_38);
                        DString::~DString((DString *)asStack_18);
                        goto LAB_04de5700;
                      }
                      pNVar3 = (NameMapperBase *)CollectionMapper::GetInstance();
                      cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
                      if (cVar1 == '\0') {
                        pNVar3 = (NameMapperBase *)CardMapper::GetInstance();
                        uVar5 = 3;
                        cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
                        if (cVar1 == '\0') goto LAB_04de5700;
                        iVar2 = CardMapper::GetInstance();
                        uVar5 = 0xf;
                      }
                      else {
                        iVar2 = CollectionMapper::GetInstance();
                        uVar5 = 0xe;
                      }
                    }
                    else {
                      iVar2 = ArtifactMapper::GetInstance();
                      uVar5 = 0xc;
                    }
                  }
                  else {
                    iVar2 = PlantNewAvatarPieceMapper::GetInstance();
                    uVar5 = 0xb;
                  }
                }
                else {
                  iVar2 = PlantNewAvatarMapper::GetInstance();
                  uVar5 = 10;
                }
              }
              else {
                iVar2 = MaterialItemMapper::GetInstance();
                uVar5 = 9;
              }
            }
            else {
              iVar2 = PlantAccessoryPieceMapper::GetInstance();
              uVar5 = 8;
            }
          }
          else {
            iVar2 = PlantAccessoryInfoMapper::GetInstance();
            uVar5 = 7;
          }
        }
        else {
          iVar2 = AvatarNameMapperServerID::GetInstance();
          uVar5 = 6;
        }
      }
      else {
        iVar2 = AvatarChipNameMapperServerID::GetInstance();
        uVar5 = 4;
      }
    }
    else {
      iVar2 = PlantChipNameMapperServerID::GetInstance();
      uVar5 = 3;
    }
  }
  else {
    iVar2 = PlantNameMapperServerID::GetInstance();
    uVar5 = 2;
  }
  NameMapperBase::GetNameForId(iVar2);
  FUN_05474278(asStack_40,asStack_18);
  std::string::~string(asStack_18);
LAB_04de5700:
  pPVar4 = ::operator_new(0x148);
  PVZ1ModeResultBonusWidget(pPVar4,uVar5,asStack_40,param_2,param_3);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar4);
}

