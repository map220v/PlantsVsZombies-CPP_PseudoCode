// Class: LevelEditorNormalSeedPacket


/* LevelEditorNormalSeedPacket::~LevelEditorNormalSeedPacket() */

void __thiscall
LevelEditorNormalSeedPacket::~LevelEditorNormalSeedPacket(LevelEditorNormalSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_0695d380;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x100));
  LevelEditorSeedPacket::~LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  return;
}


/* LevelEditorNormalSeedPacket::~LevelEditorNormalSeedPacket() */

void __thiscall
LevelEditorNormalSeedPacket::~LevelEditorNormalSeedPacket(LevelEditorNormalSeedPacket *this)

{
  ~LevelEditorNormalSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorNormalSeedPacket::onChangeCardInfo() */

void __thiscall LevelEditorNormalSeedPacket::onChangeCardInfo(LevelEditorNormalSeedPacket *this)

{
  CustomLevelMgr *pCVar1;
  string asStack_20 [8];
  PakRecord aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe8) == 0) {
    pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::RemovePresetSeedBankPlant(pCVar1,*(int *)(this + 0xd4));
  }
  else if (*(int *)(this + 0xe8) - 1U < 2) {
    pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::AddPresetSeedBankPlant(pCVar1,(string *)(this + 0xf0),*(int *)(this + 0xd4));
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


/* LevelEditorNormalSeedPacket::LevelEditorNormalSeedPacket() */

void __thiscall
LevelEditorNormalSeedPacket::LevelEditorNormalSeedPacket(LevelEditorNormalSeedPacket *this)

{
  LevelEditorSeedPacket::LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  *(undefined ***)this = &PTR_GetClass_0695d380;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x100));
  return;
}


/* LevelEditorNormalSeedPacket::SetChangeGlobalLevelCallback(std::function<void (int)>) */

void __thiscall
LevelEditorNormalSeedPacket::SetChangeGlobalLevelCallback
          (LevelEditorNormalSeedPacket *this,function *param_2)

{
  std::function<void(int)>::operator=((function<void(int)> *)(this + 0x100),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorNormalSeedPacket::Reload() */

void __thiscall LevelEditorNormalSeedPacket::Reload(LevelEditorNormalSeedPacket *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CustomLevelMgr *this_00;
  string *psVar4;
  undefined8 uVar5;
  string asStack_20 [8];
  RtMixedPtrBase aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetPresetSeedBankPlant(iVar3);
  bVar1 = std::operator!=(asStack_20,"");
  if (bVar1) {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (cVar2 == '\0') {
      uVar5 = 2;
    }
    else {
      uVar5 = 1;
    }
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aRStack_18,uVar5,asStack_20);
    LevelEditorCardInfo::operator=
              ((LevelEditorCardInfo *)(this + 0xe8),(LevelEditorCardInfo *)aRStack_18);
    PakRecord::~PakRecord((PakRecord *)aRStack_18);
  }
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar3 = CustomLevelMgr::GetSeedBankGlobalLevel(this_00);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  *(int *)(this + 0xd8) = iVar3;
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorNormalSeedPacket::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorNormalSeedPacket::TouchEnded(LevelEditorNormalSeedPacket *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  LevelEditorSeedChooser *this_00;
  LevelEditorPlantRare *pLVar6;
  UIWidgetAnim *this_01;
  vector *pvVar7;
  undefined8 uVar8;
  ulong uVar9;
  LevelEditorMultifunctionAssembly *this_02;
  ulong uVar10;
  code *pcVar11;
  int local_58;
  int local_54;
  PakRecord aPStack_50 [16];
  int local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  function<void(int)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xdc) == (int)*(undefined8 *)param_1) {
    if (*(int *)(this + 0xe8) == 0) {
      this_00 = ::operator_new(0x150);
      LevelEditorSeedChooser::LevelEditorSeedChooser(this_00);
      pcVar11 = *(code **)(*(long *)this_00 + 0x198);
      (**(code **)(*(long *)this + 0xd0))
                ((vector<std::string,std::allocator<std::string>> *)&local_40,this);
      iVar1 = local_40 + *(int *)(this + 0x50);
      iVar2 = FUN_04b334ec(0x32);
      uVar3 = FUN_04b334ec(0x15e);
      uVar4 = FUN_04b334ec(0x208);
      (*pcVar11)(this_00,iVar1 + iVar2,iVar2,uVar3,uVar4);
      std::function<void(int)>::function(afStack_28,(function *)(this + 0x100));
      LevelEditorSeedChooser::SetChangeGlobalLevelCallback(this_00,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)afStack_28);
      pLVar6 = (LevelEditorPlantRare *)
               LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
      FUN_04b2d850(this + 0xe0,1);
      FUN_04b32e6c(afStack_28,this,pLVar6);
      LevelEditorSeedChooser::Init(this_00,1,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)afStack_28);
      FUN_04b326d8(afStack_28,this);
      LevelEditorPlantRare::SetCallBack(pLVar6,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)afStack_28);
      this_01 = (UIWidgetAnim *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      pvVar7 = (vector *)UIWidgetAnim::GetScale(this_01);
      std::vector<std::string,std::allocator<std::string>>::vector
                ((vector<std::string,std::allocator<std::string>> *)&local_40,pvVar7);
      uVar10 = 0;
      while( true ) {
        uVar8 = CONCAT44(uStack_3c,local_40);
        uVar9 = FUN_04b2d904(uVar8,local_38);
        if (uVar9 <= uVar10) break;
        uVar8 = FUN_04b2d910(uVar8,uVar10);
        LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aPStack_50,1,uVar8);
        LevelEditorSeedChooser::DisableCard(this_00,(LevelEditorCardInfo *)aPStack_50);
        PakRecord::~PakRecord(aPStack_50);
        uVar10 = uVar10 + 1;
      }
      LevelEditorSeedChooser::TriggerTutorial(this_00);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_40);
    }
    else {
      this_02 = ::operator_new(0x120);
      LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_02);
      (**(code **)(*(long *)this + 0xd0))(&local_58,this);
      iVar1 = *(int *)(this + 0x50);
      iVar2 = FUN_04b334ec(10);
      iVar5 = FUN_04b334ec(0x28);
      Sexy::Insets::Insets
                ((Insets *)&local_40,local_58 + iVar1 + iVar2,
                 local_54 + (*(int *)(this + 0x54) - iVar5) / 2,iVar5,iVar5);
      FUN_04b32734((function<bool(Sexy::Touch_const&)> *)afStack_28,this_02,this);
      std::string::string((string *)aPStack_50,"delete");
      LevelEditorMultifunctionAssembly::AttachButton
                (this_02,1,(Insets *)&local_40,(function<bool(Sexy::Touch_const&)> *)afStack_28,
                 (string *)aPStack_50);
      std::string::~string((string *)aPStack_50);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)afStack_28);
      UIUtil::ShowDialog((Widget *)this_02);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

