// Class: UINewPVPSeedChooserItem


/* UINewPVPSeedChooserItem::SetState(ItemButtonState) */

void __thiscall UINewPVPSeedChooserItem::SetState(UINewPVPSeedChooserItem *this,int param_2)

{
  if (*(int *)(this + 0x308) != param_2) {
    *(int *)(this + 0x308) = param_2;
    if (param_2 == 2) {
      this[0x318] = (UINewPVPSeedChooserItem)0x1;
      return;
    }
    this[0x318] = (UINewPVPSeedChooserItem)0x0;
  }
  return;
}


/* UINewPVPSeedChooserItem::~UINewPVPSeedChooserItem() */

void __thiscall UINewPVPSeedChooserItem::~UINewPVPSeedChooserItem(UINewPVPSeedChooserItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066505c0;
  *(undefined ***)(this + 0x198) = &PTR__UINewPVPSeedChooserItem_06650928;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06650950;
  *(undefined8 *)(this + 800) = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x310));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to UINewPVPSeedChooserItem::~UINewPVPSeedChooserItem() */

void __thiscall UINewPVPSeedChooserItem::~UINewPVPSeedChooserItem(UINewPVPSeedChooserItem *this)

{
  ~UINewPVPSeedChooserItem(this + -0x198);
  return;
}


/* UINewPVPSeedChooserItem::~UINewPVPSeedChooserItem() */

void __thiscall UINewPVPSeedChooserItem::~UINewPVPSeedChooserItem(UINewPVPSeedChooserItem *this)

{
  ~UINewPVPSeedChooserItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPSeedChooserItem::~UINewPVPSeedChooserItem() */

void __thiscall UINewPVPSeedChooserItem::~UINewPVPSeedChooserItem(UINewPVPSeedChooserItem *this)

{
  ~UINewPVPSeedChooserItem(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooserItem::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPSeedChooserItem::Draw(UINewPVPSeedChooserItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SeedPacketUtils *pSVar5;
  long lVar6;
  PacketRenderData *pPVar7;
  undefined8 uVar8;
  Image *pIVar9;
  LotteryResultProgressBar *this_00;
  string *extraout_x1;
  GraphicsAutoState aGStack_40 [8];
  Sexy aSStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  if (*(int *)(this + 0x308) == 2) {
    Sexy::Insets::Insets((Insets *)asStack_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)asStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  else if (*(int *)(this + 0x308) == 3) {
    Sexy::Insets::Insets((Insets *)asStack_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)asStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x310));
    pPVar7 = (PacketRenderData *)
             SeedPacketUtils::GetPlantPacketRenderData(pSVar5,(string *)(lVar6 + 8),-1,-1,-1);
    pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    SeedPacketUtils::DrawPacket(pSVar5,param_1,pPVar7,false,-1,false,false);
    std::string::string(asStack_18,"IMAGE_UI_PACKETS_LOCKED");
    this_00 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_18,true);
    std::string::~string(asStack_18);
    nop();
    iVar1 = *(int *)(this + 0x50);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar2 = *(int *)(this + 0x54);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)this_00,(int)((float)iVar1 - (float)iVar3 * 1.4),
               (int)((float)iVar2 - (float)iVar4 * 1.2));
    goto LAB_0352ffb4;
  }
  pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x310));
  pPVar7 = (PacketRenderData *)
           SeedPacketUtils::GetPlantPacketRenderData(pSVar5,(string *)(lVar6 + 8),-1,-1,-1);
  pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  SeedPacketUtils::DrawPacket(pSVar5,param_1,pPVar7,false,-1,false,false);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x30c));
  Sexy::ToSexyString(aSStack_38,extraout_x1);
  iVar1 = FUN_0352e078(0x13);
  iVar2 = FUN_0352e078(0x18);
  iVar3 = FUN_0352e078(0x46);
  iVar4 = FUN_0352e078(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar8 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
  Sexy::Color::Color((Color *)asStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar8,asStack_18,4,1);
  FUN_05476c50(auStack_30);
  std::string::~string((string *)aSStack_38);
LAB_0352ffb4:
  Sexy::Graphics::SetColorizeImages(param_1,false);
  if (this[0x319] != (UINewPVPSeedChooserItem)0x0) {
    std::string::string(asStack_18,"IMAGE_UI_PACKETS_SELECT");
    pIVar9 = (Image *)StringHelper::ToImage(asStack_18,true);
    std::string::~string(asStack_18);
    nop();
    Sexy::Graphics::DrawImage(param_1,pIVar9,0,0);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSeedChooserItem::ButtonPress(int) */

void UINewPVPSeedChooserItem::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_SeedLift");
  return;
}


/* non-virtual thunk to UINewPVPSeedChooserItem::ButtonPress(int) */

void __thiscall UINewPVPSeedChooserItem::ButtonPress(UINewPVPSeedChooserItem *this,int param_1)

{
  ButtonPress((int)this + -0x300);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooserItem::UINewPVPSeedChooserItem(int) */

void __thiscall
UINewPVPSeedChooserItem::UINewPVPSeedChooserItem(UINewPVPSeedChooserItem *this,int param_1)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  int iVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  ServerPlantID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(asStack_20,&DAT_056f11a8,auStack_28);
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x310);
  Sexy::Color::Color((Color *)aSStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),(wstring *)asStack_20,
             (Color *)aSStack_18);
  FUN_05476c50(asStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined ***)this = &PTR_GetClass_066505c0;
  *(undefined ***)(this + 0x198) = &PTR__UINewPVPSeedChooserItem_06650928;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06650950;
  *(undefined4 *)(this + 0x30c) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  this[0x318] = (UINewPVPSeedChooserItem)0x0;
  this[0x319] = (UINewPVPSeedChooserItem)0x0;
  *(undefined8 *)(this + 800) = 0;
  ServerPlantID::ServerPlantID(aSStack_18,param_1);
  ServerPlantID::ToString();
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)aSStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_18);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x28));
  *(undefined4 *)(this + 0x30c) = *(undefined4 *)(lVar4 + 0x18);
  iVar1 = FUN_0352e078(100);
  iVar2 = FUN_0352e078(0x3f);
  PVZ2UIButton::Resize((PVZ2UIButton *)this,0,0,iVar1,iVar2);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSeedChooserItem::ButtonDepress(int) */

void __thiscall UINewPVPSeedChooserItem::ButtonDepress(UINewPVPSeedChooserItem *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Drop");
  if (*(UINewPVPSeedChooser **)(this + 800) != (UINewPVPSeedChooser *)0x0) {
    UINewPVPSeedChooser::setItemPreview(*(UINewPVPSeedChooser **)(this + 800),param_1);
  }
  if ((*(int *)(this + 0x308) != 0) && (*(int *)(this + 0x308) != 3)) {
    UINewPVPSeedChooser::onItemClicked(*(UINewPVPSeedChooser **)(this + 800),this);
    return;
  }
  return;
}


/* non-virtual thunk to UINewPVPSeedChooserItem::ButtonDepress(int) */

void __thiscall UINewPVPSeedChooserItem::ButtonDepress(UINewPVPSeedChooserItem *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}

