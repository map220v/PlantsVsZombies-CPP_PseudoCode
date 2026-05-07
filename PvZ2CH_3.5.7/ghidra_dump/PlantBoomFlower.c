// Class: PlantBoomFlower


/* PlantBoomFlower::onPostLoad() */

void __thiscall PlantBoomFlower::onPostLoad(PlantBoomFlower *this)

{
  (**(code **)(*(long *)this + 0x3c8))();
  return;
}


/* PlantBoomFlower::OnFiring() */

undefined8 PlantBoomFlower::OnFiring(void)

{
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::StaticClassInit() */

void PlantBoomFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBoomFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_0411b12c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBoomFlower::StaticGetClass() */

long * PlantBoomFlower::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBoomFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBoomFlower::GetClass() const */

long * PlantBoomFlower::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBoomFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBoomFlower::shouldStopPlantfoodState() */

byte __thiscall PlantBoomFlower::shouldStopPlantfoodState(PlantBoomFlower *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if (this[0x3e] != (PlantBoomFlower)0x0) {
    bVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x30));
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::setAutoFlag() */

void __thiscall PlantBoomFlower::setAutoFlag(PlantBoomFlower *this)

{
  undefined4 uVar1;
  int iVar2;
  long extraout_x0;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x50);
  this[0x3f] = (PlantBoomFlower)0x0;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04115af4(uVar1);
  if (4 < iVar2) {
    fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    FUN_04115af8(aRStack_10,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    fVar4 = *(float *)(extraout_x0 + 0x2f4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (fVar3 < fVar4) {
      this[0x3f] = (PlantBoomFlower)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBoomFlower::OnFiredProjectile(Projectile&, PlantLauncherProps const*) */

void PlantBoomFlower::OnFiredProjectile(Projectile *param_1,PlantLauncherProps *param_2)

{
  long extraout_x0;
  
  nop();
  if (extraout_x0 != 0) {
    FUN_04115ae0((float)*(int *)(extraout_x0 + 0x2d4),param_1 + 0xd8);
    FUN_04115aec((float)*(int *)(extraout_x0 + 0x2d0),param_1 + 0x178);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::onKilled(bool) */

void PlantBoomFlower::onKilled(bool param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar1;
  long *plVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)((ulong)param_1 + 0x48);
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  if (lVar1 != 0) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    (**(code **)(*plVar2 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBoomFlower::PlantBoomFlower() */

void __thiscall PlantBoomFlower::PlantBoomFlower(PlantBoomFlower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_067e6910;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  this[0x3c] = (PlantBoomFlower)0x0;
  this[0x3d] = (PlantBoomFlower)0x0;
  this[0x3e] = (PlantBoomFlower)0x0;
  this[0x3f] = (PlantBoomFlower)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* PlantBoomFlower::StaticNew() */

PlantBoomFlower * PlantBoomFlower::StaticNew(void)

{
  PlantBoomFlower *this;
  
  this = ::operator_new(0x68);
  PlantBoomFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::firePlantfoodBalloon() */

void __thiscall PlantBoomFlower::firePlantfoodBalloon(PlantBoomFlower *this)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar2;
  undefined8 *puVar3;
  Plant *this_01;
  long lVar4;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  this_01 = *(Plant **)(this + 0x10);
  *(undefined4 *)(this_01 + 0x150) = 1;
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(this_01);
  if (cVar1 != '\0') {
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)PlantFramework::Fire
                         ((PlantFramework *)this,
                          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                          &local_18,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar4 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar4 + 0x150) = 0xffffffff;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  if (k_boardCenterForBalloonExplosion < *pfVar2) {
    puVar3 = (undefined8 *)Projectile::GetVelocity((Projectile *)this_00);
    local_18 = (float)*puVar3;
    local_10 = *(undefined4 *)(puVar3 + 1);
    _local_18 = CONCAT44((int)((ulong)*puVar3 >> 0x20),-local_18);
    Projectile::SetVelocity((Projectile *)this_00,(SexyVector3 *)&local_18);
    lVar4 = *(long *)(this + 0x10);
  }
  lVar4 = FUN_04119504(lVar4);
  if (lVar4 != 0) {
    FUN_04115ae0((float)*(int *)(lVar4 + 0x2dc),this_00 + 0xd8);
    FUN_04115aec((float)*(int *)(lVar4 + 0x2d8),this_00 + 0x178);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  this[0x3e] = (PlantBoomFlower)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBoomFlower::OnAnimCommand(std::string const&, std::string const&) */

ulong PlantBoomFlower::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    pcVar4 = *(code **)(*(long *)*(Plant **)(param_1 + 0x10) + 0x1f8);
    if (pcVar4 == Plant::IsInPlantFoodState) {
      bVar2 = Plant::IsInPlantFoodState(*(Plant **)(param_1 + 0x10));
    }
    else {
      bVar2 = (*pcVar4)();
    }
    if ((bVar2 != 0) && (param_1[0x3e] == (string)0x0)) {
      firePlantfoodBalloon((PlantBoomFlower *)param_1);
      return (ulong)bVar2;
    }
  }
  uVar3 = PlantFramework::OnAnimCommand(param_1,param_2);
  return uVar3;
}


/* PlantBoomFlower::setChargeState(BoomFlowerCharge) */

void __thiscall PlantBoomFlower::setChargeState(PlantBoomFlower *this,int param_2)

{
  int iVar1;
  UIEasyButtonWidget *this_00;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (*(int *)(this + 0x28) == param_2) {
    return;
  }
  *(int *)(this + 0x28) = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_04119504(*(undefined8 *)(this + 0x10));
    fVar4 = (float)PVZ_T();
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    fVar4 = fVar4 + *(float *)(lVar2 + 0x2e0);
    *(float *)(this + 0x2c) = fVar4;
    iVar1 = FUN_04115b1c(this_00);
    if (1 < iVar1) {
      fVar4 = fVar4 - *(float *)(lVar2 + 0x2e4);
      *(float *)(this + 0x2c) = fVar4;
      iVar1 = FUN_04115b1c(this_00);
      if (2 < iVar1) {
        *(float *)(this + 0x2c) = fVar4 - *(float *)(lVar2 + 0x2e8);
      }
    }
  }
  else {
    if (param_2 == 1) {
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0x2c) = uVar3;
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      PlantAnimRig_BoomFlower::UpdateIdleAnims();
      return;
    }
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  }
  UIEasyButtonWidget::GetImageNormal(this_00);
  nop();
  PlantAnimRig_BoomFlower::UpdateIdleAnims();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::onReloaded() */

void __thiscall PlantBoomFlower::onReloaded(PlantBoomFlower *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_CabbagePult_Throw");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (*(int *)(this + 0x28) != 1) {
    setChargeState(this,1);
  }
  this[0x3d] = (PlantBoomFlower)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBoomFlower::CancelPlantfood() */

void __thiscall PlantBoomFlower::CancelPlantfood(PlantBoomFlower *this)

{
  onReloaded(this);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* PlantBoomFlower::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantBoomFlower::onAnimStoppedCallback(PlantBoomFlower *this,string *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_05474374(param_1,"plantfood",0);
  if (lVar1 != -1) {
    if (*(int *)(this + 0x28) == 0) {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar2 + 0x118))();
    }
    else {
      setChargeState(this,0);
    }
  }
  lVar1 = FUN_05474374(param_1,"reload",0);
  if (lVar1 != -1) {
    onReloaded(this);
  }
  lVar1 = FUN_05474374(param_1,"reloadauto",0);
  if (lVar1 != -1) {
    onReloaded(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::registerForEvents() */

void __thiscall PlantBoomFlower::registerForEvents(PlantBoomFlower *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  ComponentPlantLauncher *pCVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_160;
  CBMemberTranslatorX aCStack_158 [24];
  CBMemberTranslatorX aCStack_140 [24];
  CBMemberTranslatorX aCStack_128 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_110 [24];
  Delegate0wRet<bool> aDStack_f8 [48];
  Delegate0 aDStack_c8 [48];
  Delegate0 aDStack_98 [48];
  Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*> aDStack_68 [48];
  Delegate2<Projectile&,PlantLauncherProps_const*> aDStack_38 [48];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    GameObject::Create<ComponentPlantLauncher>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_110);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_110);
  }
  pCVar2 = (ComponentPlantLauncher *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar5 = *(undefined8 *)(this + 0x10);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSelected);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<PlantBoomFlower,bool(PlantBoomFlower::*)()>
            (aDStack_f8,aCStack_158);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDeselected);
  Sexy::Delegate0::Delegate0<PlantBoomFlower,void(PlantBoomFlower::*)()>(aDStack_c8,aCStack_140);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFiring);
  Sexy::Delegate0::Delegate0<PlantBoomFlower,bool(PlantBoomFlower::*)()>(aDStack_98,aCStack_128);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAboutToFireProjectile);
  Sexy::Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*>::
  Delegate2wRet<PlantBoomFlower,bool(PlantBoomFlower::*)(Sexy::SexyVector3&,PlantLauncherProps_const*)>
            (aDStack_68,(string *)aRStack_110);
  local_160 = std::
              __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                        ((TaskResource **)OnFiredProjectile);
  Sexy::Delegate2<Projectile&,PlantLauncherProps_const*>::
  Delegate2<void(*)(Projectile&,PlantLauncherProps_const*)>
            (aDStack_38,(CBFunctionTranslatorX *)&local_160);
  ComponentPlantLauncher::RegisterOwner
            (pCVar2,uVar5,aDStack_f8,aDStack_c8,aDStack_98,aDStack_68,aDStack_38);
  psVar3 = (string *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_110,"POPANIM_EFFECTS_BOOMBALLOON_RETICLE");
  ComponentPlantLauncher::SetCursorTexture(psVar3);
  std::string::~string((string *)aRStack_110);
  nop();
  pCVar2 = (ComponentPlantLauncher *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ComponentPlantLauncher::RegisterForEvents(pCVar2);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_04115b60(lVar4 + 0x120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::getBoomFlowerProjectile(Sexy::Point&) */

void PlantBoomFlower::getBoomFlowerProjectile(Point *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar6;
  int extraout_w1;
  int extraout_w1_00;
  BoomFlowerProjectile *pBVar7;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x2b);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pBVar7 = (BoomFlowerProjectile *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_04119d84:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pBVar7);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar6);
    iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar6[1]);
    Sexy::Point::Point((Point *)aRStack_30,iVar3,iVar4);
    cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)aRStack_30,(TPoint *)param_1);
    iVar3 = extraout_w1;
    if (((this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)0x0) && (cVar1 != '\0')) &&
       (pBVar7 = Sexy::RtObject::Cast<BoomFlowerProjectile>((RtObject *)this),
       iVar3 = extraout_w1_00, pBVar7 != (BoomFlowerProjectile *)0x0)) {
      pBVar7 = Sexy::RtObject::Cast<BoomFlowerProjectile>((RtObject *)this);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_04119d84;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::Reload() */

void __thiscall PlantBoomFlower::Reload(PlantBoomFlower *this)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) == 0) {
    this[0x3d] = (PlantBoomFlower)0x1;
    setAutoFlag(this);
    if (this[0x3f] == (PlantBoomFlower)0x0) {
      pPVar1 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_68,"reload");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
    }
    else {
      pPVar1 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_68,"reloadauto");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBoomFlower::onPlantfoodEnded() */

void __thiscall PlantBoomFlower::onPlantfoodEnded(PlantBoomFlower *this)

{
  this[0x3e] = (PlantBoomFlower)0x0;
  Reload(this);
  return;
}


/* PlantBoomFlower::updateCharging() */

void __thiscall PlantBoomFlower::updateCharging(PlantBoomFlower *this)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  
  if (((*(int *)(this + 0x28) == 0) && (this[0x3d] == (PlantBoomFlower)0x0)) &&
     (fVar3 = (float)PVZ_T(), *(float *)(this + 0x2c) < fVar3)) {
    pcVar2 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
    if (pcVar2 == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
    }
    else {
      cVar1 = (*pcVar2)();
    }
    if ((cVar1 == '\0') &&
       (cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x30)),
       cVar1 != '\0')) {
      Reload(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::setState(unsigned int) */

void __thiscall PlantBoomFlower::setState(PlantBoomFlower *this,uint param_1)

{
  char cVar1;
  long lVar2;
  RtObject *this_00;
  PlantAnimRig_BoomFlower *this_01;
  long *plVar3;
  UIEasyButtonWidget *this_02;
  long lVar4;
  code *pcVar5;
  float fVar6;
  undefined4 uVar7;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_02 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if ((*(uint *)(this_02 + 200) != param_1) || (param_1 == 0xb)) {
    *(uint *)(this_02 + 200) = param_1;
    switch(param_1) {
    case 1:
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_02);
      (**(code **)(*plVar3 + 0x118))();
      break;
    case 10:
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      break;
    case 0xb:
      this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_02);
      this_01 = Sexy::RtObject::Cast<PlantAnimRig_BoomFlower>(this_00);
      lVar4 = *(long *)(this + 0x10);
      uVar7 = PVZ_T();
      lVar2 = *(long *)this;
      *(undefined4 *)(lVar4 + 0x128) = uVar7;
      cVar1 = (**(code **)(lVar2 + 0x180))(this);
      if (cVar1 == '\0') {
        std::string::string((string *)aRStack_58,"attack");
        fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_01,(string *)aRStack_58)
        ;
        *(float *)(*(long *)(this + 0x10) + 0x128) =
             *(float *)(*(long *)(this + 0x10) + 0x128) + fVar6;
        std::string::~string((string *)aRStack_58);
        nop();
        pcVar5 = *(code **)(*(long *)this_01 + 0x130);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)aRStack_58,"PlayIdleLooped");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,(string *)aRStack_58);
        (*pcVar5)(this_01,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)aRStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      else {
        std::string::string((string *)aRStack_58,"plantfood");
        fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_01,(string *)aRStack_58)
        ;
        *(float *)(*(long *)(this + 0x10) + 0x128) =
             *(float *)(*(long *)(this + 0x10) + 0x128) + fVar6;
        std::string::~string((string *)aRStack_58);
        nop();
      }
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      break;
    case 0xc:
      fVar6 = (float)PVZ_T();
      FUN_04115af8(aRStack_58,*(undefined8 *)(this + 0x10));
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      lVar2 = FUN_04115b34(*(undefined8 *)(lVar2 + 0x70),0);
      *(float *)(this_02 + 0x128) = fVar6 + *(float *)(lVar2 + 0x28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBoomFlower::Initialize() */

void __thiscall PlantBoomFlower::Initialize(PlantBoomFlower *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  setChargeState(this,1);
  setState(this,1);
  return;
}


/* PlantBoomFlower::OnSelected() */

undefined8 __thiscall PlantBoomFlower::OnSelected(PlantBoomFlower *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if ((cVar1 == '\0') && (cVar1 = BaseTask::IsDone((BaseTask *)this), cVar1 != '\0')) {
    setState(this,10);
    return 1;
  }
  return 0;
}


/* PlantBoomFlower::OnDeselected() */

void __thiscall PlantBoomFlower::OnDeselected(PlantBoomFlower *this)

{
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::OnAboutToFireProjectile(Sexy::SexyVector3&, PlantLauncherProps const*) */

void __thiscall
PlantBoomFlower::OnAboutToFireProjectile
          (PlantBoomFlower *this,SexyVector3 *param_1,PlantLauncherProps *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BoomFlowerProjectile *this_00;
  long extraout_x0;
  long extraout_x0_00;
  PopAnimRig *pPVar4;
  Projectile *this_01;
  float fVar5;
  Point aPStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)param_1);
  iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_1 + 4));
  Sexy::Point::Point(aPStack_50,iVar2,iVar3);
  this_00 = (BoomFlowerProjectile *)getBoomFlowerProjectile(aPStack_50);
  if ((this_00 == (BoomFlowerProjectile *)0x0) || (nop(), extraout_x0 == 0)) {
    this_01 = (Projectile *)ThemeBalloonProjectile::getThemeBalloonProjectile(aPStack_50);
    if ((this_01 == (Projectile *)0x0) || (2 < *(int *)(this_01 + 0x1a8))) {
      cVar1 = '\0';
      setState(this,0xb);
      if (*(int *)(this + 0x28) != 0) {
        setChargeState(this,0);
      }
      goto LAB_0411a970;
    }
    *(int *)(this_01 + 0x1a8) = *(int *)(this_01 + 0x1a8) + 1;
    nop();
    cVar1 = '\x01';
    fVar5 = (float)FUN_04115adc(*(undefined4 *)(this_01 + 0xd8));
    FUN_04115ae0(fVar5 + (float)*(int *)(extraout_x0_00 + 0x2d4),this_01 + 0xd8);
    fVar5 = (float)FUN_04115ae8(*(undefined4 *)(this_01 + 0x178));
    FUN_04115aec(fVar5 + (float)*(int *)(extraout_x0_00 + 0x2d0),this_01 + 0x178);
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig(this_01);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this_01 + 0x1a8));
    std::operator+("ANIMATION",asStack_48);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar4,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
  }
  else {
    cVar1 = BoomFlowerProjectile::AddBalloon
                      (this_00,*(int *)(extraout_x0 + 0x2d4),*(int *)(extraout_x0 + 0x2d0));
    if (cVar1 == '\0') {
      cVar1 = '\x01';
      goto LAB_0411a970;
    }
  }
  setState(this,0xb);
  setChargeState(this,0);
