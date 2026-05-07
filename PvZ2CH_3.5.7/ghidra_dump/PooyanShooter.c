// Class: PooyanShooter


/* PooyanShooter::SetDead(bool) */

void __thiscall PooyanShooter::SetDead(PooyanShooter *this,bool param_1)

{
  this[0xa2] = (PooyanShooter)param_1;
  FUN_04779c08(this + 0xa1,!param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooter::StaticClassInit() */

void PooyanShooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PooyanShooter");
    (*pcVar2)(plVar1,asStack_10,FUN_0477aa04,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanShooter::StaticGetClass() */

long * PooyanShooter::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"PooyanShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PooyanShooter::GetClass() const */

long * PooyanShooter::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"PooyanShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PooyanShooter::canMove() */

byte __thiscall PooyanShooter::canMove(PooyanShooter *this)

{
  return (byte)this[0xa3] ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooter::MoveShooterTo(Sexy::SexyVector3) */

void PooyanShooter::MoveShooterTo(float param_1,float param_2,float param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  float local_30;
  float local_2c;
  float local_28;
  Vec3 aVStack_18 [16];
  long local_8;
  
  plVar2 = (long *)param_4[0x18];
  local_8 = ___stack_chk_guard;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = FUN_04779c00(*(undefined1 *)((long)plVar2 + 0x299)), iVar1 == 0)) {
    (**(code **)(*plVar2 + 0x78))(plVar2,&local_30);
    pcVar3 = *(code **)(*param_4 + 0x78);
    EATextSquish::Vec3::Vec3(aVStack_18,local_30 + 20.0,local_2c + 27.0,local_28);
    (*pcVar3)(param_4,aVStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanShooter::GetPlantPtr() */

undefined8 __thiscall PooyanShooter::GetPlantPtr(PooyanShooter *this)

{
  return *(undefined8 *)(this + 0xc0);
}


/* PooyanShooter::DeleteCurrentPlant() */

void __thiscall PooyanShooter::DeleteCurrentPlant(PooyanShooter *this)

{
  Plant *pPVar1;
  
  pPVar1 = (Plant *)GetPlantPtr(this);
  if (pPVar1 != (Plant *)0x0) {
    Plant::KillPlant(pPVar1,0,0,1);
  }
  *(undefined8 *)(this + 0xc0) = 0;
  return;
}


/* PooyanShooter::GetPooyanShooterRect() */

void PooyanShooter::GetPooyanShooterRect(void)

{
  long in_x0;
  long *plVar1;
  Insets *in_x8;
  
  plVar1 = *(long **)(in_x0 + 0xc0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xb0))(plVar1);
    return;
  }
  Sexy::Insets::Insets(in_x8,0,0,0,0);
  return;
}


/* PooyanShooter::~PooyanShooter() */

void __thiscall PooyanShooter::~PooyanShooter(PooyanShooter *this)

{
  *(undefined ***)this = &PTR_GetClass_068d7f90;
  *(undefined ***)(this + 0x10) = &PTR__PooyanShooter_068d8178;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to PooyanShooter::~PooyanShooter() */

void __thiscall PooyanShooter::~PooyanShooter(PooyanShooter *this)

{
  ~PooyanShooter(this + -0x10);
  return;
}


/* PooyanShooter::~PooyanShooter() */

void __thiscall PooyanShooter::~PooyanShooter(PooyanShooter *this)

{
  ~PooyanShooter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PooyanShooter::~PooyanShooter() */

void __thiscall PooyanShooter::~PooyanShooter(PooyanShooter *this)

{
  ~PooyanShooter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooter::PooyanShooter() */

void __thiscall PooyanShooter::PooyanShooter(PooyanShooter *this)

{
  long lVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_068d7f90;
  *(undefined ***)(this + 0x10) = &PTR__PooyanShooter_068d8178;
  DVec3::DVec3((DVec3 *)(this + 0xa4));
  DVec3::DVec3((DVec3 *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  this[0xa1] = (PooyanShooter)0x0;
  *(undefined8 *)(this + 0xc0) = 0;
  this[0xa2] = (PooyanShooter)0x0;
  this[0xa3] = (PooyanShooter)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  uVar2 = PVZ_EOT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xcc) = uVar2;
  *(undefined4 *)(this + 200) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanShooter::StaticNew() */

PooyanShooter * PooyanShooter::StaticNew(void)

{
  PooyanShooter *this;
  
  this = ::operator_new(0xe0);
  PooyanShooter(this);
  return this;
}


/* PooyanShooter::onDestroy() */

void __thiscall PooyanShooter::onDestroy(PooyanShooter *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    (**(code **)(*plVar2 + 0x48))();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooter::onDrawSpaceShip(Sexy::Graphics*) */

void __thiscall PooyanShooter::onDrawSpaceShip(PooyanShooter *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04779c10(this[0xa1]);
  if (cVar1 != '\0') {
    uVar6 = (ulong)*(uint *)(this + 0x1c);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0);
    fVar5 = (float)FUN_04779c20(*(undefined4 *)(this + 0x18),uVar6,*(undefined4 *)(this + 0x20));
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar7 = *(float *)(param_1 + 0x20);
    fVar5 = (float)FUN_04779d70(fVar5 + 20.0);
    fVar8 = *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x10) + fVar7 +
         (float)(int)((fVar5 - fVar7) * *(float *)(param_1 + 0x18));
    fVar5 = (float)FUN_04779d70(uVar6 & 0xffffffff);
    *(float *)(param_1 + 0x14) =
         *(float *)(param_1 + 0x14) + fVar8 +
         (float)(int)((fVar5 - fVar8) * *(float *)(param_1 + 0x1c));
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::SetRenderTransform(pPVar4,aSStack_30);
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::ClearMultiplicativeOverlayColor(pPVar4);
    iVar2 = FUN_04779d5c(0x76);
    iVar3 = FUN_04779d5c(0x73);
    Sexy::Graphics::Translate(param_1,-iVar2,-iVar3);
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::Draw(pPVar4,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooter::onDrawCore(Sexy::Graphics*) */

void __thiscall PooyanShooter::onDrawCore(PooyanShooter *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04779c10(this[0xa1]);
  if (cVar1 != '\0') {
    uVar6 = (ulong)*(uint *)(this + 0x1c);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8);
    fVar5 = (float)FUN_04779c20(*(undefined4 *)(this + 0x18),uVar6,*(undefined4 *)(this + 0x20));
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar7 = *(float *)(param_1 + 0x20);
    fVar5 = (float)FUN_04779d70(fVar5 + 20.0);
    fVar8 = *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x10) + fVar7 +
         (float)(int)((fVar5 - fVar7) * *(float *)(param_1 + 0x18));
    fVar5 = (float)FUN_04779d70(uVar6 & 0xffffffff);
    *(float *)(param_1 + 0x14) =
         *(float *)(param_1 + 0x14) + fVar8 +
         (float)(int)((fVar5 - fVar8) * *(float *)(param_1 + 0x1c));
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::SetRenderTransform(pPVar4,aSStack_30);
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::ClearMultiplicativeOverlayColor(pPVar4);
    iVar2 = FUN_04779d5c(0x8a);
    iVar3 = FUN_04779d5c(0x82);
    Sexy::Graphics::Translate(param_1,-iVar2,-iVar3);
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::Draw(pPVar4,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooter::PooyanShooterInitialize(Sexy::PopAnim*, Sexy::PopAnim*, Plant*, bool) */

void __thiscall
PooyanShooter::PooyanShooterInitialize
          (PooyanShooter *this,PopAnim *param_1,PopAnim *param_2,Plant *param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  long *plVar5;
  float *pfVar6;
  code *pcVar7;
  undefined4 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PopAnim *)0x0) {
    pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
    PopAnimRig::CreateRig(param_1,pRVar3);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd0),(RtWeakPtrBase *)aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    std::string::string((string *)aRStack_48,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar4,aRStack_48,0,aDStack_38);
    std::string::~string((string *)aRStack_48);
    nop();
  }
  if (param_2 != (PopAnim *)0x0) {
    pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
    PopAnimRig::CreateRig(param_2,pRVar3);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd8),(RtWeakPtrBase *)aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
    std::string::string((string *)aRStack_48,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar4,aRStack_48,0,aDStack_38);
    std::string::~string((string *)aRStack_48);
    nop();
  }
  if (param_3 != (Plant *)0x0) {
    *(Plant **)(this + 0xc0) = param_3;
    param_3[0x158] = (Plant)0x0;
    param_3[0x118] = (Plant)0x1;
    plVar5 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_3);
    (**(code **)(*plVar5 + 0x80))(0x40800000);
  }
  if (param_4) {
    this[0xa3] = (PooyanShooter)0x1;
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    *(float *)(this + 0xa4) = (float)-iVar1;
    iVar1 = BoardTransforms::GridToBoardSpaceY(2);
    *(float *)(this + 0xa8) = (float)iVar1;
    DVec3::DVec3((DVec3 *)aRStack_48);
    iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(0);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    *(undefined4 *)(this + 0xb4) = *(undefined4 *)(this + 0xa8);
    *(float *)(this + 0xb0) = (float)(iVar1 - iVar2);
    MoveShooterTo(*(undefined4 *)(this + 0xa4),*(undefined4 *)(this + 0xa8),
                  *(undefined4 *)(this + 0xac),this);
    uVar8 = PVZ_T();
    *(undefined4 *)(this + 200) = uVar8;
  }
  else {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0xc0));
    pcVar7 = *(code **)(*(long *)this + 0x78);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_48,*pfVar6 + 20.0,pfVar6[1] + 27.0,pfVar6[2]);
    (*pcVar7)(this,aRStack_48);
  }
  SetDead(this,false);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooter::addToRenderQueue(RenderQueue*) */

void __thiscall PooyanShooter::addToRenderQueue(PooyanShooter *this,RenderQueue *param_1)

{
  int iVar1;
  long *plVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)GetPlantPtr(this);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x170))();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDrawSpaceShip);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<PooyanShooter,void(PooyanShooter::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,iVar1 + -1,aDStack_38);
    iVar1 = (**(code **)(*plVar2 + 0x170))(plVar2);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDrawCore);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<PooyanShooter,void(PooyanShooter::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,iVar1 + 1,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooter::calcCloseAttack() */

void __thiscall PooyanShooter::calcCloseAttack(PooyanShooter *this)

{
  char cVar1;
  bool bVar2;
  Plant *this_00;
  vector *pvVar3;
  undefined8 *puVar4;
  Insets *pIVar5;
  code *pcVar6;
  RtObject *this_01;
  undefined4 uVar7;
  undefined8 local_b8;
  Point aPStack_b0 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  vector<Zombie*,std::allocator<Zombie*>> avStack_80 [24];
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Plant *)GetPlantPtr(this);
  if ((this_00 != (Plant *)0x0) && (cVar1 = Plant::IsInvincible(this_00,false), cVar1 == '\0')) {
    GetPooyanShooterRect();
    pvVar3 = (vector *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
    std::vector<Zombie*,std::allocator<Zombie*>>::vector(avStack_80,pvVar3);
    local_b8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    while( true ) {
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_80);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)local_68);
      if (!bVar2) break;
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8)
      ;
      this_01 = (RtObject *)*puVar4;
      pIVar5 = (Insets *)(**(code **)(*(long *)this_01 + 0x178))(this_01);
      Sexy::Insets::Insets((Insets *)&local_90,pIVar5);
      bVar2 = Sexy::RtObject::IsA<ZombieSkyCityGargantuar>(this_01);
      if (bVar2) break;
      if ((ABS((float)(local_a0 + local_98 / 2) - (float)(local_90 + local_88 / 2)) <=
           ABS((float)(local_98 + local_88) * 0.5)) &&
         (ABS((float)(local_9c + local_94 / 2) - (float)(local_8c + local_84 / 2)) <=
          ABS((float)(local_94 + local_84) * 0.5))) {
        pcVar6 = *(code **)(*(long *)this_00 + 0x110);
        Sexy::Point::Point(aPStack_b0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_a8,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x42480000,local_a8,local_a4,(DamageInfo *)local_68,aPStack_b0,0);
        (*pcVar6)(this_00,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
        MessageRouter::Post((_func_void *)gMessageRouter);
        uVar7 = PVZ_T();
        *(undefined4 *)(this + 0xcc) = uVar7;
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
    }
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooter::onUpdate() */

void __thiscall PooyanShooter::onUpdate(PooyanShooter *this)

{
  bool bVar1;
  LevelModuleManager *this_00;
  PooyanModule *this_01;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd0));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
  }
  fVar3 = *(float *)(this + 0xcc);
  fVar4 = (float)PVZ_T();
  if (fVar3 + 3.0 < fVar4) {
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0xcc) = uVar5;
  }
  fVar3 = (float)PVZ_T();
  if (fVar3 < *(float *)(this + 0xcc)) {
    calcCloseAttack(this);
  }
  if (this[0xa3] != (PooyanShooter)0x0) {
    fVar3 = *(float *)(this + 200);
    fVar4 = (float)PVZ_T();
    if (fVar4 < fVar3 + 1.0) {
      fVar3 = (float)PVZ_T();
      fVar4 = *(float *)(this + 200);
      DVec3::DVec3((DVec3 *)&local_18);
      local_18 = *(float *)(this + 0xa4) +
                 (*(float *)(this + 0xb0) - *(float *)(this + 0xa4)) * (fVar3 - fVar4);
      local_14 = *(float *)(this + 0xa8) +
                 (*(float *)(this + 0xb4) - *(float *)(this + 0xa8)) * (fVar3 - fVar4);
      local_10 = 0;
      MoveShooterTo(local_18,local_14,0,this);
    }
    else {
      MoveShooterTo(*(undefined4 *)(this + 0xb0),*(undefined4 *)(this + 0xb4),
                    *(undefined4 *)(this + 0xb8),this);
      this[0xa3] = (PooyanShooter)0x0;
      this_00 = (LevelModuleManager *)
                FUN_04779c14(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      this_01 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_00);
      if (this_01 != (PooyanModule *)0x0) {
        PooyanModule::takeShoot(this_01);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooter::registerForEvents() */

void __thiscall PooyanShooter::registerForEvents(PooyanShooter *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)FUN_04779c14(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<PooyanShooter,void(PooyanShooter::*)(RenderQueue*)>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanShooter::IsInvincible() */

void __thiscall PooyanShooter::IsInvincible(PooyanShooter *this)

{
  long lVar1;
  Plant *this_00;
  
  lVar1 = GetPlantPtr(this);
  if (lVar1 != 0) {
    this_00 = (Plant *)GetPlantPtr(this);
    Plant::IsInvincible(this_00,false);
    return;
  }
  return;
}

