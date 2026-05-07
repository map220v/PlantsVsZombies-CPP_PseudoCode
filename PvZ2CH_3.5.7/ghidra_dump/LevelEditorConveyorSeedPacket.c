// Class: LevelEditorConveyorSeedPacket


/* LevelEditorConveyorSeedPacket::~LevelEditorConveyorSeedPacket() */

void __thiscall
LevelEditorConveyorSeedPacket::~LevelEditorConveyorSeedPacket(LevelEditorConveyorSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_0695d6c0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x108));
  LevelEditorSeedPacket::~LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  return;
}


/* LevelEditorConveyorSeedPacket::~LevelEditorConveyorSeedPacket() */

void __thiscall
LevelEditorConveyorSeedPacket::~LevelEditorConveyorSeedPacket(LevelEditorConveyorSeedPacket *this)

{
  ~LevelEditorConveyorSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorConveyorSeedPacket::onChangeLevel() */

void __thiscall LevelEditorConveyorSeedPacket::onChangeLevel(LevelEditorConveyorSeedPacket *this)

{
  int iVar1;
  CustomLevelMgr *this_00;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetConveyorSeedBankPlantData(iVar1);
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::UpdateConveyorSeedBankPlant
            (this_00,local_10,*(int *)(this + 0xd8),*(int *)(this + 0xd4));
  (**(code **)(*(long *)this + 0x310))(this);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorConveyorSeedPacket::SetWeight(int) */

void __thiscall
LevelEditorConveyorSeedPacket::SetWeight(LevelEditorConveyorSeedPacket *this,int param_1)

{
  int iVar1;
  CustomLevelMgr *this_00;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  *(int *)(this + 0x100) = param_1;
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetConveyorSeedBankPlantData(iVar1);
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::UpdateConveyorSeedBankPlant
            (this_00,*(int *)(this + 0x100),*(int *)(this + 0xd8),*(int *)(this + 0xd4));
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorConveyorSeedPacket::onChangeCardInfo() */

void __thiscall LevelEditorConveyorSeedPacket::onChangeCardInfo(LevelEditorConveyorSeedPacket *this)

{
  int iVar1;
  CustomLevelMgr *pCVar2;
  int iVar3;
  string asStack_20 [8];
  PakRecord aPStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0) {
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::RemoveConveyorSeedBankPlant(pCVar2,*(int *)(this + 0xd4));
    (**(code **)(*(long *)this + 0x310))(this);
  }
  else if (iVar1 - 1U < 2) {
    iVar3 = 1;
    if (iVar1 != 2) {
      iVar3 = -1;
    }
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::AddConveyorSeedBankPlant
              (pCVar2,(string *)(this + 0xf0),0x32,iVar3,*(int *)(this + 0xd4));
    (**(code **)(*(long *)this + 0x310))(this);
  }
  else {
    std::string::string(asStack_20,"");
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aPStack_18,0,asStack_20);
    LevelEditorSeedPacket::ChangeCardInfo
              ((LevelEditorSeedPacket *)this,(LevelEditorCardInfo *)aPStack_18);
    PakRecord::~PakRecord(aPStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorConveyorSeedPacket::LevelEditorConveyorSeedPacket() */

void __thiscall
LevelEditorConveyorSeedPacket::LevelEditorConveyorSeedPacket(LevelEditorConveyorSeedPacket *this)

{
  LevelEditorSeedPacket::LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  *(undefined ***)this = &PTR_GetClass_0695d6c0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x108));
  return;
}


/* LevelEditorConveyorSeedPacket::SetChangeGlobalLevelCallback(std::function<void (int)>) */

void __thiscall
LevelEditorConveyorSeedPacket::SetChangeGlobalLevelCallback
          (LevelEditorConveyorSeedPacket *this,function *param_2)

{
  std::function<void(int)>::operator=((function<void(int)> *)(this + 0x108),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorConveyorSeedPacket::Reload() */

void __thiscall LevelEditorConveyorSeedPacket::Reload(LevelEditorConveyorSeedPacket *this)

{
  bool bVar1;
  int iVar2;
  string *psVar3;
  undefined8 uVar4;
  string asStack_30 [8];
  string asStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetConveyorSeedBankPlantData(iVar2);
  bVar1 = std::operator!=(asStack_28,"");
  if (bVar1) {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (bVar1) {
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
    }
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aRStack_18,uVar4,asStack_28);
    LevelEditorCardInfo::operator=
              ((LevelEditorCardInfo *)(this + 0xe8),(LevelEditorCardInfo *)aRStack_18);
    PakRecord::~PakRecord((PakRecord *)aRStack_18);
    *(undefined4 *)(this + 0xd8) = local_1c;
    *(undefined4 *)(this + 0x100) = local_20;
  }
  else {
    std::string::string(asStack_30,"");
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aRStack_18,0,asStack_30);
    LevelEditorCardInfo::operator=
              ((LevelEditorCardInfo *)(this + 0xe8),(LevelEditorCardInfo *)aRStack_18);
    PakRecord::~PakRecord((PakRecord *)aRStack_18);
    std::string::~string(asStack_30);
    nop();
    *(uint *)(this + 0x100) = (uint)bVar1;
    *(undefined4 *)(this + 0xd8) = 0xffffffff;
  }
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorConveyorSeedPacket::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorConveyorSeedPacket::TouchEnded(LevelEditorConveyorSeedPacket *this,Touch *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LevelEditorSeedChooser *this_00;
  undefined8 uVar6;
  AccessoryContent *this_01;
  vector *pvVar7;
  ulong uVar8;
  string *psVar9;
  LevelEditorMultifunctionAssembly *this_02;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  code *pcVar13;
  int local_58;
  int local_54;
  PakRecord aPStack_50 [16];
  int local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xdc) == (int)*(undefined8 *)param_1) {
    if (*(int *)(this + 0xe8) == 0) {
      this_00 = ::operator_new(0x150);
      LevelEditorSeedChooser::LevelEditorSeedChooser(this_00);
      pcVar13 = *(code **)(*(long *)this_00 + 0x198);
      (**(code **)(*(long *)this + 0xd0))
                ((vector<CustomConveyorData,std::allocator<CustomConveyorData>> *)&local_40,this);
      iVar1 = local_40 + *(int *)(this + 0x50);
      iVar3 = FUN_04b334ec(0x32);
      uVar4 = FUN_04b334ec(0x15e);
      uVar5 = FUN_04b334ec(0x208);
      (*pcVar13)(this_00,iVar1 + iVar3,iVar3,uVar4,uVar5);
      uVar6 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
      FUN_04b32ec8(afStack_28,this,uVar6);
      LevelEditorSeedChooser::Init(this_00,0,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      std::function<void(int)>::function
                ((function<void(int)> *)afStack_28,(function *)(this + 0x108));
      LevelEditorSeedChooser::SetChangeGlobalLevelCallback(this_00,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      this_01 = (AccessoryContent *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      pvVar7 = (vector *)AccessoryContent::GetUIInfo(this_01);
      std::vector<CustomConveyorData,std::allocator<CustomConveyorData>>::vector
                ((vector<CustomConveyorData,std::allocator<CustomConveyorData>> *)&local_40,pvVar7);
      for (uVar12 = 0; uVar8 = FUN_04b2d918(CONCAT44(uStack_3c,local_40),local_38), uVar12 < uVar8;
          uVar12 = uVar12 + 1) {
        psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        FUN_04b2d924(CONCAT44(uStack_3c,local_40),uVar12);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aPStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_50)
        ;
        if (bVar2) {
          uVar6 = FUN_04b2d924(CONCAT44(uStack_3c,local_40),uVar12);
          uVar11 = 1;
        }
        else {
          uVar6 = FUN_04b2d924(CONCAT44(uStack_3c,local_40),uVar12);
          uVar11 = 2;
        }
        LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aPStack_50,uVar11,uVar6);
        LevelEditorSeedChooser::DisableCard(this_00,(LevelEditorCardInfo *)aPStack_50);
        PakRecord::~PakRecord(aPStack_50);
      }
      std::vector<CustomConveyorData,std::allocator<CustomConveyorData>>::~vector
                ((vector<CustomConveyorData,std::allocator<CustomConveyorData>> *)&local_40);
    }
    else {
      this_02 = ::operator_new(0x120);
      LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_02);
      (**(code **)(*(long *)this + 0xd0))(&local_58,this);
      iVar1 = local_58 + *(int *)(this + 0x50);
      iVar3 = FUN_04b334ec(0x28);
      Sexy::Insets::Insets((Insets *)&local_40,iVar1 - iVar3 / 2,local_54 - iVar3,iVar3,iVar3);
      FUN_04b32790(afStack_28,this_02,this);
      std::string::string((string *)aPStack_50,"add");
      plVar10 = (long *)LevelEditorMultifunctionAssembly::AttachButton
                                  (this_02,1,(Insets *)&local_40,afStack_28,(string *)aPStack_50);
      (**(code **)(*plVar10 + 0x188))(plVar10,4 < *(int *)(this + 0xd8));
      std::string::~string((string *)aPStack_50);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      iVar1 = local_58 + *(int *)(this + 0x50);
      iVar3 = FUN_04b334ec(0x28);
      Sexy::Insets::Insets((Insets *)&local_40,iVar1 + iVar3 / 2,local_54 - iVar3 / 2,iVar3,iVar3);
      FUN_04b327ec(afStack_28,this_02,this);
      std::string::string((string *)aPStack_50,"subtract");
      plVar10 = (long *)LevelEditorMultifunctionAssembly::AttachButton
                                  (this_02,2,(Insets *)&local_40,afStack_28,(string *)aPStack_50);
      (**(code **)(*plVar10 + 0x188))(plVar10,*(int *)(this + 0xd8) < 2);
      std::string::~string((string *)aPStack_50);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      iVar1 = local_58 + *(int *)(this + 0x50);
      iVar3 = FUN_04b334ec(0x28);
      Sexy::Insets::Insets
                ((Insets *)&local_40,iVar1 + iVar3 / 2,
                 (local_54 + *(int *)(this + 0x54)) - iVar3 / 2,iVar3,iVar3);
      FUN_04b32848(afStack_28,this_02,this);
      std::string::string((string *)aPStack_50,"weight");
      LevelEditorMultifunctionAssembly::AttachButton
                (this_02,3,(Insets *)&local_40,afStack_28,(string *)aPStack_50);
      std::string::~string((string *)aPStack_50);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      iVar1 = *(int *)(this + 0x50);
      iVar3 = FUN_04b334ec(0x28);
      Sexy::Insets::Insets
                ((Insets *)&local_40,(local_58 + iVar1) - iVar3 / 2,local_54 + *(int *)(this + 0x54)
                 ,iVar3,iVar3);
      FUN_04b328a4(afStack_28,this_02,this);
      std::string::string((string *)aPStack_50,"delete");
      LevelEditorMultifunctionAssembly::AttachButton
                (this_02,4,(Insets *)&local_40,afStack_28,(string *)aPStack_50);
      std::string::~string((string *)aPStack_50);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      UIUtil::ShowDialog((Widget *)this_02);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

