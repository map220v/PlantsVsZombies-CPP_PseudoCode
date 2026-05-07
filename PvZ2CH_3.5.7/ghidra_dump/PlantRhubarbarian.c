// Class: PlantRhubarbarian


/* PlantRhubarbarian::OnBarbarianDestroy(Plant*) */

void __thiscall PlantRhubarbarian::OnBarbarianDestroy(PlantRhubarbarian *this,Plant *param_1)

{
  Plant *pPVar1;
  long lVar2;
  
  pPVar1 = *(Plant **)(this + 0x10);
  if (pPVar1 != param_1) {
    return;
  }
  lVar2 = *(long *)pPVar1;
  this[0x30] = (PlantRhubarbarian)0x0;
  (**(code **)(lVar2 + 0x48))(pPVar1);
  return;
}


/* PlantRhubarbarian::OnBarbarianPlantfoodEnd(Plant*) */

void __thiscall PlantRhubarbarian::OnBarbarianPlantfoodEnd(PlantRhubarbarian *this,Plant *param_1)

{
  if (*(Plant **)(this + 0x10) != param_1) {
    return;
  }
  (**(code **)(*(long *)this + 0x228))();
  return;
}


/* PlantRhubarbarian::Draw(Sexy::Graphics*) */

void PlantRhubarbarian::Draw(Graphics *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (((cVar1 == '\0') && (*(int *)(*(long *)(param_1 + 0x10) + 200) != 10)) &&
     (param_1[0x31] == (Graphics)0x0)) {
    return;
  }
  PlantFramework::Draw(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRhubarbarian::StaticClassInit() */

void PlantRhubarbarian::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantRhubarbarian");
    (*pcVar2)(plVar1,asStack_10,FUN_03fb7528,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRhubarbarian::StaticGetClass() */

long * PlantRhubarbarian::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantRhubarbarian",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRhubarbarian::GetClass() const */

long * PlantRhubarbarian::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantRhubarbarian",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRhubarbarian::onDestroy() */

void __thiscall PlantRhubarbarian::onDestroy(PlantRhubarbarian *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long lVar2;
  long *plVar3;
  
  this_00 = (RtMixedPtrBase *)(this + 0x28);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if ((cVar1 != '\0') && (this[0x30] != (PlantRhubarbarian)0x0)) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    FUN_03fb6a6c(lVar2 + 0x105);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
  }
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* PlantRhubarbarian::CanApplyPlantfood() */

undefined1 __thiscall PlantRhubarbarian::CanApplyPlantfood(PlantRhubarbarian *this)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  uVar2 = 0;
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    uVar2 = (**(code **)(*plVar3 + 0x1e0))();
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRhubarbarian::GetCalcCollisionRect(Sexy::TRect<int>&) */

void __thiscall PlantRhubarbarian::GetCalcCollisionRect(PlantRhubarbarian *this,TRect *param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    (**(code **)(*plVar2 + 0xb0))(&local_18);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantRhubarbarian::OnSetPosition(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&) */

void PlantRhubarbarian::OnSetPosition(SexyVector3 *param_1,SexyVector3 *param_2)

{
  char cVar1;
  SexyVector3 *pSVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x28));
  if ((cVar1 != '\0') && (*(int *)(*(long *)(param_1 + 0x10) + 200) == 3)) {
    pSVar2 = (SexyVector3 *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    Barbarian::OnSetPosition(pSVar2,param_2);
    return;
  }
  return;
}


/* PlantRhubarbarian::OnupdateSpeed(float) */

void __thiscall PlantRhubarbarian::OnupdateSpeed(PlantRhubarbarian *this,float param_1)

{
  char cVar1;
  Barbarian *this_00;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (Barbarian *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  Barbarian::OnupdateSpeed(this_00,param_1);
  return;
}


/* PlantRhubarbarian::onSleeped(bool) */

void __thiscall PlantRhubarbarian::onSleeped(PlantRhubarbarian *this,bool param_1)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    (**(code **)(*plVar2 + 0x1d8))(plVar2,param_1);
  }
  return;
}


/* PlantRhubarbarian::CanBeWatered() */

undefined1 __thiscall PlantRhubarbarian::CanBeWatered(PlantRhubarbarian *this)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  uVar2 = 1;
  if (cVar1 != '\0') {
    cVar1 = PlantFramework::CanBeWatered((PlantFramework *)this);
    uVar2 = 0;
    if (cVar1 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      uVar2 = (**(code **)(*plVar3 + 0x1e8))();
      return uVar2;
    }
  }
  return uVar2;
}


/* PlantRhubarbarian::onWatered(bool) */

void __thiscall PlantRhubarbarian::onWatered(PlantRhubarbarian *this,bool param_1)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    (**(code **)(*plVar2 + 0x1f0))(plVar2,param_1);
  }
  return;
}


/* PlantRhubarbarian::CanBeTargeted() */

undefined1 __thiscall PlantRhubarbarian::CanBeTargeted(PlantRhubarbarian *this)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  uVar2 = 1;
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    uVar2 = (**(code **)(*plVar3 + 0x1f8))();
  }
  return uVar2;
}


