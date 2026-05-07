// Class: LotteryPanel


/* LotteryPanel::CloseBonusEffect() */

void __thiscall LotteryPanel::CloseBonusEffect(LotteryPanel *this)

{
  if (*(long *)(this + 0x178) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x178))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x178));
    *(undefined8 *)(this + 0x178) = 0;
  }
  return;
}


/* LotteryPanel::SetInited(bool) */

void __thiscall LotteryPanel::SetInited(LotteryPanel *this,bool param_1)

{
  this[0xe0] = (LotteryPanel)param_1;
  return;
}


/* LotteryPanel::IsInited() */

LotteryPanel __thiscall LotteryPanel::IsInited(LotteryPanel *this)

{
  return this[0xe0];
}


/* LotteryPanel::OnNotifyBonusClosed() */

void __thiscall LotteryPanel::OnNotifyBonusClosed(LotteryPanel *this)

{
  (**(code **)(**(long **)(this + 0x138) + 0x188))(*(long **)(this + 0x138),0);
  *(undefined4 *)(this + 0x134) = 0;
  return;
}


/* LotteryPanel::SetChances(int) */

void __thiscall LotteryPanel::SetChances(LotteryPanel *this,int param_1)

{
  *(int *)(this + 0xf8) = param_1;
  if (*(CardGameDeckButton **)(this + 0x138) != (CardGameDeckButton *)0x0) {
    CardGameDeckButton::SetIndex(*(CardGameDeckButton **)(this + 0x138),param_1);
    return;
  }
  return;
}


/* LotteryPanel::AlmostThere() */

bool __thiscall LotteryPanel::AlmostThere(LotteryPanel *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_04bbb554(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 0x188));
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return *(int *)(this + 0xec) - *(int *)(this + 0xe4) <= iVar1 >> 2;
}


/* LotteryPanel::GetItemW() */

float __thiscall LotteryPanel::GetItemW(LotteryPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_04bbb930(0x19);
  iVar1 = *(int *)(this + 0x11c);
  iVar3 = FUN_04bbb930(3);
  return (((float)iVar1 - (float)iVar2 * 2.0) - (float)(iVar3 * 3)) * 0.25;
}


/* LotteryPanel::GetItemH() */

float __thiscall LotteryPanel::GetItemH(LotteryPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_04bbb930(0x19);
  iVar1 = *(int *)(this + 0x120);
  iVar3 = FUN_04bbb930(3);
  return (((float)iVar1 - (float)iVar2 * 2.0) - (float)(iVar3 * 3)) * 0.25;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::GetLotteryItemPos(int) */

void __thiscall LotteryPanel::GetLotteryItemPos(LotteryPanel *this,int param_1)

{
  int iVar1;
  int iVar2;
  TPoint *pTVar3;
  float fVar4;
  float fVar5;
  int local_18;
  int local_14;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar3 = (TPoint *)FUN_04bbb568(DAT_06b8a288,(long)param_1);
  Sexy::Point::Point((Point *)&local_18,pTVar3);
  fVar4 = (float)GetItemW(this);
  fVar5 = (float)GetItemH(this);
  iVar1 = FUN_04bbb930(0x19);
  iVar2 = FUN_04bbb930(3);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,(float)iVar1 + (float)local_18 * ((float)iVar2 + fVar4),
             (float)iVar1 + (float)local_14 * ((float)iVar2 + fVar5));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10 & 0xffffffff,(int)(local_10 >> 0x20));
}


/* LotteryPanel::CanSelectNext() */

bool __thiscall LotteryPanel::CanSelectNext(LotteryPanel *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x110) <= fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::SetBonus(int, int) */

void __thiscall LotteryPanel::SetBonus(LotteryPanel *this,int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xfc) = 0xffffffff;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x180));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x180));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_04bbce70:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((puVar2[1] == param_1) && (puVar2[2] == param_2)) {
      *(undefined4 *)(this + 0xfc) = *puVar2;
      goto LAB_04bbce70;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::GetLotteryInfoByIndex(int) */

void __thiscall LotteryPanel::GetLotteryInfoByIndex(LotteryPanel *this,int param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 local_30;
  long local_28;
  uint local_20;
  long local_18;
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x180));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x180));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
      local_20 = (uint)bVar1;
      local_28 = (ulong)bVar1 << 0x20;
      LotteryItemInfo::LotteryItemInfo((LotteryItemInfo *)&local_28);
      local_18 = local_28;
      local_10 = local_20;
