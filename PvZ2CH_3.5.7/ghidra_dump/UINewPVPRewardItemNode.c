// Class: UINewPVPRewardItemNode


/* UINewPVPRewardItemNode::~UINewPVPRewardItemNode() */

void __thiscall UINewPVPRewardItemNode::~UINewPVPRewardItemNode(UINewPVPRewardItemNode *this)

{
  *(undefined ***)this = &PTR__UINewPVPRewardItemNode_06656d00;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06657120;
  DButton::~DButton((DButton *)this);
  return;
}


/* UINewPVPRewardItemNode::~UINewPVPRewardItemNode() */

void __thiscall UINewPVPRewardItemNode::~UINewPVPRewardItemNode(UINewPVPRewardItemNode *this)

{
  ~UINewPVPRewardItemNode(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPRewardItemNode::UINewPVPRewardItemNode(int, int) */

void __thiscall
UINewPVPRewardItemNode::UINewPVPRewardItemNode(UINewPVPRewardItemNode *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  NameMapperBase *this_00;
  SeedPacketUtils *pSVar8;
  long lVar9;
  ResourceInfo *pRVar10;
  undefined8 uVar11;
  char *pcVar12;
  DTransformNode *pDVar13;
  long *plVar14;
  wstring *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  wstring *extraout_x1_02;
  wstring *extraout_x1_03;
  wstring *extraout_x1_04;
  code *pcVar15;
  float fVar16;
  float fVar17;
  DRefPtr<UIAccumulatedLoginButton> *local_d0;
  int local_b4 [3];
  DRefPtr<DSpriteNode> aDStack_a8 [8];
  DRefPtr<DStringNode> aDStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  Sexy aSStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [8];
  Sexy aSStack_70 [8];
  string asStack_68 [8];
  DRefPtr<DAtlasSpriteNode> aDStack_60 [8];
  float local_58 [2];
  string asStack_50 [4];
  float local_4c;
  float local_48 [4];
  GAME_ITEM_INFO aGStack_38 [32];
  undefined1 auStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_b4[0] = param_2;
  DButton::DButton((DButton *)this);
  *(undefined ***)this = &PTR__UINewPVPRewardItemNode_06656d00;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06657120;
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_a8);
  DRefPtr<DStringNode>::DRefPtr(aDStack_a0);
  GetGameItemInfo(param_1,0x7fffffff,0);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
  pcVar15 = *(code **)(*plVar7 + 0x210);
  DVec2::DVec2((DVec2 *)local_48,95.0,95.0);
  (*pcVar15)(plVar7,(DVec2 *)local_48);
  plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x350))(plVar7,1);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x358))(plVar7,1);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x348))
                             (plVar7,PrimeText_Game::Typeface_CafeteriaBlack_32_ThickOutline);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x138))(0,0,0x42be0000,0x42200000);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x130))(0,0);
  pcVar15 = *(code **)(*plVar7 + 0x108);
  DVec2::DVec2((DVec2 *)local_48,0.0,65.0);
  (*pcVar15)(plVar7,(DVec2 *)local_48);
  this_00 = (NameMapperBase *)NewPVPZombiePieceMapper::GetInstance();
  cVar3 = NameMapperBase::ContainsId(this_00,param_1);
  cVar4 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_a8);
  if (cVar4 == '\0') {
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
    uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
    (**(code **)(*plVar7 + 0x30))(plVar7,uVar11);
    pDVar13 = (DTransformNode *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
    DButton::setNormalNode((DButton *)this,pDVar13);
    Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1_03);
    DString::DString((DString *)local_48,asStack_50);
    std::string::~string(asStack_50);
    if (cVar3 == '\0') goto LAB_0355a038;
  }
  else {
    if (cVar3 == '\0') {
      DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)asStack_68);
      DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)aDStack_60);
      pSVar8 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      std::string::string(asStack_50,"new_pvp_beach_octopus");
      std::string::string((string *)local_48,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
      lVar9 = SeedPacketUtils::GetZombiePacketRenderData(pSVar8,asStack_50,(string *)local_48,1);
      std::string::~string((string *)local_48);
      nop();
      std::string::~string(asStack_50);
      nop();
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
      pcVar15 = *(code **)(*plVar7 + 0x340);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x170));
      plVar7 = (long *)(*pcVar15)(plVar7,pRVar10,lVar9 + 0x20);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x170))(0x42be0000);
      pcVar15 = *(code **)(*plVar7 + 0x108);
      iVar5 = FUN_03551e2c(*(undefined4 *)(lVar9 + 0x30));
      iVar6 = FUN_03551e2c(*(undefined4 *)(lVar9 + 0x34));
      DVec2::DVec2((DVec2 *)local_48,(float)iVar5,(float)iVar6);
      plVar7 = (long *)(*pcVar15)(plVar7,(DVec2 *)local_48);
      (**(code **)(*plVar7 + 0x130))(0,0);
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x2e8))(plVar7,auStack_18);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x130))(0x3f000000,0x3f000000);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x170))(0x42200000);
      pcVar15 = *(code **)(*plVar7 + 0x110);
      plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
      (**(code **)(*plVar14 + 0x218))(local_58);
      plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
      (**(code **)(*plVar14 + 0x218))(asStack_50);
      plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
      (**(code **)(*plVar14 + 0x218))((DVec2 *)local_48);
      (*pcVar15)(local_58[0] * 0.5,local_4c - local_48[0] * 0.5,plVar7);
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
      (**(code **)(*plVar7 + 0x30))(plVar7,uVar11);
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_68);
      (**(code **)(*plVar7 + 0x30))(plVar7,uVar11);
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
      pcVar15 = *(code **)(*plVar7 + 0x338);
      if (param_1 == -1) {
        std::string::string(asStack_50,"");
        DString::DString((DString *)local_48,asStack_50);
        pcVar12 = DString::operator_cast_to_char_((DString *)local_48);
        (*pcVar15)(plVar7,pcVar12);
        DString::~DString((DString *)local_48);
        std::string::~string(asStack_50);
        nop();
      }
      else {
        std::to_string<ActivityTypeID>((ActivityTypeID *)local_b4);
        DString::DString((DString *)local_48,asStack_50);
        pcVar12 = DString::operator_cast_to_char_((DString *)local_48);
        (*pcVar15)(plVar7,pcVar12);
        DString::~DString((DString *)local_48);
        std::string::~string(asStack_50);
      }
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_68);
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
      (**(code **)(*plVar7 + 0x30))(plVar7,uVar11);
      pDVar13 = (DTransformNode *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
      DButton::setNormalNode((DButton *)this,pDVar13);
      Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1_04);
      DString::DString((DString *)local_48,asStack_50);
      std::string::~string(asStack_50);
      goto LAB_0355a038;
    }
    iVar5 = NewPVPZombiePieceMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar5);
    iVar5 = FUN_03559970(param_1);
    pSVar8 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    std::string::string((string *)local_48,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
    lVar9 = SeedPacketUtils::GetZombiePacketRenderData(pSVar8,asStack_68,(string *)local_48,iVar5);
    std::string::~string((string *)local_48);
    nop();
    DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_60);
    DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)local_58);
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
    pcVar15 = *(code **)(*plVar7 + 0x340);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x170));
    plVar7 = (long *)(*pcVar15)(plVar7,pRVar10,lVar9 + 0x20);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x170))(0x42be0000);
    pcVar15 = *(code **)(*plVar7 + 0x108);
    iVar5 = FUN_03551e2c(*(undefined4 *)(lVar9 + 0x30));
    iVar6 = FUN_03551e2c(*(undefined4 *)(lVar9 + 0x34));
    DVec2::DVec2((DVec2 *)local_48,(float)iVar5,(float)iVar6);
    plVar7 = (long *)(*pcVar15)(plVar7,(DVec2 *)local_48);
    (**(code **)(*plVar7 + 0x130))(0,0);
    iVar5 = *(int *)(lVar9 + 0x30);
    iVar6 = *(int *)(lVar9 + 0x34);
    iVar1 = *(int *)(lVar9 + 0x18);
    iVar2 = *(int *)(lVar9 + 0x1c);
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
    pcVar15 = *(code **)(*plVar7 + 0x340);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x170));
    plVar7 = (long *)(*pcVar15)(plVar7,pRVar10,lVar9 + 8);
    pcVar15 = *(code **)(*plVar7 + 0x108);
    fVar16 = (float)FUN_03551e64((float)(iVar1 - iVar5));
    fVar17 = (float)FUN_03551e64((float)(iVar2 - iVar6));
    DVec2::DVec2((DVec2 *)local_48,fVar16,fVar17);
    plVar7 = (long *)(*pcVar15)(plVar7,(DVec2 *)local_48);
    (**(code **)(*plVar7 + 0x130))(0,0);
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
    uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
    (**(code **)(*plVar7 + 0x30))(plVar7,uVar11);
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
    uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
    (**(code **)(*plVar7 + 0x30))(plVar7,uVar11);
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
    pcVar15 = *(code **)(*plVar7 + 0x338);
    if (param_1 == -1) {
      std::string::string(asStack_50,"");
      DString::DString((DString *)local_48,asStack_50);
      pcVar12 = DString::operator_cast_to_char_((DString *)local_48);
      (*pcVar15)(plVar7,pcVar12);
      DString::~DString((DString *)local_48);
      std::string::~string(asStack_50);
      nop();
    }
    else {
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_b4);
      DString::DString((DString *)local_48,asStack_50);
      pcVar12 = DString::operator_cast_to_char_((DString *)local_48);
      (*pcVar15)(plVar7,pcVar12);
      DString::~DString((DString *)local_48);
      std::string::~string(asStack_50);
    }
    local_d0 = (DRefPtr<UIAccumulatedLoginButton> *)local_58;
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(local_d0);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
    std::string::~string(asStack_68);
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
    uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
    (**(code **)(*plVar7 + 0x30))(plVar7,uVar11);
    pDVar13 = (DTransformNode *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
    DButton::setNormalNode((DButton *)this,pDVar13);
    Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1);
    DString::DString((DString *)local_48,asStack_50);
    std::string::~string(asStack_50);
  }
  local_d0 = (DRefPtr<UIAccumulatedLoginButton> *)local_58;
  iVar5 = NewPVPZombiePieceMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar5);
  FUN_031f5e7c(local_d0,"zombie_",asStack_98);
  Sexy::StringToUpper((Sexy *)local_d0,extraout_x1_00);
  std::operator+("[",(string *)aDStack_60);
  std::operator+(asStack_68,"]");
  Sexy::ToSexyString(aSStack_70,extraout_x1_01);
  TodStringTranslate(awStack_78);
  TodStringTranslate(L"[NEW_PVP_ZOMBIE_CARD]");
  std::operator+(awStack_80,(wstring *)asStack_50);
  Sexy::SexyStringToUTF8String(aSStack_88,extraout_x1_02);
  DString::operator=((DString *)local_48,asStack_90);
  std::string::~string(asStack_90);
  FUN_05476c50(aSStack_88);
  FUN_05476c50((wstring *)asStack_50);
  FUN_05476c50(awStack_80);
  FUN_05476c50(awStack_78);
  std::string::~string((string *)aSStack_70);
  std::string::~string(asStack_68);
  std::string::~string((string *)aDStack_60);
  std::string::~string((string *)local_d0);
  std::string::~string(asStack_98);
LAB_0355a038:
  DString::~DString((DString *)local_48);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_a0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_a8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

