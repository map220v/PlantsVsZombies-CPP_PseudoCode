// Class: BagItemButtonBase


/* BagItemButtonBase::ButtonDepress(int) */

int BagItemButtonBase::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to BagItemButtonBase::ButtonDepress(int) */

void __thiscall BagItemButtonBase::ButtonDepress(BagItemButtonBase *this,int param_1)

{
  ButtonDepress((int)this + -0x148);
  return;
}


/* BagItemButtonBase::~BagItemButtonBase() */

void __thiscall BagItemButtonBase::~BagItemButtonBase(BagItemButtonBase *this)

{
  *(undefined ***)this = &PTR_GetClass_069c20c0;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069c24b8;
  UIRewardFrame::~UIRewardFrame((UIRewardFrame *)this);
  return;
}


/* BagItemButtonBase::~BagItemButtonBase() */

void __thiscall BagItemButtonBase::~BagItemButtonBase(BagItemButtonBase *this)

{
  ~BagItemButtonBase(this);
  AK::FreeHook(this);
  return;
}


/* BagItemButtonBase::BagItemButtonBase(int, UIRewardFrame::RewardType, std::string const&, int,
   bool) */

void __thiscall
BagItemButtonBase::BagItemButtonBase
          (BagItemButtonBase *this,undefined4 param_1,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6)

{
  UIRewardFrame::UIRewardFrame((UIRewardFrame *)this,param_3,param_4,param_5,param_6);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x148));
  *(undefined4 *)(this + 0x150) = param_1;
  *(undefined4 *)(this + 0x154) = param_5;
  *(undefined ***)this = &PTR_GetClass_069c20c0;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069c24b8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BagItemButtonBase::CreateButton() */

void __thiscall BagItemButtonBase::CreateButton(BagItemButtonBase *this)

{
  PVZ2UIButton *this_00;
  long *plVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,*(int *)(this + 0x150),(ButtonListener *)(this + 0x148),awStack_20,aCStack_18);
  *(PVZ2UIButton **)(this + 0x158) = this_00;
  FUN_05476c50(awStack_20);
  nop();
  plVar1 = *(long **)(this + 0x158);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))
              (plVar1,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x158));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BagItemButtonBase::CreateBagItem(int, int, bool) */

void BagItemButtonBase::CreateBagItem(int param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  NameMapperBase *pNVar4;
  size_t __n;
  PlantPieceButton *this;
  undefined8 uVar5;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [12];
  int local_2c;
  long local_8;
  
  __n = (size_t)param_3;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_48,param_2);
  pNVar4 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 != '\0') {
      iVar2 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      FUN_05474278(asStack_48,asStack_38);
      std::string::~string(asStack_38);
LAB_04dc1bd8:
      this = ::operator_new(0x160);
      PlantPieceButton::PlantPieceButton(this,param_1,3,asStack_48,param_2,param_3);
      goto LAB_04dc1b60;
    }
    pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 != '\0') {
      iVar2 = AvatarChipNameMapperServerID::GetInstance();
      uVar5 = 4;
LAB_04dc1c28:
      NameMapperBase::GetNameForId(iVar2);
      FUN_05474278(asStack_48,asStack_38);
      std::string::~string(asStack_38);
      this = ::operator_new(0x160);
      AvatarPieceButton::AvatarPieceButton
                ((AvatarPieceButton *)this,param_1,uVar5,asStack_48,param_2,param_3);
      goto LAB_04dc1b60;
    }
    OtherServerNameMapper::GetInstance();
    cVar1 = FUN_04dbf6e4(param_1);
    if (cVar1 == '\0') {
      OtherServerNameMapper::GetInstance();
      cVar1 = FUN_04dbf6d4(param_1);
      if (cVar1 == '\0') {
        pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
        if (cVar1 == '\0') {
          pNVar4 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
          if (cVar1 == '\0') {
            pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
            if (cVar1 != '\0') {
              iVar2 = PlantAccessoryPieceMapper::GetInstance();
              NameMapperBase::GetNameForId(iVar2);
              FUN_05474278(asStack_48,asStack_38);
              std::string::~string(asStack_38);
              this = ::operator_new(0x160);
              AccessoryPieceButton::AccessoryPieceButton
                        ((AccessoryPieceButton *)this,param_1,8,asStack_48,param_2,param_3);
              goto LAB_04dc1b60;
            }
            pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
            if (cVar1 != '\0') {
              iVar2 = MaterialItemMapper::GetInstance();
              NameMapperBase::GetNameForId(iVar2);
              FUN_05474278(asStack_48,asStack_38);
              std::string::~string(asStack_38);
              this = ::operator_new(0x160);
              MaterialItemButton::MaterialItemButton
                        ((MaterialItemButton *)this,param_1,9,asStack_48,param_2,param_3);
              goto LAB_04dc1b60;
            }
            pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
            if (cVar1 == '\0') {
              pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
              cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
              if (cVar1 == '\0') {
                pNVar4 = (NameMapperBase *)CollectionMapper::GetInstance();
                cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                if (cVar1 != '\0') {
                  iVar2 = CollectionMapper::GetInstance();
                  NameMapperBase::GetNameForId(iVar2);
                  FUN_05474278(asStack_48,asStack_38);
                  std::string::~string(asStack_38);
                  this = ::operator_new(0x160);
                  MaterialItemButton::MaterialItemButton
                            ((MaterialItemButton *)this,param_1,0xe,asStack_48,param_2,param_3);
                  goto LAB_04dc1b60;
                }
                cVar1 = TrialCardManager::ContainsId(param_1);
                if (cVar1 != '\0') {
                  iVar2 = PlantNameMapperServerID::GetInstance();
                  iVar3 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
                  TrialCardManager::GetTrialCardConfigByID(iVar3);
                  NameMapperBase::GetNameForId(iVar2);
                  FUN_05474278(asStack_48,asStack_40);
                  std::string::~string(asStack_40);
                  TrialCardConfig::~TrialCardConfig((TrialCardConfig *)asStack_38);
                  this = ::operator_new(0x160);
                  TrialCardItemButton::TrialCardItemButton
                            ((TrialCardItemButton *)this,param_1,0x14,asStack_48,param_2,param_3);
                  iVar2 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
                  TrialCardManager::GetTrialCardConfigByID(iVar2);
                  UIRewardFrame::SetLevel((UIRewardFrame *)this,local_2c);
                  TrialCardConfig::~TrialCardConfig((TrialCardConfig *)asStack_38);
                  MapEventItem::SetAdventurePlantLockStatus((MapEventItem *)this,false);
                  goto LAB_04dc1b60;
                }
                goto LAB_04dc1bd8;
              }
              iVar2 = PlantNewAvatarPieceMapper::GetInstance();
              uVar5 = 0xb;
              goto LAB_04dc1c28;
            }
            iVar2 = PlantNewAvatarMapper::GetInstance();
          }
          else {
            iVar2 = PlantAccessoryInfoMapper::GetInstance();
          }
        }
        else {
          iVar2 = AvatarNameMapperServerID::GetInstance();
        }
        goto LAB_04dc1b38;
      }
      std::string::append(asStack_48,"coin",__n);
    }
    else {
      std::string::append(asStack_48,"gem",__n);
    }
  }
  else {
    iVar2 = PlantNameMapperServerID::GetInstance();
LAB_04dc1b38:
    NameMapperBase::GetNameForId(iVar2);
    FUN_05474278(asStack_48,asStack_38);
    std::string::~string(asStack_38);
  }
  this = (PlantPieceButton *)0x0;
LAB_04dc1b60:
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