LAB_04bbcfd4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_18,local_10);
    }
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if ((int)*plVar2 == param_1) {
      local_18 = *plVar2;
      local_10 = *(uint *)(plVar2 + 1);
      goto LAB_04bbcfd4;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::GetLotteryItemByIndex(int) */

void __thiscall LotteryPanel::GetLotteryItemByIndex(LotteryPanel *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  LotteryItem *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x198));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x198));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (LotteryItem *)*puVar3;
    iVar2 = LotteryItem::GetIndex(this_00);
    if (iVar2 == param_1) goto LAB_04bbd130;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  this_00 = (LotteryItem *)0x0;
LAB_04bbd130:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::SetPeriod(int) */

void __thiscall LotteryPanel::SetPeriod(LotteryPanel *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0xf4) = param_1;
  local_8 = ___stack_chk_guard;
  GetDollImage(param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x140),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::Resize(Sexy::TRect<int> const&) */

void __thiscall LotteryPanel::Resize(LotteryPanel *this,TRect *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *pLVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x114) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x11c) = uVar1;
  *(undefined4 *)(this + 0x114) = 0;
  iVar2 = *(int *)(this + 0x11c);
  iVar3 = *(int *)(this + 0x120);
  *(undefined4 *)(this + 0x118) = 0;
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a198);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a198);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  Sexy::Insets::Insets((Insets *)&local_18,iVar2 / 2 - iVar4 / 2,iVar3 / 2 - iVar5 / 2,iVar4,iVar5);
  *(undefined8 *)(this + 0x124) = local_18;
  *(undefined8 *)(this + 300) = uStack_10;
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 0x1a0))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryPanel::DrawSelectFrame(Sexy::Graphics*, Sexy::TRect<int>) */

void __thiscall LotteryPanel::DrawSelectFrame(undefined8 param_1_00,Graphics *param_1,int *param_3)

{
  Image *pIVar1;
  
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a740);
  Sexy::Graphics::DrawImage(param_1,pIVar1,*param_3,param_3[1],param_3[2],param_3[3]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void LotteryPanel::DrawAll(ModalFlags *param_1,Graphics *param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  Graphics *in_x2;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s1;
  undefined8 local_38;
  undefined8 local_30;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)param_1,(ModalFlags *)param_2,in_x2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x180));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x180));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    fVar5 = (float)GetLotteryItemPos((LotteryPanel *)param_1,*piVar3);
    iVar4 = (int)in_s1;
    fVar6 = (float)GetItemW((LotteryPanel *)param_1);
    fVar7 = (float)GetItemH((LotteryPanel *)param_1);
    Sexy::Insets::Insets(aIStack_28,(int)fVar5,iVar4,(int)fVar6,(int)fVar7);
    if (*piVar3 == *(int *)(param_1 + 0x100)) {
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      DrawSelectFrame((LotteryPanel *)param_1);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_38);
  }
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x148));
  if (cVar2 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(param_1 + 0x148),in_x2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::LotteryPanel() */

void __thiscall LotteryPanel::LotteryPanel(LotteryPanel *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe0] = (LotteryPanel)0x0;
  *(undefined ***)this = &PTR_GetClass_06978fe0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06979308;
  this[0xe1] = (LotteryPanel)0x0;
  *(undefined4 *)(this + 0x100) = 0xffffffff;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x114));
  Sexy::Insets::Insets((Insets *)(this + 0x124));
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x148));
  *(undefined8 *)(this + 0x178) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x198));
  std::vector<LotteryItemInfo,std::allocator<LotteryItemInfo>>::clear
            ((vector<LotteryItemInfo,std::allocator<LotteryItemInfo>> *)(this + 0x180));
  std::vector<LotteryItem*,std::allocator<LotteryItem*>>::clear
            ((vector<LotteryItem*,std::allocator<LotteryItem*>> *)(this + 0x198));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LUA_UI_DaveShop");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"LUA_UI_DaveShop");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_World_Unlock_Pack");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"UI_World_Unlock_Pack");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::InitView() */