/* PlantRhubarbarian::IsInvincible() */

undefined1 __thiscall PlantRhubarbarian::IsInvincible(PlantRhubarbarian *this)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  uVar2 = 0;
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    uVar2 = (**(code **)(*plVar3 + 0x200))();
  }
  return uVar2;
}


/* PlantRhubarbarian::UpdateAnimRig() */

void __thiscall PlantRhubarbarian::UpdateAnimRig(PlantRhubarbarian *this)

{
  char cVar1;
  Barbarian *this_00;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (Barbarian *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  Barbarian::UpdateAnimRig(this_00);
  return;
}


/* PlantRhubarbarian::OnRelocating(Sexy::SexyVector2) */

void PlantRhubarbarian::OnRelocating(long param_1)

{
  char cVar1;
  Barbarian *this;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x28));
  if (cVar1 == '\0') {
    return;
  }
  this = (Barbarian *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28))
  ;
  Barbarian::OnRelocating(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRhubarbarian::PlayLoopAnim(std::string) */

void __thiscall PlantRhubarbarian::PlayLoopAnim(PlantRhubarbarian *this,undefined8 param_2)

{
  PopAnimRig *pPVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  __s = (char *)FUN_0547429c(param_2);
  std::string::string(asStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRhubarbarian::OnRelocationBegun() */

void __thiscall PlantRhubarbarian::OnRelocationBegun(PlantRhubarbarian *this)

{
  char cVar1;
  PlantRhubarbarian PVar2;
  Barbarian *this_00;
  PopAnimRig *pPVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar1 != '\0') {
    this_00 = (Barbarian *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    PVar2 = (PlantRhubarbarian)Barbarian::OnRelocationBegun(this_00);
    this[0x31] = PVar2;
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRhubarbarian::PlantRhubarbarian() */

void __thiscall PlantRhubarbarian::PlantRhubarbarian(PlantRhubarbarian *this)

{
  undefined *puVar1;
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
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067a86b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBarbarianDestroy);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantRhubarbarian,void(PlantRhubarbarian::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::BarbarianDestroy,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBarbarianPlantfoodEnd);
  local_70 = local_30;
  uStack_68 = uStack_28;
  local_60 = local_20;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantRhubarbarian,void(PlantRhubarbarian::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::BarbarianPlantfoodEnd,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantMoving);
  local_80 = local_8;
  local_90 = local_18;
  uStack_88 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::Point&,Sexy::CBMemberTranslatorX<PlantRhubarbarian,void(PlantRhubarbarian::*)(Plant*,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PlantMoving,&local_90);
  return;
}


/* PlantRhubarbarian::StaticNew() */

PlantRhubarbarian * PlantRhubarbarian::StaticNew(void)

{
  PlantRhubarbarian *this;
  
  this = ::operator_new(0x38);
  PlantRhubarbarian(this);
  return this;
}


/* PlantRhubarbarian::~PlantRhubarbarian() */

void __thiscall PlantRhubarbarian::~PlantRhubarbarian(PlantRhubarbarian *this)

{
  undefined *puVar1;
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
  
  *(undefined ***)this = &PTR_GetClass_067a86b0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBarbarianDestroy);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Unsubscribe<Plant*,Sexy::CBMemberTranslatorX<PlantRhubarbarian,void(PlantRhubarbarian::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::BarbarianDestroy,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBarbarianPlantfoodEnd);
  local_70 = local_30;
  uStack_68 = uStack_28;
  local_60 = local_20;
  MessageRouter::
  Unsubscribe<Plant*,Sexy::CBMemberTranslatorX<PlantRhubarbarian,void(PlantRhubarbarian::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::BarbarianPlantfoodEnd,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantMoving);
  local_80 = local_8;
  local_90 = local_18;
  uStack_88 = uStack_10;
  MessageRouter::
  Unsubscribe<Plant*,Sexy::Point&,Sexy::CBMemberTranslatorX<PlantRhubarbarian,void(PlantRhubarbarian::*)(Plant*,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PlantMoving,&local_90);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantRhubarbarian::~PlantRhubarbarian() */

void __thiscall PlantRhubarbarian::~PlantRhubarbarian(PlantRhubarbarian *this)

{
  ~PlantRhubarbarian(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRhubarbarian::CreateBoard() */

void __thiscall PlantRhubarbarian::CreateBoard(PlantRhubarbarian *this)

{
  Barbarian *this_00;
  undefined8 uVar1;
  RtObject *pRVar2;
  PlantRhubarbarianProps *pPVar3;
  PlantAnimRig_Rhubarbarian *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = GameObject::Create<Barbarian>();
  if (this_00 != (Barbarian *)0x0) {
    Plant::GetType();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Barbarian::BarbarianInitialize(this_00,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    uVar1 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
    (**(code **)(*(long *)this_00 + 0x78))(this_00,uVar1);
    FUN_03fb6a48(aRStack_10,*(undefined8 *)(this + 0x10));
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pPVar3 = Sexy::RtObject::Cast<PlantRhubarbarianProps>(pRVar2);
    Barbarian::SetPropertysheets(this_00,pPVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_Rhubarbarian>(pRVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x28));
    PlantAnimRig_DevilsFlower::SetPlantPtr((PlantAnimRig_DevilsFlower *)pPVar4,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRhubarbarian::Initialize() */

void __thiscall PlantRhubarbarian::Initialize(PlantRhubarbarian *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  Plant *this_00;
  Barbarian *this_01;
  UIEasyButtonWidget *this_02;
  long lVar3;
  float fVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x28));
  CreateBoard(this);
  PlantFramework::Initialize((PlantFramework *)this);
  this_02 = *(UIEasyButtonWidget **)(this + 0x10);
  this[0x30] = (PlantRhubarbarian)0x1;
  *(undefined4 *)(this_02 + 200) = 10;
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_02);
  std::string::string(asStack_40,"plantfood_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar3 = *(long *)(this + 0x10);
  fVar4 = (float)PVZ_T();
  this_00 = *(Plant **)(this + 0x10);
  *(float *)(lVar3 + 0x128) = fVar4 + 1.0;
  this[0x31] = (PlantRhubarbarian)0x0;
  cVar1 = Plant::GetAvatarEnable(this_00);
  if (cVar1 != '\0') {
    this_01 = (Barbarian *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    Barbarian::SetAvatars(this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRhubarbarian::UpdateActions() */

void __thiscall PlantRhubarbarian::UpdateActions(PlantRhubarbarian *this)

{
  int iVar1;
  char cVar2;
  Barbarian *this_00;
  float fVar3;
  
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
  }
  else {
    this_00 = (Barbarian *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    Barbarian::OnUpdate(this_00);
    iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
  }
  if (iVar1 == 10) {
    fVar3 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) <= fVar3) {
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRhubarbarian::ApplyPlantfood() */

void __thiscall PlantRhubarbarian::ApplyPlantfood(PlantRhubarbarian *this)

{
  char cVar1;
  Barbarian *this_00;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar1 != '\0') {
    this_00 = (Barbarian *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    Barbarian::ApplyPlantfood(this_00);
  }
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_40,"plantfood_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRhubarbarian::onEndCondition(PlantConditions) */

void __thiscall PlantRhubarbarian::onEndCondition(PlantRhubarbarian *this,undefined8 param_2)

{
  char cVar1;
  Barbarian *pBVar2;
  PopAnimRig *pPVar3;
  uint uVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  uVar4 = (uint)param_2;
  local_8 = ___stack_chk_guard;
  if ((((uVar4 == 0x1d) || (uVar4 == 6)) || (uVar4 - 1 < 2)) ||
     (((uVar4 & 0xfffffff7) == 0x11 || (uVar4 == 0xf)))) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
    if (cVar1 != '\0') {
      pBVar2 = (Barbarian *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      Barbarian::onEndCondition(pBVar2,param_2);
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_40,"plantfood_loop");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      this[0x31] = (PlantRhubarbarian)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRhubarbarian::onApplyCondition(PlantConditions) */

void __thiscall PlantRhubarbarian::onApplyCondition(PlantRhubarbarian *this,undefined8 param_2)

{
  char cVar1;
  PlantRhubarbarian PVar2;
  Barbarian *pBVar3;
  PopAnimRig *pPVar4;
  uint uVar5;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  uVar5 = (uint)param_2;
  local_8 = ___stack_chk_guard;
  if ((((uVar5 == 0x1d) || (uVar5 == 6)) || (uVar5 - 1 < 2)) ||
     (((uVar5 & 0xfffffff7) == 0x11 || (uVar5 == 0xf)))) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
    if (cVar1 != '\0') {
      pBVar3 = (Barbarian *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      PVar2 = (PlantRhubarbarian)Barbarian::onApplyCondition(pBVar3,param_2);
      this[0x31] = PVar2;
      if (PVar2 != (PlantRhubarbarian)0x0) {
        pPVar4 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        std::string::string(asStack_40,"idle");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar4,asStack_40,0,aDStack_38);
        std::string::~string(asStack_40);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRhubarbarian::OnPlantMoving(Plant*, Sexy::Point&) */

void __thiscall
PlantRhubarbarian::OnPlantMoving(PlantRhubarbarian *this,Plant *param_1,Point *param_2)

{
  char cVar1;
  Barbarian *this_00;
  
  if (*(Plant **)(this + 0x10) == param_1) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
    if (cVar1 != '\0') {
      this_00 = (Barbarian *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      Barbarian::OnPlantMoving(this_00,param_2);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRhubarbarian::OnRelocationComplete() */

void __thiscall PlantRhubarbarian::OnRelocationComplete(PlantRhubarbarian *this)

{
  char cVar1;
  Barbarian *this_00;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar1 != '\0') {
    this_00 = (Barbarian *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    Barbarian::OnRelocationComplete(this_00);
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_40,"plantfood_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    this[0x31] = (PlantRhubarbarian)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

