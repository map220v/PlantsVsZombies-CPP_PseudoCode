// Class: PVPSkillEnergyUI


/* PVPSkillEnergyUI::InitEnergy(int, int) */

void __thiscall PVPSkillEnergyUI::InitEnergy(PVPSkillEnergyUI *this,int param_1,int param_2)

{
  *(int *)(this + 0x164) = param_1;
  *(int *)(this + 0x168) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillEnergyUI::initLoadingResourcesGroupList() */

void __thiscall PVPSkillEnergyUI::initLoadingResourcesGroupList(PVPSkillEnergyUI *this)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"UI_PVP_INGAME");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"PVP_INBATTLEANIM");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillEnergyUI::StaticClassInit() */

void PVPSkillEnergyUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVPSkillEnergyUI");
    (*pcVar2)(plVar1,asStack_10,FUN_04ac5f7c,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSkillEnergyUI::StaticGetClass() */

long * PVPSkillEnergyUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVPSkillEnergyUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPSkillEnergyUI::GetClass() const */

long * PVPSkillEnergyUI::GetClass(void)

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
  (*pcVar3)(plVar1,"PVPSkillEnergyUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPSkillEnergyUI::PVPSkillEnergyUI() */

void __thiscall PVPSkillEnergyUI::PVPSkillEnergyUI(PVPSkillEnergyUI *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined ***)(this + 0x10) = &PTR__PVPSkillEnergyUI_06949270;
  *(undefined4 *)(this + 0x168) = 0x1e;
  *(undefined ***)this = &PTR_GetClass_069490d0;
  *(undefined4 *)(this + 0x174) = 5;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x178) = 0x14;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  return;
}


/* PVPSkillEnergyUI::StaticNew() */

PVPSkillEnergyUI * PVPSkillEnergyUI::StaticNew(void)

{
  PVPSkillEnergyUI *this;
  
  this = ::operator_new(0x198);
  PVPSkillEnergyUI(this);
  return this;
}


/* PVPSkillEnergyUI::registerForEvents() */