void __thiscall LotteryPanel::InitView(LotteryPanel *this)

{
  undefined *puVar1;
  LotteryButton *this_00;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Delegate0 aDStack_a8 [48];
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  this[0x59] = (LotteryPanel)0x0;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x330);
  LotteryButton::LotteryButton(this_00,4,(ButtonListener *)(this + 0xd8));
  *(LotteryButton **)(this + 0x138) = this_00;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8a198,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8a0f0,3);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this_00,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x138) + 0x1a0))(*(long **)(this + 0x138),this + 0x124);
  CardGameDeckButton::SetIndex(*(CardGameDeckButton **)(this + 0x138),*(int *)(this + 0xf8));
  LotteryButton::InitView(*(LotteryButton **)(this + 0x138));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLotteryResult);
  local_d0 = local_40;
  uStack_c8 = uStack_38;
  local_c0 = local_30;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<LotteryPanel,void(LotteryPanel::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GLLotteryResult,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBonusClosed);
  Sexy::Delegate0::Delegate0<LotteryPanel,void(LotteryPanel::*)()>(aDStack_a8,aPStack_78);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyBonusClosed,aDStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::InitSteps() */

void LotteryPanel::InitSteps(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  wchar16 *pwVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(in_x0 + 0xe4) = 0;
  pLVar6 = aLStack_18;
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04bbb554(*(undefined8 *)(in_x0 + 0x180),*(undefined8 *)(in_x0 + 0x188));
  pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"FakeLottery");
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar5,(wchar16 *)asStack_10,pLVar6,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if (cVar2 == '\0') {
    iVar4 = *(int *)(in_x0 + 0xfc);
  }
  else {
    iVar4 = Sexy::Rand(iVar3);
    *(int *)(in_x0 + 0xfc) = iVar4;
  }
  *(undefined4 *)(in_x0 + 0xe8) = 4;
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = 0x1e / iVar3;
  }
  iVar4 = ((iVar3 * -100 + -0x21) - (0x1e - iVar1 * iVar3)) + iVar4;
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar4 / iVar3;
  }
  iVar4 = iVar4 - iVar1 * iVar3;
  *(int *)(in_x0 + 0xf0) = iVar4 + 0x22;
  *(int *)(in_x0 + 0xec) = iVar4 + 0x3f;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryPanel::StartLottery() */

void __thiscall LotteryPanel::StartLottery(LotteryPanel *this)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  (**(code **)(**(long **)(this + 0x138) + 0x188))(*(long **)(this + 0x138),1);
  *(undefined4 *)(this + 0x100) = 0;
  this[0xe1] = (LotteryPanel)0x0;
  *(undefined4 *)(this + 0x134) = 1;
  *(undefined4 *)(this + 0x10c) = 0x40400000;
  InitSteps();
  return;
}


/* LotteryPanel::OnLotteryResult(bool) */

void __thiscall LotteryPanel::OnLotteryResult(LotteryPanel *this,bool param_1)

