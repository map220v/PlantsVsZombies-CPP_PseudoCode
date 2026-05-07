// Class: RiverEntity


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntity::GetUpPamLabel() */

void __thiscall RiverEntity::GetUpPamLabel(RiverEntity *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"up");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntity::GetDownPamLabel() */

void __thiscall RiverEntity::GetDownPamLabel(RiverEntity *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"down");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntity::GetDrawOffet() */

void RiverEntity::GetDrawOffet(void)

{
  int iVar1;
  int iVar2;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04a11b78(0x76);
  iVar2 = FUN_04a11b78(0x73);
  Sexy::FastCurve::SetOutRange(local_10,(float)-iVar1,(float)-iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntity::StaticClassInit() */

void RiverEntity::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiverEntity");
    (*pcVar2)(plVar1,asStack_10,FUN_04a137ac,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverEntity::StaticGetClass() */

long * RiverEntity::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiverEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiverEntity::GetClass() const */

long * RiverEntity::GetClass(void)

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
  (*pcVar3)(plVar1,"RiverEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiverEntity::SetRiverEntityType(RiverEntitiesType) */

void __thiscall RiverEntity::SetRiverEntityType(RiverEntity *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xc0) = param_2;
  return;
}


/* RiverEntity::IsMoving() */

RiverEntity __thiscall RiverEntity::IsMoving(RiverEntity *this)

{
  return this[0xbc];
}


/* RiverEntity::~RiverEntity() */

void __thiscall RiverEntity::~RiverEntity(RiverEntity *this)

{
  *(undefined ***)this = &PTR_GetClass_0692e580;
  *(undefined ***)(this + 0x10) = &PTR__RiverEntity_0692e788;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to RiverEntity::~RiverEntity() */

void __thiscall RiverEntity::~RiverEntity(RiverEntity *this)

{
  ~RiverEntity(this + -0x10);
  return;
}


/* RiverEntity::~RiverEntity() */

void __thiscall RiverEntity::~RiverEntity(RiverEntity *this)

{
  ~RiverEntity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RiverEntity::~RiverEntity() */

void __thiscall RiverEntity::~RiverEntity(RiverEntity *this)

{
  ~RiverEntity(this + -0x10);
  return;
}


/* RiverEntity::RiverEntity() */

void __thiscall RiverEntity::RiverEntity(RiverEntity *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0692e580;
  *(undefined ***)(this + 0x10) = &PTR__RiverEntity_0692e788;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  this[0xbc] = (RiverEntity)0x0;
  *(undefined4 *)(this + 0xb0) = 0;
  return;
}


/* RiverEntity::StaticNew() */

RiverEntity * RiverEntity::StaticNew(void)

{
  RiverEntity *this;
  
  this = ::operator_new(0xd0);
  RiverEntity(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntity::onDraw(Sexy::Graphics*) */

void __thiscall RiverEntity::onDraw(RiverEntity *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar4 = (ulong)*(uint *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar3 = (float)FUN_04a11a44(*(undefined4 *)(this + 0x18),uVar4,*(undefined4 *)(this + 0x20));
  this_00 = (RtWeakPtr *)(this + 0xa8);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar3 = (float)FUN_04a11c08(fVar3 + 20.0);
  fVar6 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar5 +
       (float)(int)((fVar3 - fVar5) * *(float *)(param_1 + 0x18));
  fVar3 = (float)FUN_04a11c08(uVar4 & 0xffffffff);
  fVar3 = *(float *)(param_1 + 0x14) + fVar6 +
          (float)(int)((fVar3 - fVar6) * *(float *)(param_1 + 0x1c));
  *(float *)(param_1 + 0x14) = fVar3;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::SetRenderTransform(pPVar2,aSStack_30);
    fVar5 = (float)(**(code **)(*(long *)this + 0x1f0))(this);
    (**(code **)(*(long *)this + 0x1f0))(this);
    Sexy::Graphics::Translate(param_1,(int)fVar5,(int)fVar3);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::ClearMultiplicativeOverlayColor(pPVar2);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::Draw(pPVar2,param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverEntity::SetMovingDirection(std::string) */

void __thiscall RiverEntity::SetMovingDirection(RiverEntity *this,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==("UP",param_2);
  if (bVar1) {
    *(undefined4 *)(this + 0xb0) = 1;
  }
  else {
    bVar1 = std::operator==("DOWN",param_2);
    if (bVar1) {
      *(undefined4 *)(this + 0xb0) = 2;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntity::SetGrid(int) */

void __thiscall RiverEntity::SetGrid(RiverEntity *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PopAnimRig *pPVar7;
  code *pcVar8;
  string asStack_50 [8];
  float local_48;
  float local_44;
  undefined4 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(int *)(this + 0xb4) = param_1;
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_48);
  iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(param_1);
  local_48 = (float)iVar2;
  local_40 = 0;
  iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(0);
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar5 = BoardTransforms::GridToBoardSpaceYUnbounded(4);
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar2 = *(int *)(this + 0xb0);
  if (iVar2 == 1) {
    *(undefined4 *)(this + 0xb8) = 4;
    local_44 = (float)(int)((float)(iVar5 - iVar6 / 2) + 20.0);
    if (*(int *)(this + 0xc0) != 1) goto LAB_04a12340;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
    if (!bVar1) goto LAB_04a12340;
    pPVar7 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    pcVar8 = *(code **)(*(long *)this + 0x1e0);
  }
  else {
    if (iVar2 == 0) goto LAB_04a12340;
    if (iVar2 != 2) {
      *(undefined4 *)(this + 0xb8) = 0;
      goto LAB_04a12340;
    }
    *(undefined4 *)(this + 0xb8) = 0;
    local_44 = (float)(int)((float)(iVar3 - iVar4 / 2) + 10.0);
    if (*(int *)(this + 0xc0) != 1) goto LAB_04a12340;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
    if (!bVar1) goto LAB_04a12340;
    pPVar7 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    pcVar8 = *(code **)(*(long *)this + 0x1e8);
  }
  (*pcVar8)(asStack_50,this);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar7,asStack_50,0,aDStack_38);
  std::string::~string(asStack_50);
LAB_04a12340:
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverEntity::StartMoving() */

void __thiscall RiverEntity::StartMoving(RiverEntity *this)

{
  undefined4 uVar1;
  
  this[0xbc] = (RiverEntity)0x1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 200) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntity::keepMoving() */

void __thiscall RiverEntity::keepMoving(RiverEntity *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0xbc] != (RiverEntity)0x0) && (*(int *)(this + 0xb0) != 0)) {
    DVec3::DVec3((DVec3 *)&local_18);
    puVar4 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = *puVar4;
    local_10 = puVar4[2];
    iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(0);
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar5 = (int)((float)(iVar2 - iVar3 / 2) + 10.0);
    iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(4);
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar3 = (int)((float)(iVar2 - iVar3 / 2) + 20.0);
    iVar2 = iVar3 - iVar5;
    if (*(int *)(this + 0xb0) == 1) {
      fVar7 = *(float *)(this + 200);
      fVar6 = (float)PVZ_T();
      local_14 = (float)iVar3 + (float)iVar2 * ((fVar7 - fVar6) / *(float *)(this + 0xc4));
    }
    else if (*(int *)(this + 0xb0) == 2) {
      fVar6 = (float)PVZ_T();
      local_14 = ((fVar6 - *(float *)(this + 200)) * (float)iVar2) / *(float *)(this + 0xc4) +
                 (float)iVar5;
    }
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
    if ((*(int *)(this + 0xc0) == 0) &&
       (cVar1 = FloatingIce::IsCarryingDodoRider((FloatingIce *)this), cVar1 != '\0')) {
      MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,local_14);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverEntity::CheckRiverEntityCloseToEdge() */

RiverEntity __thiscall RiverEntity::CheckRiverEntityCloseToEdge(RiverEntity *this)

{
  RiverEntity RVar1;
  char cVar2;
  RiverEntity RVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  RVar1 = this[0xbc];
  if (RVar1 != (RiverEntity)0x0) {
    iVar4 = BoardTransforms::GridToBoardSpaceYUnbounded(0);
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar6 = BoardTransforms::GridToBoardSpaceYUnbounded(4);
    iVar7 = BoardConstants::GRIDSQUARE_HEIGHT();
    if (*(int *)(this + 0xb0) == 1) {
      lVar8 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      if (*(float *)(lVar8 + 4) <= (float)(int)((float)(iVar4 - iVar5 / 2) + 10.0))
      goto LAB_04a13e08;
    }
    else if ((*(int *)(this + 0xb0) == 2) &&
            (lVar8 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this),
            (float)(int)((float)(iVar6 - iVar7 / 2) + 20.0) <= *(float *)(lVar8 + 4))) {
LAB_04a13e08:
      if ((*(int *)(this + 0xc0) == 0) && (cVar2 = FUN_04a113b4(this[0xcc]), cVar2 == '\0')) {
        RVar3 = (RiverEntity)FUN_04a113b0(this[0xcd]);
        if (RVar3 != (RiverEntity)0x0) {
          return RVar3;
        }
        FloatingIce::StartToSink((FloatingIce *)this);
        return RVar1;
      }
      MessageRouter::Post<RiverEntity*,RiverEntity*>
                ((MessageRouter *)gMessageRouter,Message::RiverEntityCloseToEdge,this);
      return RVar1;
    }
  }
  return (RiverEntity)0x0;
}


/* RiverEntity::checkMoving() */

void __thiscall RiverEntity::checkMoving(RiverEntity *this)

{
  char cVar1;
  
  cVar1 = CheckRiverEntityCloseToEdge(this);
  if ((cVar1 == '\0') && (cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0')) {
    keepMoving(this);
    return;
  }
  return;
}


/* RiverEntity::Update() */

void __thiscall RiverEntity::Update(RiverEntity *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  }
  checkMoving(this);
  return;
}

