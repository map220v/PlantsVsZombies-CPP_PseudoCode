// Class: PlantAvatarContent


/* PlantAvatarContent::SetSelected(bool) */

void __thiscall PlantAvatarContent::SetSelected(PlantAvatarContent *this,bool param_1)

{
  this[0xfc] = (PlantAvatarContent)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarContent::Resize(int, int, int, int) */

void __thiscall
PlantAvatarContent::Resize(PlantAvatarContent *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar1 = FUN_043a19d8(0);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar1,param_3,param_4);
  plVar3 = *(long **)(this + 0xe0);
  *(undefined8 *)(this + 0xe8) = local_18;
  *(undefined8 *)(this + 0xf0) = uStack_10;
  if (plVar3 != (long *)0x0) {
    uVar2 = FUN_043a19d8(0);
    (**(code **)(*plVar3 + 0x198))(plVar3,uVar2,uVar2,param_3,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarContent::~PlantAvatarContent() */

void __thiscall PlantAvatarContent::~PlantAvatarContent(PlantAvatarContent *this)

{
  *(undefined ***)this = &PTR_GetClass_0683f620;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantAvatarContent::~PlantAvatarContent() */

void __thiscall PlantAvatarContent::~PlantAvatarContent(PlantAvatarContent *this)

{
  ~PlantAvatarContent(this);
  AK::FreeHook(this);
  return;
}


/* PlantAvatarContent::RefreshCurrentData() */

void __thiscall PlantAvatarContent::RefreshCurrentData(PlantAvatarContent *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PlantAvatarContent PVar1;
  int iVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar3;
  undefined4 uVar4;
  
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8);
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = PlayerInfo::GetAvatarPiecesCount(this_02,lVar3 + 0x80,0,0);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar4 = NEON_fminnm((float)iVar2 / (float)*(int *)(lVar3 + 0x90),0x3f800000);
  *(undefined4 *)(this + 0xf8) = uVar4;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PVar1 = (PlantAvatarContent)PlayerInfo::GetIsPlantUnlocked(this_02,(string *)(lVar3 + 0x80));
  this[0xfd] = PVar1;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = PlayerInfo::GetAvatarPiecesCount(this_02,lVar3 + 0x80,0,0);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PVar1 = (PlantAvatarContent)0x0;
  if (*(int *)(lVar3 + 0x90) <= iVar2) {
    PVar1 = (PlantAvatarContent)((byte)this[0xfd] ^ 1);
  }
  this[0xfe] = PVar1;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = PlayerInfo::GetAvatarPiecesCount(this_02,lVar3 + 0x80,0,0);
  PVar1 = (PlantAvatarContent)0x0;
  if (iVar2 == 0) {
    PVar1 = this[0xfd];
  }
  this[0xff] = PVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarContent::PlantAvatarContent(Sexy::RtWeakPtr<MagentoProductProps>, int,
   Sexy::ButtonListener*) */

void __thiscall
PlantAvatarContent::PlantAvatarContent
          (PlantAvatarContent *this,RtWeakPtr *param_2,int param_3,ButtonListener *param_4)

{
  undefined *this_00;
  char cVar1;
  PVZ2UIButton *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_02;
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  Color aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this_02 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8);
  *(undefined ***)this = &PTR_GetClass_0683f620;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_02)
  ;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_02,param_2);
  this[0xfc] = (PlantAvatarContent)0x0;
  this[0xfd] = (PlantAvatarContent)0x0;
  this[0xfe] = (PlantAvatarContent)0x0;
  this[0xff] = (PlantAvatarContent)0x0;
  *(undefined4 *)(this + 0xf8) = 0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_02);
  if (cVar1 != '\0') {
    RefreshCurrentData(this);
  }
  FUN_05478178(awStack_58,&DAT_056f11a8,auStack_60);
  Sexy::Color::Color(aCStack_50,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_01,param_3,param_4,awStack_58,aCStack_50);
  *(PVZ2UIButton **)(this + 0xe0) = this_01;
  FUN_05476c50(awStack_58);
  nop();
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RefreshCurrentData);
  Sexy::Delegate0::Delegate0<PlantAvatarContent,void(PlantAvatarContent::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::RefreshAvatarCardData,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarContent::Draw(Sexy::Graphics*) */

void __thiscall PlantAvatarContent::Draw(PlantAvatarContent *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SeedPacketUtils *this_01;
  long lVar5;
  ResourceInfo *pRVar6;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  long lVar7;
  Image *pIVar8;
  LotteryResultProgressBar *this_04;
  SalesProgressBar *this_05;
  float local_20;
  float local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  lVar5 = SeedPacketUtils::GetPlantPacketRenderData(this_01,(string *)(lVar5 + 0x80),-1,-1,-1);
  this_00 = (RtWeakPtr *)(lVar5 + 0x170);
  iVar2 = FUN_043a19d8(10);
  if (this[0xfc] == (PlantAvatarContent)0x0) {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Insets::Insets
              (aIStack_18,iVar2 + *(int *)(lVar5 + 0x30),iVar2 + *(int *)(lVar5 + 0x34),
               *(int *)(lVar5 + 0x28),*(int *)(lVar5 + 0x2c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,(TRect *)aIStack_18,(TRect *)(lVar5 + 0x20));
  }
  else {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar6,iVar2 + *(int *)(lVar5 + 0x78),iVar2 + *(int *)(lVar5 + 0x7c)
               ,(TRect *)(lVar5 + 0x68));
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  iVar3 = PlayerInfo::GetPlantStarLevel(this_03,(string *)(lVar7 + 0x80),false);
  if (0 < iVar3) {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Insets::Insets
              (aIStack_18,iVar2 + *(int *)(lVar5 + 0x150),iVar2 + *(int *)(lVar5 + 0x154),
               *(int *)(lVar5 + 0x148),*(int *)(lVar5 + 0x14c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,(TRect *)aIStack_18,(TRect *)(lVar5 + 0x140));
  }
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar6,iVar2 + *(int *)(lVar5 + 0x18),iVar2 + *(int *)(lVar5 + 0x1c),
             (TRect *)(lVar5 + 8));
  iVar3 = *(int *)(lVar5 + 0x34);
  iVar4 = *(int *)(lVar5 + 0x2c);
  iVar1 = *(int *)(lVar5 + 0x28);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01698);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar2 + iVar3 + iVar4,iVar1,*(int *)(lVar7 + 0x3c));
  if (this[0xfd] == (PlantAvatarContent)0x0) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00d90);
    Sexy::Graphics::DrawImage
              (param_1,pIVar8,iVar2 + *(int *)(lVar5 + 0x30),iVar2 + *(int *)(lVar5 + 0x34),
               *(int *)(lVar5 + 0x28),*(int *)(lVar5 + 0x2c));
    if (this[0xfc] != (PlantAvatarContent)0x0) goto LAB_043aa410;
  }
  else {
    if (this[0xfc] == (PlantAvatarContent)0x0) goto LAB_043aa2a8;
LAB_043aa410:
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar6,iVar2 + *(int *)(lVar5 + 0x138),
               iVar2 + *(int *)(lVar5 + 0x13c),(TRect *)(lVar5 + 0x128));
  }
  if (this[0xfd] == (PlantAvatarContent)0x0) {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_20);
    iVar2 = *(int *)(this + 0x50);
    this_04 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01188);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_04);
    iVar3 = *(int *)(this + 0x54);
    local_20 = (float)((iVar2 - iVar4) / 2);
    this_05 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01188);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_05);
    local_1c = (float)((iVar3 - iVar2) / 2);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01188);
    Sexy::Graphics::DrawImage(param_1,pIVar8,(int)local_20,(int)local_1c);
  }
LAB_043aa2a8:
  if (this[0xfe] != (PlantAvatarContent)0x0) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00db8);
    iVar2 = FUN_043a19d8(5);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