{
  if (!param_1) {
    (**(code **)(**(long **)(this + 0x138) + 0x188))(*(long **)(this + 0x138));
    LawnApp::ShowNetworkError(gLawnApp);
    return;
  }
  StartLottery(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::ButtonDepress(int) */

void LotteryPanel::ButtonDepress(int param_1)

{
  char cVar1;
  wchar16 *pwVar2;
  NetworkMgr *this;
  long *plVar3;
  HintUI *this_00;
  int in_w1;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_w1 == 4) {
    cVar1 = LawnApp::IsChannelWithBigDeal();
    if (cVar1 != '\0') {
      pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      pLVar4 = aLStack_18;
      std::string::string(asStack_10,"FakeLottery");
      cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar2,(wchar16 *)asStack_10,pLVar4,in_x3,in_x4);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 == '\0') {
        if (*(int *)((LotteryPanel *)(ulong)(uint)param_1 + 0xf8) < 1) {
          this_00 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
          if (this_00 != (HintUI *)0x0) {
            HintUI::Default1Init(this_00);
            FUN_05478178(asStack_10,L"[GEILIVABLE_DELIVERY_LOTTERY_OUT_TITLE]",aLStack_18);
            HintUI::SetTitleString(this_00,(wstring *)asStack_10);
            FUN_05476c50(asStack_10);
            nop();
            FUN_05478178(asStack_10,L"[GEILIVABLE_DELIVERY_LOTTERY_OUT_ANDROID]",aLStack_18);
            HintUI::SetContentString(this_00,(wstring *)asStack_10);
            FUN_05476c50(asStack_10);
            nop();
            HintUI::ShowHintUI(this_00);
          }
        }
        else {
          this = (NetworkMgr *)NetworkMgr::Instance();
          plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
          (**(code **)(*plVar3 + 0x148))();
        }
      }
      else {
        OnLotteryResult((LotteryPanel *)(ulong)(uint)param_1,true);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LotteryPanel::ButtonDepress(int) */

void __thiscall LotteryPanel::ButtonDepress(LotteryPanel *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::~LotteryPanel() */

void __thiscall LotteryPanel::~LotteryPanel(LotteryPanel *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06979308;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06978fe0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LUA_UI_DaveShop");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"LUA_UI_DaveShop");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_World_Unlock_Pack");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"UI_World_Unlock_Pack");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  std::vector<LotteryItemInfo,std::allocator<LotteryItemInfo>>::clear
            ((vector<LotteryItemInfo,std::allocator<LotteryItemInfo>> *)(this + 0x180));
  std::vector<LotteryItem*,std::allocator<LotteryItem*>>::clear
            ((vector<LotteryItem*,std::allocator<LotteryItem*>> *)(this + 0x198));
  std::vector<LotteryItem*,std::allocator<LotteryItem*>>::~vector
            ((vector<LotteryItem*,std::allocator<LotteryItem*>> *)(this + 0x198));
  std::vector<LotteryItemInfo,std::allocator<LotteryItemInfo>>::~vector
            ((vector<LotteryItemInfo,std::allocator<LotteryItemInfo>> *)(this + 0x180));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x148));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryPanel::~LotteryPanel() */

void __thiscall LotteryPanel::~LotteryPanel(LotteryPanel *this)

{
  ~LotteryPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::SelectNext() */

void __thiscall LotteryPanel::SelectNext(LotteryPanel *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  string *psVar4;
  float fVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_04bbb554(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 0x188));
  iVar1 = 0;
  if (uVar3 != 0) {
    iVar1 = (int)((ulong)(long)(*(int *)(this + 0x100) + 1) / uVar3);
  }
  *(int *)(this + 0x100) = (*(int *)(this + 0x100) + 1) - iVar1 * (int)uVar3;
  psVar4 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  std::string::string(asStack_10,"Play_Coin");
  AudioMgr::SendEventThrottled(psVar4,_FUN_04bc0e20,asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar6 = *(float *)(this + 0x10c);
  fVar5 = (float)PVZ_T();
  lVar2 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + 1;
  *(float *)(this + 0x110) = fVar5 + 1.0 / fVar6;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryPanel::TryToSelectNext() */

char __thiscall LotteryPanel::TryToSelectNext(LotteryPanel *this)

{
  char cVar1;
  
  cVar1 = CanSelectNext(this);
  if (cVar1 != '\0') {
    SelectNext(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::ShowLotteryEffect(std::string const&) */

void LotteryPanel::ShowLotteryEffect(string *param_1)

{
  undefined4 uVar1;
  LotteryItem *this;
  undefined8 uVar2;
  char *pcVar3;
  LotteryBonusUI *pLVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(param_1 + 0x178) == 0) {
    pLVar4 = ::operator_new(0x208);
    LotteryBonusUI::LotteryBonusUI(pLVar4);
    *(LotteryBonusUI **)(param_1 + 0x178) = pLVar4;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0x178));
  }
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(param_1 + 0x178));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0x178));
  if (*(long *)(param_1 + 0x178) != 0) {
    this = (LotteryItem *)GetLotteryItemByIndex((LotteryPanel *)param_1,*(int *)(param_1 + 0xfc));
    pLVar4 = *(LotteryBonusUI **)(param_1 + 0x178);
    LotteryItem::GetBonusImagePtr();
    uVar1 = LotteryItem::IsPlantPieces(this);
    LotteryItem::GetBonusName();
    LotteryItem::GetBonusDes();
    LotteryBonusUI::InitBonus(pLVar4,aRStack_20,uVar1,asStack_18,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    LotteryBonusUI::InitView(*(LotteryBonusUI **)(param_1 + 0x178));
    uVar2 = operator|(0x10,0x20);
    uVar2 = operator|(uVar2,0x1000);
    uVar1 = operator|(uVar2,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e99999a,*(undefined8 *)(param_1 + 0x178),uVar1);
    (**(code **)(**(long **)(param_1 + 0x178) + 0x310))(*(long **)(param_1 + 0x178));
  }
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_PlantLevelUp");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::ShowBonus() */

void LotteryPanel::ShowBonus(void)

{
  EffectAnim_UIAnim *this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char cVar4;
  LotteryPanel *in_x0;
  wchar16 *pwVar5;
  ProfileMgr *this_00;
  long lVar6;
  undefined4 *puVar7;
  string *psVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [12];
  int local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  string asStack_98 [48];
  undefined4 local_68;
  undefined4 local_64;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  in_x0[0xe1] = (LotteryPanel)0x1;
  local_8 = ___stack_chk_guard;
  pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  psVar8 = asStack_98;
  std::string::string((string *)&local_68,"FakeLottery");
  cVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar5,(wchar16 *)&local_68,(LineBreakCategory *)psVar8,in_x3,in_x4);
  std::string::~string((string *)&local_68);
  nop();
  if (cVar4 == '\0') {
    auVar12 = GetLotteryInfoByIndex(in_x0,*(int *)(in_x0 + 0xfc));
    local_a8 = auVar12._0_4_;
    local_ac = auVar12._4_4_;
    local_a4 = local_ac;
    local_a0 = auVar12._8_4_;
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar6 = ProfileMgr::GetCurrentProfile(this_00);
    if (lVar6 != 0) {
      PlayerInfo::AddCommonGachaReward((int)lVar6,local_ac,auVar12[8],false);
    }
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_98);
    puVar7 = (undefined4 *)
             std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        asStack_98,&local_ac);
    *puVar7 = auVar12._8_4_;
    puVar3 = gMessageRouter;
    uVar1 = *(undefined4 *)(in_x0 + 0x104);
    uVar2 = *(undefined4 *)(in_x0 + 0x108);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)&local_68,
               (map *)asStack_98);
    MessageRouter::
    Post<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
              ((MessageRouter *)puVar3,Message::GLLotteryReward,uVar1,uVar2,(string *)&local_68);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)&local_68);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)asStack_98);
  }
  this = (EffectAnim_UIAnim *)(in_x0 + 0x148);
  fVar9 = (float)GetLotteryItemPos(in_x0,*(int *)(in_x0 + 0x100));
  fVar10 = (float)GetItemW(in_x0);
  fVar11 = fVar9 + fVar10 * 0.5;
  GetLotteryItemPos(in_x0,*(int *)(in_x0 + 0x100));
  fVar10 = (float)GetItemH(in_x0);
  std::string::string(asStack_98,"POPANIM_EFFECTS_LOTTERY_RESULT_BG");
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,fVar11,fVar9 + fVar10 * 0.5);
  EffectAnim_UIAnim::InitUIAnim(0x3f800000,local_68,local_64,this,asStack_98,1);
  std::string::~string(asStack_98);
  nop();
  cVar4 = EffectAnim_UIAnim::IsValid(this);
  if (cVar4 != '\0') {
    std::string::string(asStack_98,"icon_on");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)in_x0,ShowLotteryEffect);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<LotteryPanel,void(LotteryPanel::*)(std::string_const&)>
              (aDStack_38,(string *)&local_68);
    EffectAnim_UIAnim::PlayOnceThen(this,asStack_98,aDStack_38);
    std::string::~string(asStack_98);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryPanel::UpdateSelectFrame() */

