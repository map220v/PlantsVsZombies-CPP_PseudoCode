// Class: ArenaStarBank


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaStarBank::StaticClassInit() */

void ArenaStarBank::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ArenaStarBank");
    (*pcVar2)(plVar1,asStack_10,FUN_04b17164,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaStarBank::StaticGetClass() */

long * ArenaStarBank::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaStarBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArenaStarBank::GetClass() const */

long * ArenaStarBank::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaStarBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaStarBank::onUpdate() */

void __thiscall ArenaStarBank::onUpdate(ArenaStarBank *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x168));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x168));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    StandaloneEffect::Update((StandaloneEffect *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaStarBank::onStarEffectFinish(std::string const&) */

void ArenaStarBank::onStarEffectFinish(string *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  PopAnimRig *this;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x168));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x168));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)*puVar2);
    PopAnimRig::IsPlayingAnything(this);
    FUN_04b17244((exception_ptr *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaStarBank::ArenaStarBank() */

void __thiscall ArenaStarBank::ArenaStarBank(ArenaStarBank *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06954570;
  *(undefined ***)(this + 0x10) = &PTR__ArenaStarBank_06954710;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  *(undefined4 *)(this + 0x164) = 0;
  return;
}


/* ArenaStarBank::StaticNew() */

ArenaStarBank * ArenaStarBank::StaticNew(void)

{
  ArenaStarBank *this;
  
  this = ::operator_new(0x180);
  ArenaStarBank(this);
  return this;
}


/* ArenaStarBank::registerForEvents() */

void __thiscall ArenaStarBank::registerForEvents(ArenaStarBank *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyLostBrain);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<ArenaStarBank,void(ArenaStarBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyLostBrain,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaStarBank::CalcStarPos(int) */

void __thiscall ArenaStarBank::CalcStarPos(ArenaStarBank *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  int local_28;
  int local_24;
  FastCurve local_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04b1701c(0x14);
  iVar2 = FUN_04b1701c(0x15);
  Sexy::Point::Point((Point *)&local_28,iVar1,iVar2);
  UIWidget::GetDrawRect();
  local_18 = 0;
  local_14 = 0;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83ad0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar1 = FUN_04b1701c(10);
  iVar2 = local_14;
  iVar1 = local_18 + (local_10 - (iVar3 * 3 + iVar1 * 2)) / 2;
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83ad0);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar5 = FUN_04b1701c(10);
  Sexy::FastCurve::SetOutRange
            (local_20,(float)(iVar1 + (iVar5 + iVar3) * param_1 + local_28),
             (float)(iVar2 + (local_c - iVar4) / 2 + local_24));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_20._0_4_,local_20._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaStarBank::CreateStarEffect(Sexy::SexyVector2 const&) */

void __thiscall ArenaStarBank::CreateStarEffect(ArenaStarBank *this,SexyVector2 *param_1)

{
  int iVar1;
  Effect_PopAnim *this_00;
  long lVar2;
  ResourceInfo *pRVar3;
  PopAnimRig *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  iVar1 = *(int *)(gLawnApp + 0xd8);
  local_8 = ___stack_chk_guard;
  this_00 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  std::string::string(asStack_50,"POPANIM_UI_PVP_INBATTLEANIM_STAR");
  GetPAMByName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  *(float *)(lVar2 + 0x28) = (float)iVar1 * 0.0006510417 * 0.8;
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,param_1,900000);
  Effect_PopAnim::SetCentered(this_00,true);
  pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  std::string::string(asStack_58,"idle");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStarEffectFinish);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ArenaStarBank,void(ArenaStarBank::*)(std::string_const&)>(aDStack_38,asStack_50);
  PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaStarBank::~ArenaStarBank() */

void __thiscall ArenaStarBank::~ArenaStarBank(ArenaStarBank *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06954570;
  *(undefined ***)(this + 0x10) = &PTR__ArenaStarBank_06954710;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::clear
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)this_00);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::~vector
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)this_00);
  UIWidget::~UIWidget((UIWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArenaStarBank::~ArenaStarBank() */

void __thiscall ArenaStarBank::~ArenaStarBank(ArenaStarBank *this)

{
  ~ArenaStarBank(this + -0x10);
  return;
}


/* ArenaStarBank::~ArenaStarBank() */

void __thiscall ArenaStarBank::~ArenaStarBank(ArenaStarBank *this)

{
  ~ArenaStarBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArenaStarBank::~ArenaStarBank() */

void __thiscall ArenaStarBank::~ArenaStarBank(ArenaStarBank *this)

{
  ~ArenaStarBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaStarBank::PlayStarEffect(int) */

void ArenaStarBank::PlayStarEffect(int param_1)

{
  ArenaStarBank *this;
  char *pcVar1;
  int in_w1;
  undefined4 local_18 [2];
  Effect_PopAnim *local_10;
  long local_8;
  
  this = (ArenaStarBank *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  local_18[0] = CalcStarPos(this,in_w1);
  local_10 = (Effect_PopAnim *)CreateStarEffect(this,(SexyVector2 *)local_18);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x168),&local_10);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_PVP_Battle_Get_Star");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaStarBank::onNotifyLostBrain(int) */

void __thiscall ArenaStarBank::onNotifyLostBrain(ArenaStarBank *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x164);
  switch(param_1) {
  case 0:
    iVar2 = 3;
    *(undefined4 *)(this + 0x164) = 3;
    break;
  case 1:
  case 2:
    iVar2 = 2;
    *(undefined4 *)(this + 0x164) = 2;
    break;
  case 3:
  case 4:
    iVar2 = 1;
    *(undefined4 *)(this + 0x164) = 1;
    break;
  case 5:
    *(undefined4 *)(this + 0x164) = 0;
    iVar2 = 0;
    break;
  default:
    goto switchD_04b17a2c_default;
  }
  if (iVar1 < iVar2) {
    PlayStarEffect((int)this);
    return;
  }
switchD_04b17a2c_default:
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaStarBank::Draw(Sexy::Graphics*) */

void __thiscall ArenaStarBank::Draw(ArenaStarBank *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  Image *pIVar7;
  Image *pIVar8;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined8 *puVar9;
  GraphicsAutoState aGStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  local_18 = 0;
  local_14 = 0;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83ad0);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83ad0);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83ad0);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83ad0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_04b1701c(10);
  iVar3 = (local_10 - (iVar2 * 3 + iVar3 * 2)) / 2;
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83ad0);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar4 = (local_c - iVar4) / 2;
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar3,iVar4);
  iVar5 = FUN_04b1701c(10);
  iVar3 = iVar3 + iVar5 + iVar2;
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar3,iVar4);
  iVar5 = FUN_04b1701c(10);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar3 + iVar5 + iVar2,iVar4);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x168));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x168));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    StandaloneEffect::Draw((StandaloneEffect *)*puVar9,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArenaStarBank::Draw(Sexy::Graphics*) */

void __thiscall ArenaStarBank::Draw(ArenaStarBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

