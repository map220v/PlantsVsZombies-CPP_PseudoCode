// Class: PlantLevelUpWithGeneralChipsHit


/* PlantLevelUpWithGeneralChipsHit::~PlantLevelUpWithGeneralChipsHit() */

void __thiscall
PlantLevelUpWithGeneralChipsHit::~PlantLevelUpWithGeneralChipsHit
          (PlantLevelUpWithGeneralChipsHit *this)

{
  *(undefined ***)this = &PTR_GetClass_0683f300;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantLevelUpWithGeneralChipsHit::~PlantLevelUpWithGeneralChipsHit() */

void __thiscall
PlantLevelUpWithGeneralChipsHit::~PlantLevelUpWithGeneralChipsHit
          (PlantLevelUpWithGeneralChipsHit *this)

{
  ~PlantLevelUpWithGeneralChipsHit(this);
  AK::FreeHook(this);
  return;
}


/* PlantLevelUpWithGeneralChipsHit::PlantLevelUpWithGeneralChipsHit() */

void __thiscall
PlantLevelUpWithGeneralChipsHit::PlantLevelUpWithGeneralChipsHit
          (PlantLevelUpWithGeneralChipsHit *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined ***)this = &PTR_GetClass_0683f300;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpWithGeneralChipsHit::Draw(Sexy::Graphics*) */

void __thiscall
PlantLevelUpWithGeneralChipsHit::Draw(PlantLevelUpWithGeneralChipsHit *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[LEVEL_UP_HINT_DES1]");
  iVar1 = FUN_043924ac(0xf);
  iVar2 = FUN_043924ac(0x3c);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aCStack_18,2,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLevelUpWithGeneralChipsHit::InitView(Sexy::RtWeakPtr<MagentoProductProps>) */

void __thiscall
PlantLevelUpWithGeneralChipsHit::InitView
          (PlantLevelUpWithGeneralChipsHit *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PlayerInfo *this_00;
  string *psVar9;
  PlantType *this_01;
  long lVar10;
  MagentoProductProps *this_02;
  NameMapperBase *pNVar11;
  UIRewardFrameSelect *pUVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  long *plVar18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  UIRewardFrameSelect *local_48;
  UIRewardFrameSelect *local_40;
  GachaItemInfo aGStack_38 [4];
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
  this_01 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  lVar10 = PlantType::GetProps(this_01);
  iVar3 = *(int *)(lVar10 + 0x28);
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar2 = PlayerInfo::GetPlantStarLevel(this_00,(string *)(lVar10 + 0x80),false);
  if (1 < iVar2) {
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar3 = PlayerInfo::GetPlantStarLevel(this_00,(string *)(lVar10 + 0x80),false);
  }
  GachaItemInfo::GachaItemInfo(aGStack_38);
  this_02 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = MagentoProductProps::GetCurrentLevelPriceData
                    (this_02,iVar3,(LevelUpPriceData *)aGStack_38);
  if (cVar1 != '\0') {
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar3 = PlayerInfo::GetPlantPieceCount(this_00,(string *)(lVar10 + 0x80),false);
    if (iVar3 < local_34) {
      *(int *)(this + 0xd4) = iVar3;
      iVar3 = local_34 - iVar3;
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      iVar2 = GetGeneralCanExchangeNumber((string *)(lVar10 + 0x80));
      if (iVar2 < iVar3) {
        *(int *)(this + 0xd8) = iVar2;
        *(int *)(this + 0xdc) = (local_34 - *(int *)(this + 0xd4)) - iVar2;
      }
      else {
        *(int *)(this + 0xd8) = iVar3;
      }
    }
    else {
      *(int *)(this + 0xd4) = local_34;
    }
    if (0 < local_30) {
      *(int *)(this + 0xe4) = local_30;
    }
    if (local_28 == 2) {
      *(undefined4 *)(this + 0xe0) = local_2c;
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  if (0 < *(int *)(this + 0xd4)) {
    pNVar11 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar3 = NameMapperBase::GetIdForName(pNVar11,(string *)(lVar10 + 0x80));
    pUVar12 = (UIRewardFrameSelect *)
              UIRewardFrameSelect::CreateUIRewardFrame(iVar3,*(int *)(this + 0xd4),true);
    local_40 = pUVar12;
    uVar4 = FUN_043924ac(0);
    uVar5 = FUN_043924ac(0x46);
    (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar4,uVar4,uVar5,uVar5);
    (**(code **)(*(long *)this + 0x60))(this,local_40);
    std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::push_back
              ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)&local_20,
               &local_40);
  }
  if (0 < *(int *)(this + 0xd8)) {
    pNVar11 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    std::string::string((string *)&local_40,"mat_general_plant_chips");
    iVar3 = NameMapperBase::GetIdForName(pNVar11,(string *)&local_40);
    local_48 = (UIRewardFrameSelect *)
               UIRewardFrameSelect::CreateUIRewardFrame(iVar3,*(int *)(this + 0xd8),true);
    std::string::~string((string *)&local_40);
    nop();
    pUVar12 = local_48;
    uVar4 = FUN_043924ac(0);
    uVar5 = FUN_043924ac(0x46);
    (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar4,uVar4,uVar5,uVar5);
    (**(code **)(*(long *)this + 0x60))(this,local_48);
    std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::push_back
              ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)&local_20,
               &local_48);
  }
  if (0 < *(int *)(this + 0xdc)) {
    pNVar11 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    std::string::string((string *)&local_40,"mat_universal_plant_chips");
    iVar3 = NameMapperBase::GetIdForName(pNVar11,(string *)&local_40);
    local_48 = (UIRewardFrameSelect *)
               UIRewardFrameSelect::CreateUIRewardFrame(iVar3,*(int *)(this + 0xdc),true);
    std::string::~string((string *)&local_40);
    nop();
    pUVar12 = local_48;
    uVar4 = FUN_043924ac(0);
    uVar5 = FUN_043924ac(0x46);
    (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar4,uVar4,uVar5,uVar5);
    (**(code **)(*(long *)this + 0x60))(this,local_48);
    std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::push_back
              ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)&local_20,
               &local_48);
  }
  if (0 < *(int *)(this + 0xe4)) {
    pNVar11 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    GetMaterialNameByPlantRare(*(int *)(lVar10 + 0xd0));
    iVar3 = NameMapperBase::GetIdForName(pNVar11,(string *)&local_40);
    local_48 = (UIRewardFrameSelect *)
               UIRewardFrameSelect::CreateUIRewardFrame(iVar3,*(int *)(this + 0xe4),true);
    std::string::~string((string *)&local_40);
    pUVar12 = local_48;
    uVar4 = FUN_043924ac(0);
    uVar5 = FUN_043924ac(0x46);
    (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar4,uVar4,uVar5,uVar5);
    (**(code **)(*(long *)this + 0x60))(this,local_48);
    std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::push_back
              ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)&local_20,
               &local_48);
  }
  if (0 < *(int *)(this + 0xe0)) {
    pUVar12 = (UIRewardFrameSelect *)
              UIRewardFrameSelect::CreateUIRewardFrame(0xfad,*(int *)(this + 0xe0),true);
    local_40 = pUVar12;
    uVar4 = FUN_043924ac(0);
    uVar5 = FUN_043924ac(0x46);
    (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar4,uVar4,uVar5,uVar5);
    (**(code **)(*(long *)this + 0x60))(this,local_40);
    std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::push_back
              ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)&local_20,
               &local_40);
  }
  uVar16 = local_20;
  uVar13 = FUN_04391c0c(local_20,local_18);
  iVar2 = FUN_043924ac(0x46);
  iVar17 = (int)uVar13;
  iVar6 = FUN_043924ac(10);
  iVar3 = *(int *)(this + 0x50);
  uVar4 = FUN_043924ac(0x5a);
  uVar15 = 0;
  while( true ) {
    if (uVar13 <= uVar15) break;
    puVar14 = (undefined8 *)FUN_04391c18(uVar16,uVar15);
    plVar18 = (long *)*puVar14;
    iVar7 = FUN_043924ac(0x46);
    iVar8 = FUN_043924ac(10);
    (**(code **)(*plVar18 + 0x1b0))
              (plVar18,(iVar3 / 2 - (iVar2 * iVar17 + iVar6 * (iVar17 + -1)) / 2) +
                       (iVar7 + iVar8) * (int)uVar15,uVar4);
    uVar16 = local_20;
    uVar13 = FUN_04391c0c(local_20,local_18);
    uVar15 = uVar15 + 1;
  }
  std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::~vector
            ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