LAB_0411a970:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::ApplyPlantfood() */

void __thiscall PlantBoomFlower::ApplyPlantfood(PlantBoomFlower *this)

{
  long lVar1;
  RtObject *this_00;
  PlantAnimRig_BoomFlower *pPVar2;
  RealObject *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::StartPlantfoodState(*(Plant **)(this + 0x10));
  FUN_04115af8(aRStack_70,*(undefined8 *)(this + 0x10));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  lVar1 = FUN_05474184(lVar1 + 0x40);
  if (lVar1 != 0) {
    this_01 = *(RealObject **)(this + 0x10);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    RealObject::PlayPositionalSound(this_01,(string *)(lVar1 + 0x40),0.0);
  }
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_BoomFlower>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_BoomFlower::PlayPlantFoodWithCallback(pPVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBoomFlower::~PlantBoomFlower() */

void __thiscall PlantBoomFlower::~PlantBoomFlower(PlantBoomFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_067e6910;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBoomFlower::~PlantBoomFlower() */

void __thiscall PlantBoomFlower::~PlantBoomFlower(PlantBoomFlower *this)

{
  ~PlantBoomFlower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::hasTarget() */

void __thiscall PlantBoomFlower::hasTarget(PlantBoomFlower *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_30,0,0,iVar3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar5,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
        cVar1 = '\0', bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    cVar1 = BoomFlowerAutoProjectile::CanBeTarget
                      ((BoomFlowerAutoProjectile *)this,(BoardEntity *)*puVar6);
    if (cVar1 != '\0') break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoomFlower::fireAutoBalloon() */

void __thiscall PlantBoomFlower::fireAutoBalloon(PlantBoomFlower *this)

{
  char cVar1;
  float *pfVar2;
  RtObject *this_00;
  BoomFlowerAutoProjectile *this_01;
  ResourceInfo *pRVar3;
  long lVar4;
  RealObject *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_CabbagePult_Throw");
  RealObject::PlayPositionalSound(this_02,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  lVar4 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar4 + 0x150) = 2;
  FUN_04115af8(asStack_10,lVar4);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  lVar4 = FUN_04115b34(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(*(long *)(this + 0x10) + 0x150))
  ;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar4 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  p_Var5 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var5);
  fVar10 = *pfVar2;
  FUN_04115af8(asStack_10,p_Var5);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  lVar4 = FUN_04115b34(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(*(long *)(this + 0x10) + 0x150))
  ;
  fVar7 = *(float *)(lVar4 + 0x68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  p_Var5 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var5);
  fVar11 = *(float *)(lVar4 + 8);
  uVar8 = *(undefined4 *)(lVar4 + 4);
  FUN_04115af8(asStack_10,p_Var5);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  lVar4 = FUN_04115b34(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(*(long *)(this + 0x10) + 0x150))
  ;
  fVar9 = *(float *)(lVar4 + 0x6c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  this_00 = (RtObject *)
            Board::AddProjectile
                      ((Board *)(fVar10 + fVar7),uVar8,fVar11 - fVar9,uVar6,asStack_10,
                       *(undefined8 *)(this + 0x10),0);
  this_01 = Sexy::RtObject::Cast<BoomFlowerAutoProjectile>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x40));
  cVar1 = BoomFlowerAutoProjectile::CanBeTarget
                    ((BoomFlowerAutoProjectile *)this,(BoardEntity *)pRVar3);
  if (cVar1 == '\0') {
    BoomFlowerAutoProjectile::FindNewTarget(this_01);
  }
  else {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x40));
    PineconePlantfoodProjectile::SetOverrideTarget
              ((PineconePlantfoodProjectile *)this_01,(BoardEntity *)pRVar3);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBoomFlower::UpdateActions() */

void __thiscall PlantBoomFlower::UpdateActions(PlantBoomFlower *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = shouldStopPlantfoodState(this);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x228))(this);
    (**(code **)(*(long *)this + 0x3b8))(this);
  }
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    updateCharging(this);
    if (*(int *)(*(long *)(this + 0x10) + 200) == 0xb) {
      fVar2 = (float)PVZ_T();
      if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar2) {
        setState(this,0xc);
      }
    }
    else if ((*(int *)(*(long *)(this + 0x10) + 200) == 0xc) &&
            (fVar2 = (float)PVZ_T(), *(float *)(*(long *)(this + 0x10) + 0x128) < fVar2)) {
      setState(this,0xd);
    }
    if ((this[0x3f] != (PlantBoomFlower)0x0) && (*(int *)(this + 0x28) == 1)) {
      this[0x3f] = (PlantBoomFlower)0x0;
      setState(this,0xb);
      setChargeState(this,0);
      fireAutoBalloon(this);
      return;
    }
  }
  return;
}