void __thiscall PVPSkillEnergyUI::registerForEvents(PVPSkillEnergyUI *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPSkillUsed);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<Zombie*,int,Sexy::CBMemberTranslatorX<PVPSkillEnergyUI,void(PVPSkillEnergyUI::*)(Zombie*,int)>>
            ((MessageRouter *)puVar1,Message::PVPSkillUsed,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLost);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PVPSkillEnergyUI,void(PVPSkillEnergyUI::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBrainLost);
  local_a0 = local_8;
  local_b0 = local_18;
  uStack_a8 = uStack_10;
  MessageRouter::
  Subscribe<GridItemBrain*,Sexy::CBMemberTranslatorX<PVPSkillEnergyUI,void(PVPSkillEnergyUI::*)(GridItemBrain*)>>
            ((MessageRouter *)puVar1,Message::BrainDie,&local_b0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillEnergyUI::SetCurEnergy(int) */

void __thiscall PVPSkillEnergyUI::SetCurEnergy(PVPSkillEnergyUI *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int local_14 [2];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = param_1;
  if (*(int *)(this + 0x164) != param_1) {
    *(undefined4 *)(this + 0x170) = 0;
    local_c = 0;
    piVar2 = eastl::max_alt<int>(&local_c,local_14);
    iVar1 = *piVar2;
    *(int *)(this + 0x164) = iVar1;
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::PVPSkillEnergyChanged,iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSkillEnergyUI::SetMaxEnergy(int) */

void __thiscall PVPSkillEnergyUI::SetMaxEnergy(PVPSkillEnergyUI *this,int param_1)

{
  if ((*(int *)(this + 0x168) != param_1) &&
     (*(int *)(this + 0x168) = param_1, param_1 < *(int *)(this + 0x164))) {
    SetCurEnergy(this,param_1);
    return;
  }
  return;
}


/* PVPSkillEnergyUI::onPVPSkillUsed(Zombie*, int) */

void __thiscall PVPSkillEnergyUI::onPVPSkillUsed(PVPSkillEnergyUI *this,Zombie *param_1,int param_2)

{
  SetCurEnergy(this,*(int *)(this + 0x164) - param_2);
  return;
}


/* PVPSkillEnergyUI::onAddEnergy(float) */

void __thiscall PVPSkillEnergyUI::onAddEnergy(PVPSkillEnergyUI *this,float param_1)

{
  SetCurEnergy(this,(int)(param_1 + (float)*(int *)(this + 0x164)));
  return;
}


/* PVPSkillEnergyUI::~PVPSkillEnergyUI() */

void __thiscall PVPSkillEnergyUI::~PVPSkillEnergyUI(PVPSkillEnergyUI *this)

{
  *(undefined ***)this = &PTR_GetClass_069490d0;
  *(undefined ***)(this + 0x10) = &PTR__PVPSkillEnergyUI_06949270;
  std::vector<Sexy::RtWeakPtr<AddEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddEnergyEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<AddEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddEnergyEffect>>>
           *)(this + 0x180));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to PVPSkillEnergyUI::~PVPSkillEnergyUI() */

void __thiscall PVPSkillEnergyUI::~PVPSkillEnergyUI(PVPSkillEnergyUI *this)

{
  ~PVPSkillEnergyUI(this + -0x10);
  return;
}


/* PVPSkillEnergyUI::~PVPSkillEnergyUI() */

void __thiscall PVPSkillEnergyUI::~PVPSkillEnergyUI(PVPSkillEnergyUI *this)

{
  ~PVPSkillEnergyUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPSkillEnergyUI::~PVPSkillEnergyUI() */

void __thiscall PVPSkillEnergyUI::~PVPSkillEnergyUI(PVPSkillEnergyUI *this)

{
  ~PVPSkillEnergyUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillEnergyUI::onUpdate() */

void __thiscall PVPSkillEnergyUI::onUpdate(PVPSkillEnergyUI *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  RtMixedPtrBase *this_01;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar5;
  uint uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar1 = *(int *)(this + 0x16c);
  iVar2 = *(int *)(this + 0x164);
  local_8 = ___stack_chk_guard;
  if (iVar1 != iVar2) {
    if ((iVar1 - iVar2) + 4U < 9) {
      *(undefined4 *)(this + 0x170) = 0;
      *(int *)(this + 0x16c) = iVar2;
LAB_04ac823c:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar6 = *(uint *)(this + 0x170);
    if (uVar6 == 0) {
      uVar6 = iVar2 - iVar1;
      if (5 < (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
        uVar6 = (int)uVar6 / 5;
      }
      *(uint *)(this + 0x170) = uVar6;
    }
    *(uint *)(this + 0x16c) = iVar1 + uVar6;
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x180);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar3) goto LAB_04ac823c;
      this_01 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar4 = Sexy::RtMixedPtrBase::IsValid(this_01);
      if (cVar4 == '\0') break;
      this_02 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02);
      if (pRVar5 != (ResourceInfo *)0x0) {
        (**(code **)(*(long *)pRVar5 + 0x80))();
      }
      FUN_04ac6b90((__normal_iterator *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::
               vector<Sexy::RtWeakPtr<AddEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddEnergyEffect>>>
               ::erase((vector<Sexy::RtWeakPtr<AddEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddEnergyEffect>>>
                        *)this_00,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillEnergyUI::PlayAddEnergyEffect(float, Sexy::SexyVector2 const&) */

void __thiscall
PVPSkillEnergyUI::PlayAddEnergyEffect(PVPSkillEnergyUI *this,float param_1,SexyVector2 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *extraout_x0;
  char *pcVar4;
  code *pcVar5;
  float fVar6;
  FastCurve aFStack_80 [8];
  FastCurve aFStack_78 [8];
  FastCurve aFStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  int local_60;
  int local_5c;
  undefined4 local_50;
  float local_4c;
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04ac5e08(10);
  iVar2 = FUN_04ac5e08(0xffffffd8);
  Sexy::FastCurve::SetOutRange(aFStack_80,(float)iVar1,(float)iVar2);
  iVar1 = FUN_04ac5e2c(0x14);
  Sexy::FastCurve::SetOutRange(aFStack_78,(float)iVar1,(float)iVar1);
  UIWidget::GetDrawRect();
  fVar6 = (float)(local_5c - *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c));
  Sexy::FastCurve::SetOutRange
            (aFStack_70,(float)(local_60 - *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48)),fVar6);
  uVar3 = AddEnergyEffect::StaticGetClass();
  GameObject::Create(uVar3,0x27);
  nop();
  pcVar5 = *(code **)(*extraout_x0 + 0x88);
  local_50 = Sexy::SexyVector2::operator+(param_2,(SexyVector2 *)aFStack_80);
  local_4c = fVar6;
  (*pcVar5)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
  pcVar5 = *(code **)(*extraout_x0 + 0x90);
  local_50 = Sexy::SexyVector2::operator+((SexyVector2 *)aFStack_70,(SexyVector2 *)aFStack_78);
  local_4c = fVar6;
  (*pcVar5)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
  (**(code **)(*extraout_x0 + 0x98))(param_1,extraout_x0);
  pcVar5 = *(code **)(*extraout_x0 + 0xa0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAddEnergy);
  Sexy::Delegate1<float>::Delegate1<PVPSkillEnergyUI,void(PVPSkillEnergyUI::*)(float)>
            (aDStack_38,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
  (*pcVar5)(extraout_x0,aDStack_38);
  (**(code **)(*extraout_x0 + 0x78))(extraout_x0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)aRStack_68);
  std::vector<Sexy::RtWeakPtr<AddEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddEnergyEffect>>>::
  push_back((vector<Sexy::RtWeakPtr<AddEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddEnergyEffect>>>
             *)(this + 0x180),(RtWeakPtr *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_PVP_Battle_Get_Energy");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillEnergyUI::onPlantLost(Plant*) */

void __thiscall PVPSkillEnergyUI::onPlantLost(PVPSkillEnergyUI *this,Plant *param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    local_10 = FUN_04ac59fc(*(undefined4 *)(param_1 + 0x18),uVar1,*(undefined4 *)(param_1 + 0x20));
    local_c = uVar1;
    local_10 = FUN_04ac5e1c();
    local_c = FUN_04ac5e1c(uVar1);
    PlayAddEnergyEffect(this,(float)*(int *)(this + 0x174),(SexyVector2 *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillEnergyUI::onBrainLost(GridItemBrain*) */

void __thiscall PVPSkillEnergyUI::onBrainLost(PVPSkillEnergyUI *this,GridItemBrain *param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  local_8 = ___stack_chk_guard;
  local_10 = FUN_04ac59fc(*(undefined4 *)(param_1 + 0x18),uVar1,*(undefined4 *)(param_1 + 0x20));
  local_c = uVar1;
  local_10 = FUN_04ac5e1c();
  local_c = FUN_04ac5e1c(uVar1);
  PlayAddEnergyEffect(this,(float)*(int *)(this + 0x178),(SexyVector2 *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillEnergyUI::Draw(Sexy::Graphics*) */

void __thiscall PVPSkillEnergyUI::Draw(PVPSkillEnergyUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  LotteryResultProgressBar *this_00;
  undefined8 uVar5;
  GraphicsAutoState aGStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  local_38 = 0;
  local_34 = 0;
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80c60);
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80c60);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar2 = FUN_04ac5e2c(5);
  Sexy::StrFormat(L"%d",auStack_40,(ulong)*(uint *)(this + 0x16c));
  iVar3 = FUN_04ac5e2c(100);
  Sexy::Insets::Insets(aIStack_28,iVar1 + iVar2,0,iVar3,local_2c);
  uVar5 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aCStack_18,5,1);
  FUN_05476c50(auStack_40);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVPSkillEnergyUI::Draw(Sexy::Graphics*) */

void __thiscall PVPSkillEnergyUI::Draw(PVPSkillEnergyUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillEnergyUI::onDestroy() */

void __thiscall PVPSkillEnergyUI::onDestroy(PVPSkillEnergyUI *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  GameObject *this_02;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x180);
  local_8 = ___stack_chk_guard;
  UIWidget::onDestroy((UIWidget *)this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_02 = (GameObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    cVar2 = GameObject::IsDestroyed(this_02);
    if (cVar2 == '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      (**(code **)(*plVar3 + 0x48))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<AddEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddEnergyEffect>>>::
  clear((vector<Sexy::RtWeakPtr<AddEnergyEffect>,std::allocator<Sexy::RtWeakPtr<AddEnergyEffect>>> *
        )this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