void __thiscall LotteryPanel::UpdateSelectFrame(LotteryPanel *this)

{
  int iVar1;
  char cVar2;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 == 1) {
    cVar2 = AlmostThere(this);
    if ((cVar2 != '\0') && (*(int *)(this + 0x100) == *(int *)(this + 0xfc))) {
      *(undefined4 *)(this + 0x134) = 2;
      return;
    }
    cVar2 = TryToSelectNext(this);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(this + 0xe4);
      if (*(int *)(this + 0xe8) < iVar1) {
        if (iVar1 <= *(int *)(this + 0xf0)) {
          *(undefined4 *)(this + 0x10c) = 0x41f00000;
          return;
        }
        fVar3 = *(float *)(this + 0x10c);
        if (iVar1 < *(int *)(this + 0xec)) {
          fVar3 = fVar3 - 1.0;
          *(float *)(this + 0x10c) = fVar3;
        }
      }
      else {
        fVar3 = *(float *)(this + 0x10c) + 6.0;
        *(float *)(this + 0x10c) = fVar3;
      }
      if (fVar3 <= 30.0) {
        if (fVar3 < 1.0) {
          *(undefined4 *)(this + 0x10c) = 0x3f800000;
        }
      }
      else {
        *(undefined4 *)(this + 0x10c) = 0x41f00000;
      }
    }
  }
  else {
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0x100) = 0xffffffff;
      return;
    }
    if ((iVar1 == 2) &&
       (*(undefined4 *)(this + 0x100) = *(undefined4 *)(this + 0xfc),
       this[0xe1] == (LotteryPanel)0x0)) {
      ShowBonus();
      return;
    }
  }
  return;
}


