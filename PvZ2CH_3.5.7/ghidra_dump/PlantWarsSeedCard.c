// Class: PlantWarsSeedCard


/* PlantWarsSeedCard::PlantWarsSeedCard() */

void __thiscall PlantWarsSeedCard::PlantWarsSeedCard(PlantWarsSeedCard *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069bb970;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf8));
  this[0xd8] = (PlantWarsSeedCard)0x0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0xffffffff;
  this[0xec] = (PlantWarsSeedCard)0x0;
  *(undefined8 *)(this + 0x100) = 0;
  return;
}


/* PlantWarsSeedCard::~PlantWarsSeedCard() */

void __thiscall PlantWarsSeedCard::~PlantWarsSeedCard(PlantWarsSeedCard *this)

{
  *(undefined ***)this = &PTR_GetClass_069bb970;
  if (*(long **)(this + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x100) + 0x18))();
    *(undefined8 *)(this + 0x100) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantWarsSeedCard::~PlantWarsSeedCard() */

void __thiscall PlantWarsSeedCard::~PlantWarsSeedCard(PlantWarsSeedCard *this)

{
  ~PlantWarsSeedCard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsSeedCard::GetPlantTypeName() */

void PlantWarsSeedCard::GetPlantTypeName(void)

{
  long lVar1;
  bool bVar2;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0xf0));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xf0));
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsSeedCard::InitPlant(Sexy::RtWeakPtr<PlantType const>, PlantWarsSeedCard::SeedCardType)
    */

void __thiscall
PlantWarsSeedCard::InitPlant(PlantWarsSeedCard *this,RtWeakPtr *param_2,undefined4 param_3)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  undefined4 uVar1;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar2;
  long *plVar3;
  SeedPacketUtils *this_03;
  PacketRenderData *pPVar4;
  DeviceImage *pDVar5;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xf0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  *(undefined4 *)(this + 0xdc) = param_3;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar1 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar2 + 8),false);
  *(undefined4 *)(this + 0xe4) = uVar1;
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar1 = (**(code **)(*plVar3 + 0x70))(plVar3,0xfffffffe);
  *(undefined4 *)(this + 0xe8) = uVar1;
  this_03 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  pPVar4 = (PacketRenderData *)
           SeedPacketUtils::GetPlantPacketRenderData(this_03,(string *)(lVar2 + 8),-1,-1,-1);
  pDVar5 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_03,pPVar4,0,0);
  *(DeviceImage **)(this + 0x100) = pDVar5;
  SeedPacketUtils::DrawPacketToDeviceImage(this_03,pDVar5,pPVar4,false,-1,false,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsSeedCard::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsSeedCard::Draw(PlantWarsSeedCard *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  string asStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0x100) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x100),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (*(int *)(this + 0xe0) - 1U < 2) {
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aIStack_28,param_1);
    Sexy::Insets::Insets((Insets *)aCStack_18,0,0,0,0x80);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98d78);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aIStack_28);
  }
  if (this[0xec] == (PlantWarsSeedCard)0x0) {
    iVar3 = FUN_04d9f494(0x16);
    iVar4 = *(int *)(this + 0x50);
    iVar1 = FUN_04d9f494(3);
    Sexy::Insets::Insets(aIStack_28,iVar4 - iVar3,iVar1,iVar3,iVar3);
    iVar4 = *(int *)(this + 0xe4);
    if (iVar4 == 1) {
      Sexy::Insets::Insets((Insets *)aCStack_18,aIStack_28);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99340);
      DrawAdaptiveImage(param_1,(Insets *)aCStack_18,uVar6);
      iVar4 = *(int *)(this + 0xe4);
    }
    if (iVar4 == 2) {
      Sexy::Insets::Insets((Insets *)aCStack_18,aIStack_28);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99298);
      DrawAdaptiveImage(param_1,(Insets *)aCStack_18,uVar6);
      iVar4 = *(int *)(this + 0xe4);
    }
    if (iVar4 == 3) {
      Sexy::Insets::Insets((Insets *)aCStack_18,aIStack_28);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99220);
      DrawAdaptiveImage(param_1,(Insets *)aCStack_18,uVar6);
      iVar4 = *(int *)(this + 0xe4);
    }
    if (iVar4 == 4) {
      Sexy::Insets::Insets((Insets *)aCStack_18,aIStack_28);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99088);
      DrawAdaptiveImage(param_1,(Insets *)aCStack_18,uVar6);
      iVar4 = *(int *)(this + 0xe4);
    }
    if (iVar4 == 5) {
      Sexy::Insets::Insets((Insets *)aCStack_18,aIStack_28);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98f48);
      DrawAdaptiveImage(param_1,(Insets *)aCStack_18,uVar6);
    }
    if (this[0xec] != (PlantWarsSeedCard)0x0) goto LAB_04da56e0;
    if (*(int *)(this + 0xe8) < 1) goto LAB_04da5738;
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe8));
    Sexy::ToWString(asStack_40);
    TodStringTranslate(awStack_38);
    iVar4 = FUN_04d9f494(0x16);
    Sexy::Insets::Insets
              (aIStack_28,*(int *)(this + 0x50) / 2,*(int *)(this + 0x54) - iVar4,
               *(int *)(this + 0x50) / 2,iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
    std::string::~string(asStack_40);
    if (this[0xec] != (PlantWarsSeedCard)0x0) goto LAB_04da56e0;
    iVar4 = *(int *)(this + 0xe0);
    if (iVar4 == 1) goto LAB_04da58fc;
LAB_04da5744:
    if (iVar4 != 2) goto LAB_04da574c;
    iVar3 = *(int *)(this + 0x50);
    iVar1 = *(int *)(this + 0x54);
    iVar4 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    Sexy::Insets::Insets((Insets *)aCStack_18,iVar4 >> 2,iVar2 >> 2,iVar3 / 2,iVar1 / 2);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98c98;
  }
  else {
LAB_04da56e0:
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99530);
    iVar1 = FUN_04d9f494(0x1e);
    iVar4 = *(int *)(this + 0x50);
    iVar3 = *(int *)(this + 0x54);
    iVar2 = FUN_04d9f494(0x19);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar4 - iVar1,iVar3 - iVar1,iVar2,iVar2);