/* LotteryPanel::Update() */

void __thiscall LotteryPanel::Update(LotteryPanel *this)

{
  char cVar1;
  
  UpdateSelectFrame(this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x148));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x148));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::SetBonusList(std::vector<LotteryBonus, std::allocator<LotteryBonus> >&) */

void __thiscall LotteryPanel::SetBonusList(LotteryPanel *this,vector *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<LotteryItemInfo,std::allocator<LotteryItemInfo>>::clear
            ((vector<LotteryItemInfo,std::allocator<LotteryItemInfo>> *)(this + 0x180));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  iVar3 = 0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    local_14 = *puVar2;
    local_10 = puVar2[1];
    local_18 = iVar3;
    std::vector<LotteryItemInfo,std::allocator<LotteryItemInfo>>::push_back
              ((vector<LotteryItemInfo,std::allocator<LotteryItemInfo>> *)(this + 0x180),
               (LotteryItemInfo *)&local_18);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_28);
    iVar3 = iVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::InitLotteryItems() */

void LotteryPanel::InitLotteryItems(void)

{
  int iVar1;
  bool bVar2;
  LotteryPanel *in_x0;
  LotteryItemInfo *pLVar3;
  LotteryItem *this;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s1;
  undefined8 local_30;
  undefined8 local_28;
  LotteryItem *local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<LotteryItem*,std::allocator<LotteryItem*>>::clear
            ((vector<LotteryItem*,std::allocator<LotteryItem*>> *)(in_x0 + 0x198));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x180));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x180));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    pLVar3 = (LotteryItemInfo *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    iVar1 = *(int *)pLVar3;
    fVar5 = (float)GetLotteryItemPos(in_x0,iVar1);
    GetLotteryItemPos(in_x0,iVar1);
    iVar4 = (int)in_s1;
    fVar6 = (float)GetItemW(in_x0);
    fVar7 = (float)GetItemH(in_x0);
    Sexy::Insets::Insets(aIStack_18,(int)fVar5,iVar4,(int)fVar6,(int)fVar7);
    this = ::operator_new(0x368);
    LotteryItem::LotteryItem(this,iVar1 + 0x65);
    local_20 = this;
    (**(code **)(*(long *)this + 0x1a0))(this,aIStack_18);
    LotteryItem::SetlotteryInfo(local_20,pLVar3,*(int *)(in_x0 + 0xf4));
    std::vector<LotteryItem*,std::allocator<LotteryItem*>>::push_back
              ((vector<LotteryItem*,std::allocator<LotteryItem*>> *)(in_x0 + 0x198),&local_20);
    (**(code **)(*(long *)in_x0 + 0x60))();
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanel::Draw(Sexy::Graphics*) */

void __thiscall LotteryPanel::Draw(LotteryPanel *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x114));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a930);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