LAB_04da5738:
    iVar4 = *(int *)(this + 0xe0);
    if (iVar4 != 1) goto LAB_04da5744;
LAB_04da58fc:
    iVar3 = *(int *)(this + 0x50);
    iVar1 = *(int *)(this + 0x54);
    iVar4 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    Sexy::Insets::Insets((Insets *)aCStack_18,iVar4 >> 2,iVar2 >> 2,iVar3 / 2,iVar1 / 2);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99148;
  }
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  DrawAdaptiveImage(param_1,aCStack_18,uVar6);
LAB_04da574c:
  if (this[0xd8] != (PlantWarsSeedCard)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b991c8);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsSeedCard::OnClick() */

void __thiscall PlantWarsSeedCard::OnClick(PlantWarsSeedCard *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  undefined *puVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  puVar2 = gMessageRouter;
  iVar1 = *(int *)(this + 0xdc);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_05475d88(asStack_10,lVar3 + 8);
    MessageRouter::Post<std::string_const&,std::string>
              ((MessageRouter *)puVar2,Message::SelectSeedCard,asStack_10);
    std::string::~string(asStack_10);
    puVar2 = gMessageRouter;
    if (*(int *)(this + 0xe0) == 0) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      FUN_05475d88(asStack_10,lVar3 + 8);
      MessageRouter::Post<std::string_const&,std::string>
                ((MessageRouter *)puVar2,Message::AddSeedCardToTeamPanel,asStack_10);
      std::string::~string(asStack_10);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      FUN_05475d88(asStack_10,lVar3 + 8);
      MessageRouter::Post<std::string_const&,std::string>
                ((MessageRouter *)puVar2,Message::RemoveSeedCardForTeamPanel,asStack_10);
      std::string::~string(asStack_10);
    }
  }
  else if (iVar1 == 2) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0))
    ;
    FUN_05475d88(asStack_10,lVar3 + 8);
    MessageRouter::Post<std::string_const&,std::string>
              ((MessageRouter *)puVar2,Message::RemoveSeedCardForTeamPanel,asStack_10);
    std::string::~string(asStack_10);
  }
  else if (iVar1 == 3) {
    MessageRouter::Post<PlantWarsSeedCard*,PlantWarsSeedCard*>
              ((MessageRouter *)gMessageRouter,Message::SelectZombieCard,this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsSeedCard::TouchEnded(Sexy::Touch const&) */

void __thiscall PlantWarsSeedCard::TouchEnded(PlantWarsSeedCard *this,Touch *param_1)

{
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  OnClick(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsSeedCard::InitPlant(std::string const&, PlantWarsSeedCard::SeedCardType) */

void __thiscall
PlantWarsSeedCard::InitPlant(PlantWarsSeedCard *this,undefined8 param_2,undefined8 param_3)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((int)param_3 - 1U < 2) {
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
    InitPlant(this,aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsSeedCard::InitZombie(std::string const&, PlantWarsSeedCard::SeedCardType) */

void __thiscall
PlantWarsSeedCard::InitZombie(PlantWarsSeedCard *this,undefined8 param_2,undefined4 param_3)

{
  string *psVar1;
  SeedPacketUtils *this_00;
  long lVar2;
  PacketRenderData *pPVar3;
  DeviceImage *pDVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined4 *)(this + 0xdc) = param_3;
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  std::string::string((string *)aRStack_10,"IMAGE_UI_PACKETS_ZOMBIE_NEW_PVP_");
  pPVar3 = (PacketRenderData *)
           SeedPacketUtils::GetZombiePacketRenderData
                     (this_00,(string *)(lVar2 + 8),(string *)aRStack_10,-1);
  std::string::~string((string *)aRStack_10);
  nop();
  pDVar4 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar3,0,0);
  *(DeviceImage **)(this + 0x100) = pDVar4;
  SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar4,pPVar3,false,-1,false,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

