// Class: TestDragon


/* TestDragon::CalcRenderOrder() const */

int __thiscall TestDragon::CalcRenderOrder(TestDragon *this)

{
  int iVar1;
  
  iVar1 = FUN_03723ca4(*(undefined4 *)(this + 0x1d8));
  if (iVar1 == 0) {
    return 0x7a507;
  }
  iVar1 = FUN_03723cc0(*(undefined4 *)(this + 0x240));
  return iVar1 + 500000;
}


/* non-virtual thunk to TestDragon::CalcRenderOrder() const */

void __thiscall TestDragon::CalcRenderOrder(TestDragon *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::StaticClassInit() */

void TestDragon::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PathInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03747df0,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TestDragonInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03747bb4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TestDragon");
    (*pcVar3)(plVar2,asStack_10,FUN_03767980,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TestDragon::StaticGetClass() */

long * TestDragon::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"TestDragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TestDragon::GetClass() const */

long * TestDragon::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"TestDragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TestDragon::hasEmptyTarget() */

byte __thiscall TestDragon::hasEmptyTarget(TestDragon *this)

{
  byte bVar1;
  
  if (((*(float *)(this + 0x1dc) == -1.0) && (*(float *)(this + 0x1e0) == -1.0)) &&
     (*(float *)(this + 0x1e4) == -1.0)) {
    bVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1d0));
    return bVar1 ^ 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::GetMoveTimesToDestination(Sexy::SexyVector3 const&, float) */

void TestDragon::GetMoveTimesToDestination(SexyVector3 *param_1,float param_2)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  SexyVector3 *pSVar4;
  undefined8 *in_x1;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_c8 = *in_x1;
  local_c0 = *(undefined4 *)(in_x1 + 1);
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_b8 = *puVar2;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x1b8);
  local_b0 = *(undefined4 *)(puVar2 + 1);
  local_a8 = local_b8;
  local_a0 = local_b0;
  lVar3 = FUN_03724824(uVar5,*(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x1c0));
  if (lVar3 == 0) {
    puVar2 = (undefined8 *)Projectile::GetVelocity((Projectile *)param_1);
  }
  else {
    lVar3 = FUN_0372484c(uVar5,0);
    puVar2 = (undefined8 *)(lVar3 + 4);
  }
  local_98 = *puVar2;
  iVar6 = 0;
  local_90 = *(undefined4 *)(puVar2 + 1);
  puVar2 = (undefined8 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)param_1);
  local_88 = *puVar2;
  local_80 = *(undefined4 *)(puVar2 + 1);
  while (cVar1 = hasReachDestination((SexyVector3 *)&local_b8,(SexyVector3 *)&local_a8,
                                     (SexyVector3 *)&local_c8,(TestDragon *)param_1), cVar1 == '\0')
  {
    iVar6 = iVar6 + 1;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_b8,(SexyVector3 *)&local_a8);
    pSVar4 = (SexyVector3 *)Projectile::GetVelocityScale((Projectile *)param_1);
    local_78[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_98,pSVar4);
    local_68[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_78,param_2);
    local_58[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&local_b8,(SexyVector3 *)local_68);
    local_48[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_88,param_2);
    local_38[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_48,param_2);
    local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_38,0.5);
    local_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)local_58,(SexyVector3 *)local_28);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_a8,(SexyVector3 *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::Exit() */

void __thiscall TestDragon::Exit(TestDragon *this)

{
  int iVar1;
  int iVar2;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceX(9);
  iVar2 = BoardTransforms::GridToBoardSpaceY(2);
  EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar1 + 700.0,(float)iVar2,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x22c),(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TestDragon::WillExit() */

bool __thiscall TestDragon::WillExit(TestDragon *this)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(float *)(this + 0x22c) == -1.0) && (*(float *)(this + 0x230) == -1.0)) {
    bVar1 = *(float *)(this + 0x234) != -1.0;
  }
  return bVar1;
}


/* TestDragon::IsExiting() */

bool __thiscall TestDragon::IsExiting(TestDragon *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = WillExit(this);
  bVar1 = false;
  if (((cVar2 != '\0') && (bVar1 = false, *(float *)(this + 0x22c) == *(float *)(this + 0x1dc))) &&
     (*(float *)(this + 0x230) == *(float *)(this + 0x1e0))) {
    bVar1 = *(float *)(this + 0x234) == *(float *)(this + 0x1e4);
  }
  return bVar1;
}


/* TestDragon::SetRotatedVelocity(float) */

void __thiscall TestDragon::SetRotatedVelocity(TestDragon *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_03723aec(*(undefined4 *)(this + 0xc4));
  fVar2 = cosf(fVar1);
  fVar1 = sinf(fVar1);
  Projectile::SetVelocity((Projectile *)this,fVar2 * param_1,-(fVar1 * param_1),0.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::IsGridValid(Sexy::Point) */

void __thiscall TestDragon::IsGridValid(TestDragon *this,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar2 = BoardTransforms::BoardSpaceToGridX(*pfVar4);
  iVar3 = BoardTransforms::BoardSpaceToGridX(pfVar4[1]);
  Sexy::Insets::Insets(aIStack_28,iVar2 + -2,iVar3 + -2,5,5);
  Sexy::Insets::Insets(aIStack_18,*param_2,param_2[1],1,1);
  bVar1 = Sexy::TRect<int>::Intersects((TRect<int> *)aIStack_18,(TRect *)aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::GetTargetPos(BoardEntity*) */

void __thiscall TestDragon::GetTargetPos(TestDragon *this,BoardEntity *param_1)

{
  bool bVar1;
  SexyVector3 *this_00;
  RtObject *this_01;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  Vec3 aVStack_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1d0));
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
    bVar1 = Sexy::RtObject::IsA<ZombieZombossMech_Eighties>(this_01);
    if (bVar1) {
      local_38 = CollsionTargetCenterRg(param_1);
      lVar2 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      uStack_34 = *(undefined4 *)(lVar2 + 4);
      local_30 = 0;
      goto LAB_0373fe60;
    }
  }
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  fVar3 = (float)FUN_03728ac0(0xc1700000);
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar3,0.0);
  uVar4 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_18 = CONCAT44(fVar3,uVar4);
  local_10 = uVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
LAB_0373fe60:
  local_18 = CONCAT44(uStack_34,local_38);
  local_10 = local_30;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::CheckWidenAnim(bool) */

void __thiscall TestDragon::CheckWidenAnim(TestDragon *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  PopAnimRig *pPVar4;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)Projectile::GetVelocity((Projectile *)this);
  bVar1 = 0.0 <= *pfVar3;
  iVar2 = FUN_03723ca4(*(undefined4 *)(this + 0x1d8));
  if (iVar2 == 2) {
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    if (param_1) {
      if (bVar1) {
        __s = "tail_wide";
      }
      else {
        __s = "tail_re_wide";
      }
    }
    else if (bVar1) {
      __s = "tail";
    }
    else {
      __s = "tail_re";
    }
  }
  else if (iVar2 == 0) {
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    if (param_1) {
      if (bVar1) {
        __s = "head_wide";
      }
      else {
        __s = "head_re_wide";
      }
    }
    else if (bVar1) {
      __s = "head";
    }
    else {
      __s = "head_re";
    }
  }
  else {
    pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    if (param_1) {
      if (bVar1) {
        __s = "04_wide";
      }
      else {
        __s = "04_re_wide";
      }
    }
    else if (bVar1) {
      __s = "04";
    }
    else {
      __s = "04_re";
    }
  }
  std::string::string(asStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::reachMaxSpeed(float) */

void TestDragon::reachMaxSpeed(float param_1)

{
  Projectile *in_x0;
  long extraout_x0;
  SexyVector3 *this;
  float fVar1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps(in_x0);
  nop();
  this = (SexyVector3 *)Projectile::GetVelocity(in_x0);
  local_18[0] = Sexy::SexyVector3::operator*(this,param_1);
  fVar1 = (float)DVec3::getLength((DVec3 *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(float *)(extraout_x0 + 0x1e4) <= fVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::reachMinSpeed(float) */

void TestDragon::reachMinSpeed(float param_1)

{
  Projectile *in_x0;
  long extraout_x0;
  SexyVector3 *this;
  float fVar1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps(in_x0);
  nop();
  this = (SexyVector3 *)Projectile::GetVelocity(in_x0);
  local_18[0] = Sexy::SexyVector3::operator*(this,param_1);
  fVar1 = (float)DVec3::getLength((DVec3 *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1 <= *(float *)(extraout_x0 + 0x1e8));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::IsWiden() */

void __thiscall TestDragon::IsWiden(TestDragon *this)

{
  long lVar1;
  TRect<float> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetCollisionRect();
  lVar1 = Projectile::GetProps((Projectile *)this);
  Sexy::TRect<float>::operator!=(aTStack_18,(TRect *)(lVar1 + 0x120));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::FindBall() */

void __thiscall TestDragon::FindBall(TestDragon *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  RtObject *this_00;
  RtObject *pRVar6;
  float fVar7;
  float fVar8;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03723c98(*(undefined4 *)(this + 0x20c));
  if (iVar2 == 1) {
    pRVar6 = (RtObject *)0x0;
  }
  else {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    pRVar6 = (RtObject *)0x0;
    Sexy::Insets::Insets(aIStack_30,0,0,iVar2,iVar3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesInGridSquares(avStack_20,4,aIStack_30);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    fVar8 = 1e+06;
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_00 = (RtObject *)*puVar4;
      bVar1 = Sexy::RtObject::IsA<GridItemBall>(this_00);
      if (bVar1) {
        fVar7 = (float)FUN_03726f28(*(undefined4 *)(this_00 + 0x18),*(undefined4 *)(this_00 + 0x1c),
                                    *(undefined4 *)(this_00 + 0x20));
        lVar5 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
        if ((fVar7 < fVar8) && (fVar7 <= *(float *)(lVar5 + 0x10))) {
          pRVar6 = this_00;
          fVar8 = fVar7;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar6);
}


/* TestDragon::TestDragon() */

void __thiscall TestDragon::TestDragon(TestDragon *this)

{
  undefined4 uVar1;
  
  Projectile::Projectile((Projectile *)this);
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined ***)this = &PTR_GetClass_06693e00;
  *(undefined ***)(this + 0x10) = &PTR__TestDragon_06693ff0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d0));
  EATextSquish::Vec3::Vec3((Vec3 *)(this + 0x1dc),-1.0,-1.0,-1.0);
  *(undefined4 *)(this + 0x1e8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f0));
  *(undefined4 *)(this + 0x208) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x228) = uVar1;
  EATextSquish::Vec3::Vec3((Vec3 *)(this + 0x22c),-1.0,-1.0,-1.0);
  this[0x23c] = (TestDragon)0x0;
  *(undefined4 *)(this + 0x240) = 0;
  this[0x23d] = (TestDragon)0x1;
  *(undefined4 *)(this + 0x238) = uVar1;
  return;
}


/* TestDragon::StaticNew() */

TestDragon * TestDragon::StaticNew(void)

{
  TestDragon *this;
  
  this = ::operator_new(0x248);
  TestDragon(this);
  return this;
}


/* TestDragon::~TestDragon() */

void __thiscall TestDragon::~TestDragon(TestDragon *this)

{
  *(undefined ***)this = &PTR_GetClass_06693e00;
  *(undefined ***)(this + 0x10) = &PTR__TestDragon_06693ff0;
  std::vector<PathInfo,std::allocator<PathInfo>>::~vector
            ((vector<PathInfo,std::allocator<PathInfo>> *)(this + 0x210));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1f0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
  std::vector<TestDragonInfo,std::allocator<TestDragonInfo>>::~vector
            ((vector<TestDragonInfo,std::allocator<TestDragonInfo>> *)(this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to TestDragon::~TestDragon() */

void __thiscall TestDragon::~TestDragon(TestDragon *this)

{
  ~TestDragon(this + -0x10);
  return;
}


/* TestDragon::~TestDragon() */

void __thiscall TestDragon::~TestDragon(TestDragon *this)

{
  ~TestDragon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TestDragon::~TestDragon() */

void __thiscall TestDragon::~TestDragon(TestDragon *this)

{
  ~TestDragon(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::GetRandomGrids(std::vector<Sexy::Point, std::allocator<Sexy::Point> >&) */

void __thiscall TestDragon::GetRandomGrids(TestDragon *this,vector *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  Point aPStack_10 [8];
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  lVar3 = *(long *)(gLawnApp + 0x9f0);
  if (0 < *(int *)(lVar3 + 0xfc)) {
    do {
      iVar4 = 0;
      if (0 < *(int *)(lVar3 + 0xf8)) {
        do {
          while( true ) {
            Sexy::Point::Point(aPStack_10,iVar4,iVar5);
            cVar2 = IsGridValid(this,aPStack_10);
            if (cVar2 == '\0') break;
            iVar1 = iVar4 + 1;
            Sexy::Point::Point(aPStack_10,iVar4,iVar5);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
            lVar3 = *(long *)(gLawnApp + 0x9f0);
            iVar4 = iVar1;
            if (*(int *)(lVar3 + 0xf8) <= iVar1) goto LAB_0376ccb4;
          }
          iVar4 = iVar4 + 1;
          lVar3 = *(long *)(gLawnApp + 0x9f0);
        } while (iVar4 < *(int *)(lVar3 + 0xf8));
      }
LAB_0376ccb4:
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar3 + 0xfc));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::CreateRandomPosition() */

void __thiscall TestDragon::CreateRandomPosition(TestDragon *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  Vec3 aVStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(float *)(this + 0x1dc) == -1.0) && (*(float *)(this + 0x1e0) == -1.0)) &&
     (*(float *)(this + 0x1e4) == -1.0)) {
    uVar6 = *(undefined8 *)(this + 0x210);
    lVar3 = FUN_037247dc(uVar6,*(undefined8 *)(this + 0x218));
    if (lVar3 == 0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      GetRandomGrids(this,(vector *)&local_20);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
                (uVar6,uVar4);
      uVar6 = local_20;
      lVar3 = FUN_03724818(local_20,local_18);
      iVar2 = 0;
      if (lVar3 != 0) {
        piVar5 = (int *)FUN_03724780(uVar6,0);
        iVar2 = *piVar5;
      }
      iVar1 = BoardTransforms::GridToBoardSpaceX(iVar2);
      lVar3 = FUN_03724818(local_20,local_18);
      iVar2 = 0;
      if (lVar3 != 0) {
        lVar3 = FUN_03724780(local_20,0);
        iVar2 = *(int *)(lVar3 + 4);
      }
      iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2);
      EATextSquish::Vec3::Vec3(aVStack_30,(float)iVar1,(float)iVar2,0.0);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1dc),(SexyVector3 *)aVStack_30);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
    }
    else {
      lVar3 = FUN_0372480c(uVar6,0);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1dc),(SexyVector3 *)(lVar3 + 4));
      uVar7 = PVZ_T();
      *(undefined4 *)(this + 0x228) = uVar7;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::SetOverrideTarget(BoardEntity*, int) */

void __thiscall TestDragon::SetOverrideTarget(TestDragon *this,BoardEntity *param_1,int param_2)

{
  char cVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x208) <= fVar2) {
    cVar1 = WillExit(this);
    if (cVar1 == '\0') {
      if ((param_1 == (BoardEntity *)0x0) || (param_2 != 0)) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1d0),(RtWeakPtr *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        CreateRandomPosition(this);
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1d0),
                   (RtWeakPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
    else {
      cVar1 = hasEmptyTarget(this);
      if (cVar1 != '\0') {
        Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1dc),(SexyVector3 *)(this + 0x22c));
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TestDragon::SetPath(std::vector<PathInfo, std::allocator<PathInfo> > const&) */

void __thiscall TestDragon::SetPath(TestDragon *this,vector *param_1)

{
  std::vector<PathInfo,std::allocator<PathInfo>>::operator=
            ((vector<PathInfo,std::allocator<PathInfo>> *)(this + 0x210),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::CanBeTarget(BoardEntity*) */

void __thiscall TestDragon::CanBeTarget(TestDragon *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  long *extraout_x0;
  GridItem *pGVar4;
  string *psVar5;
  code *pcVar6;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      nop();
      if ((extraout_x0 != (long *)0x0) &&
         (cVar2 = (**(code **)(*extraout_x0 + 0x328))(), cVar2 == '\0')) {
        cVar2 = (**(code **)(*extraout_x0 + 0x330))(extraout_x0);
        if ((cVar2 == '\0') && (cVar2 = Creature::IsOnBoard(), cVar2 != '\0')) {
          pcVar6 = *(code **)(*extraout_x0 + 0x3d0);
          psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          std::string::string(asStack_20,"nekotail");
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
          cVar2 = (*pcVar6)(extraout_x0,aRStack_10,0);
          bVar3 = 0;
          if ((cVar2 != '\0') && (cVar2 = Zombie::HasCondition(extraout_x0,0x27), cVar2 == '\0')) {
            bVar3 = Zombie::HasCondition(extraout_x0,0x25);
            bVar3 = bVar3 ^ 1;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          std::string::~string(asStack_20);
          nop();
          goto LAB_03774948;
        }
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if ((bVar1) &&
         (pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar4 != (GridItem *)0x0))
      {
        bVar3 = (**(code **)(*(long *)pGVar4 + 0x200))();
        goto LAB_03774948;
      }
    }
  }
  bVar3 = 0;
LAB_03774948:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::FindTargetWithFlag(BoardEntityTypeFlag) */

void __thiscall TestDragon::FindTargetWithFlag(TestDragon *this,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  BoardEntity *pBVar7;
  BoardEntity *pBVar8;
  float fVar9;
  float fVar10;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  pBVar8 = (BoardEntity *)0x0;
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_30,0,0,iVar3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar10 = 1e+06;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pBVar7 = (BoardEntity *)*puVar5;
    cVar2 = CanBeTarget(this,pBVar7);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_03726f28(*(undefined4 *)(pBVar7 + 0x18),*(undefined4 *)(pBVar7 + 0x1c),
                                  *(undefined4 *)(pBVar7 + 0x20));
      lVar6 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
      if ((fVar9 < fVar10) && (fVar9 <= *(float *)(lVar6 + 0x10))) {
        pBVar8 = pBVar7;
        fVar10 = fVar9;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pBVar8);
}


/* TestDragon::FindNewTarget(int) */

void __thiscall TestDragon::FindNewTarget(TestDragon *this,int param_1)

{
  BoardEntity *pBVar1;
  
  pBVar1 = (BoardEntity *)FindBall(this);
  if ((pBVar1 == (BoardEntity *)0x0) &&
     (pBVar1 = (BoardEntity *)FindTargetWithFlag(this,2), pBVar1 == (BoardEntity *)0x0)) {
    pBVar1 = (BoardEntity *)FindTargetWithFlag(this,4);
    SetOverrideTarget(this,pBVar1,param_1);
    return;
  }
  SetOverrideTarget(this,pBVar1,param_1);
  return;
}


/* TestDragon::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall TestDragon::OnCollideEntity(TestDragon *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  GridItemBall *this_00;
  ArtifactDragonSubsystem *pAVar5;
  undefined8 uVar6;
  
  if ((((param_1 == (BoardEntity *)0x0) ||
       (bVar1 = Sexy::RtObject::IsA<GridItemBall>((RtObject *)param_1), !bVar1)) ||
      (iVar3 = FUN_03723c98(*(undefined4 *)(this + 0x20c)), iVar3 == 1)) ||
     (iVar3 = FUN_03723ca4(*(undefined4 *)(this + 0x1d8)), iVar3 != 0)) {
    cVar2 = CanBeTarget(this,param_1);
    if ((cVar2 != '\0') && (this[0x23c] != (TestDragon)0x0)) {
      pAVar5 = Board::GetGameSubSystem<ArtifactDragonSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      uVar4 = FUN_03723c98(*(undefined4 *)(this + 0x20c));
      ArtifactDragonSubsystem::EnableDragonDamage(pAVar5,uVar4,0);
      uVar6 = Projectile::OnCollideEntity((Projectile *)this,param_1);
      return uVar6;
    }
  }
  else {
    this_00 = Sexy::RtObject::Cast<GridItemBall>((RtObject *)param_1);
    if (this_00 != (GridItemBall *)0x0) {
      GridItemBall::Kill(this_00);
      pAVar5 = Board::GetGameSubSystem<ArtifactDragonSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      ArtifactDragonSubsystem::WidenDragon(pAVar5,true);
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::addLastUpdateInfo(float, Sexy::SexyVector3 const&, Sexy::SexyVector3 const&, float)
    */

void __thiscall
TestDragon::addLastUpdateInfo
          (TestDragon *this,float param_1,SexyVector3 *param_2,SexyVector3 *param_3,float param_4)

{
  TestDragonInfo aTStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TestDragonInfo::TestDragonInfo(aTStack_28,param_1,param_2,param_3,param_4);
  std::vector<TestDragonInfo,std::allocator<TestDragonInfo>>::push_back
            ((vector<TestDragonInfo,std::allocator<TestDragonInfo>> *)(this + 0x1b8),aTStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragon::moveThroughTime(float) */

void TestDragon::moveThroughTime(float param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  Projectile *in_x0;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  SexyVector3 *pSVar9;
  SexyVector3 *pSVar10;
  PopAnimRig *pPVar11;
  ArtifactDragonSubsystem *pAVar12;
  UIWidget *this_00;
  ResourceInfo *pRVar13;
  ResourceInfo *pRVar14;
  long extraout_x0;
  DVec3 *pDVar15;
  Zombie *pZVar16;
  char *pcVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined4 in_s2;
  float fVar25;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar19 = (float)FUN_037239d8(*(undefined4 *)(lVar5 + 0x30));
  if (fVar19 != 1.0) {
    param_1 = (float)PVZ_RealDt();
  }
  lVar5 = *(long *)(in_x0 + 0x1a8);
  if (lVar5 == 0) {
    cVar2 = IsExiting((TestDragon *)in_x0);
    if ((cVar2 != '\0') && (fVar19 = (float)PVZ_EOT(), *(float *)(in_x0 + 0x208) == fVar19)) {
      fVar19 = (float)PVZ_T();
      if (*(float *)(in_x0 + 0x238) <= fVar19) {
        pAVar12 = Board::GetGameSubSystem<ArtifactDragonSubsystem>(*(Board **)(gLawnApp + 0x9f0));
        ArtifactDragonSubsystem::RemoveDragon(pAVar12,0);
        std::string::string((string *)&local_48,"UIArtifactIcon");
        this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_48);
        std::string::~string((string *)&local_48);
        nop();
        if (this_00 != (UIWidget *)0x0) {
          UIWidget::SetClickable(this_00,true);
        }
      }
      goto LAB_0378ffc8;
    }
    fVar19 = (float)PVZ_T();
    fVar22 = *(float *)(in_x0 + 0x208);
    if (fVar19 < fVar22) {
LAB_0379055c:
      Projectile::moveThroughTime(in_x0,param_1);
      fVar19 = (float)FUN_03723aec(*(undefined4 *)(in_x0 + 0xc4));
      pSVar9 = (SexyVector3 *)Projectile::GetVelocity(in_x0);
      pSVar10 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)in_x0);
      addLastUpdateInfo((TestDragon *)in_x0,fVar19,pSVar9,pSVar10,param_1);
      goto LAB_0378ffc8;
    }
    this = (RtWeakPtr *)(in_x0 + 0x1d0);
    pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    cVar2 = CanBeTarget((TestDragon *)in_x0,(BoardEntity *)pRVar13);
    if (cVar2 == '\0') {
      iVar4 = FUN_03723c98(*(undefined4 *)(in_x0 + 0x20c));
      if (iVar4 == 1) {
        lVar5 = FUN_037247dc(*(undefined8 *)(in_x0 + 0x210),*(undefined8 *)(in_x0 + 0x218));
        iVar4 = (int)lVar5;
        if (lVar5 == 0) {
          uVar20 = PVZ_EOT();
          *(undefined4 *)(in_x0 + 0x208) = uVar20;
          goto LAB_0379055c;
        }
      }
      else {
        iVar4 = FUN_037247dc(*(undefined8 *)(in_x0 + 0x210),*(undefined8 *)(in_x0 + 0x218));
      }
      FindNewTarget((TestDragon *)in_x0,iVar4);
    }
    pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    if (pRVar13 == (ResourceInfo *)0x0) {
      fVar22 = *(float *)(in_x0 + 0x1dc);
      if (((fVar22 == -1.0) && (fVar22 = *(float *)(in_x0 + 0x1e0), fVar22 == -1.0)) &&
         (fVar22 = *(float *)(in_x0 + 0x1e4), fVar22 == -1.0)) goto LAB_0378ffc8;
      local_60 = *(undefined4 *)(in_x0 + 0x1e4);
      local_68 = *(undefined8 *)(in_x0 + 0x1dc);
    }
    else {
      pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
      uVar20 = GetTargetPos((TestDragon *)in_x0,(BoardEntity *)pRVar14);
      local_68 = CONCAT44(fVar22,uVar20);
      local_60 = in_s2;
    }
    fVar19 = (float)FUN_03723aec(*(undefined4 *)(in_x0 + 0xc4));
    fVar21 = (float)Sexy::SexyMath::RadToDeg(fVar19);
    fVar21 = ABS(fVar21);
    if (90.0 < fVar21) {
      fVar21 = 180.0 - fVar21;
    }
    Projectile::GetProps(in_x0);
    nop();
    if (*(float *)(extraout_x0 + 0x200) < fVar21) {
      pDVar15 = (DVec3 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)in_x0);
      fVar21 = (float)DVec3::getLength(pDVar15);
      if (fVar21 != 0.0) {
        fVar22 = 0.0;
        in_s2 = 0;
        EATextSquish::Vec3::Vec3((Vec3 *)&local_48,0.0,0.0,0.0);
        Projectile::SetAcceleration(in_x0,(SexyVector3 *)&local_48);
        fVar21 = (float)DVec3::getLength(pDVar15);
        goto LAB_0379038c;
      }
    }
    else {
      pDVar15 = (DVec3 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)in_x0);
      fVar21 = (float)DVec3::getLength(pDVar15);
      if (fVar21 == 0.0) {
        cVar2 = reachMaxSpeed(param_1);
        if (cVar2 == '\0') {
          Projectile::SetAcceleration(in_x0,(SexyVector3 *)(extraout_x0 + 0x1ec));
          fVar21 = (float)DVec3::getLength(pDVar15);
        }
        else {
          fVar21 = (float)DVec3::getLength(pDVar15);
        }
      }
LAB_0379038c:
      if ((fVar21 != 0.0) &&
         ((cVar2 = reachMaxSpeed(param_1), cVar2 != '\0' ||
          (((cVar2 = reachMinSpeed(param_1), cVar2 != '\0' &&
            (pfVar7 = (float *)Projectile::GetVelocity(in_x0), *pfVar7 < 0.0)) &&
           (0.0 < *(float *)pDVar15)))))) {
        fVar22 = 0.0;
        in_s2 = 0;
        EATextSquish::Vec3::Vec3((Vec3 *)&local_48,0.0,0.0,0.0);
        Projectile::SetAcceleration(in_x0,(SexyVector3 *)&local_48);
      }
    }
    pSVar9 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)in_x0);
    fVar25 = *(float *)pSVar9;
    fVar21 = *(float *)(pSVar9 + 4);
    local_48._0_4_ = Sexy::SexyVector3::operator-((SexyVector3 *)&local_68,pSVar9);
    local_40 = in_s2;
    local_48._4_4_ = fVar22;
    uVar20 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_48);
    local_58 = CONCAT44(fVar22,uVar20);
    local_50 = in_s2;
    fVar22 = (float)ArmorflameMissile::calcDesiredRot();
    local_70 = CONCAT44(local_70._4_4_,ABS(fVar22 - fVar19));
    local_48 = CONCAT44(local_48._4_4_,*(float *)(extraout_x0 + 0x1e0) * 6.2831855 * param_1);
    pfVar7 = eastl::min_alt<float>((float *)&local_70,(float *)&local_48);
    dVar23 = ABS((double)*pfVar7);
    if ((long)(double)(fVar22 - fVar19) < 0) {
      dVar23 = -dVar23;
    }
    dVar23 = dVar23 + (double)fVar19;
    if (3.1415927410125732 < ABS(dVar23)) {
      dVar24 = 6.2831854820251465;
      if ((long)dVar23 < 0) {
        dVar24 = -6.2831854820251465;
      }
      dVar23 = dVar23 - dVar24;
    }
    FUN_03723af0((float)dVar23,in_x0 + 0xc4);
    pDVar15 = (DVec3 *)Projectile::GetVelocity(in_x0);
    fVar19 = (float)DVec3::getLength(pDVar15);
    SetRotatedVelocity((TestDragon *)in_x0,fVar19);
    Projectile::moveThroughTime(in_x0,param_1);
    if (in_x0[0x23d] == (Projectile)0x0) {
      if (*(float *)pDVar15 >= 0.0) {
        in_x0[0x23d] = (Projectile)0x1;
        pPVar11 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
        cVar2 = IsWiden((TestDragon *)in_x0);
        if (cVar2 == '\0') {
          iVar4 = FUN_03723c98(*(undefined4 *)(in_x0 + 0x20c));
          if (iVar4 == 1) {
            pcVar17 = "head_micro";
          }
          else {
            pcVar17 = "head";
          }
        }
        else {
          pcVar17 = "head_wide";
        }
        goto LAB_037907a8;
      }
    }
    else if (*(float *)pDVar15 < 0.0) {
      in_x0[0x23d] = (Projectile)0x0;
      pPVar11 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
      cVar2 = IsWiden((TestDragon *)in_x0);
      if (cVar2 == '\0') {
        iVar4 = FUN_03723c98(*(undefined4 *)(in_x0 + 0x20c));
        if (iVar4 == 1) {
          pcVar17 = "head_re_micro";
        }
        else {
          pcVar17 = "head_re";
        }
      }
      else {
        pcVar17 = "head_re_wide";
      }
LAB_037907a8:
      std::string::string((string *)&local_48,pcVar17);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar11,(SexyVector3 *)&local_48,0,aDStack_38);
      std::string::~string((string *)&local_48);
      nop();
    }
    if ((float)local_68 <= fVar25) {
      cVar2 = true;
      if ((float)local_68 < *(float *)pSVar9) {
        cVar2 = fVar25 <= (float)local_68;
      }
    }
    else {
      cVar2 = (float)local_68 <= *(float *)pSVar9;
    }
    if (local_68._4_4_ <= fVar21) {
      if ((*(float *)(pSVar9 + 4) <= local_68._4_4_) || (fVar21 <= local_68._4_4_))
      goto LAB_03790604;
LAB_037904cc:
      lVar5 = FUN_037247dc(*(undefined8 *)(in_x0 + 0x210),*(undefined8 *)(in_x0 + 0x218));
      if (lVar5 != 0) {
LAB_03790820:
        fVar19 = (float)PVZ_T();
        fVar22 = *(float *)(in_x0 + 0x228);
        lVar5 = FUN_0372480c(*(undefined8 *)(in_x0 + 0x210),0);
        if (fVar19 - fVar22 < *(float *)(lVar5 + 0x10)) goto LAB_03790618;
        goto LAB_03790620;
      }
    }
    else {
      if (*(float *)(pSVar9 + 4) < local_68._4_4_) goto LAB_037904cc;
LAB_03790604:
      cVar2 = cVar2 + '\x01';
      lVar5 = FUN_037247dc(*(undefined8 *)(in_x0 + 0x210),*(undefined8 *)(in_x0 + 0x218));
      if (lVar5 != 0) goto LAB_03790820;
LAB_03790618:
      if (cVar2 == '\x02') {
LAB_03790620:
        cVar2 = IsExiting((TestDragon *)in_x0);
        if (cVar2 != '\0') {
          fVar19 = (float)PVZ_T();
          *(float *)(in_x0 + 0x238) = fVar19 + *(float *)(extraout_x0 + 0x1f8);
        }
        cVar2 = '\0';
        lVar5 = FUN_037247dc(*(undefined8 *)(in_x0 + 0x210),*(undefined8 *)(in_x0 + 0x218));
        if (lVar5 == 1) {
          FindNewTarget((TestDragon *)in_x0,0);
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
        }
        cVar3 = IsExiting((TestDragon *)in_x0);
        if (cVar3 == '\0') {
          iVar4 = FUN_03723c98(*(undefined4 *)(in_x0 + 0x20c));
          if (iVar4 == 1) {
            uVar6 = FUN_037247dc(*(undefined8 *)(in_x0 + 0x210),*(undefined8 *)(in_x0 + 0x218));
            if ((uVar6 < 2) && (cVar2 == '\0')) goto LAB_03790680;
            fVar19 = (float)PVZ_T();
            pfVar7 = (float *)FUN_0372480c(*(undefined8 *)(in_x0 + 0x210),0);
            fVar19 = fVar19 + *pfVar7;
          }
          else {
            fVar19 = (float)PVZ_T();
            fVar19 = fVar19 + *(float *)(extraout_x0 + 0x1fc);
          }
        }
        else {
LAB_03790680:
          fVar19 = (float)PVZ_EOT();
        }
        *(float *)(in_x0 + 0x208) = fVar19;
        cVar2 = WillExit((TestDragon *)in_x0);
        if (cVar2 == '\0') {
          EATextSquish::Vec3::Vec3((Vec3 *)&local_48,-1.0,-1.0,-1.0);
        }
        else {
          local_40 = *(undefined4 *)(in_x0 + 0x234);
          local_48 = *(undefined8 *)(in_x0 + 0x22c);
        }
        Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x1dc),(SexyVector3 *)&local_48);
        cVar2 = WillExit((TestDragon *)in_x0);
        if (cVar2 != '\0') {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_48);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)&local_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        }
        lVar5 = FUN_037247dc(*(undefined8 *)(in_x0 + 0x210),*(undefined8 *)(in_x0 + 0x218));
        if (lVar5 != 0) {
          local_70 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(in_x0 + 0x210));
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_48,(__normal_iterator *)&local_70);
          std::vector<PathInfo,std::allocator<PathInfo>>::erase
                    ((vector<PathInfo,std::allocator<PathInfo>> *)(in_x0 + 0x210),local_48);
        }
      }
    }
    fVar19 = (float)FUN_03723aec(*(undefined4 *)(in_x0 + 0xc4));
    addLastUpdateInfo((TestDragon *)in_x0,fVar19,(SexyVector3 *)pDVar15,pSVar9,param_1);
    if ((pRVar13 != (ResourceInfo *)0x0) &&
       (pZVar16 = Sexy::RtObject::Cast<Zombie>((RtObject *)pRVar13), pZVar16 != (Zombie *)0x0)) {
      uVar20 = FUN_03723aa8(*(undefined4 *)(in_x0 + 0x24));
      cVar2 = FUN_037230ac(pZVar16,uVar20);
      if (cVar2 != '\0') {
        SetOverrideTarget((TestDragon *)in_x0,(BoardEntity *)0x0,99);
      }
    }
    goto LAB_0378ffc8;
  }
  uVar18 = *(undefined8 *)(lVar5 + 0x1b8);
  uVar6 = FUN_03724824(uVar18,*(undefined8 *)(lVar5 + 0x1c0));
  if (uVar6 < (ulong)(long)*(int *)(in_x0 + 0x1e8)) {
    Projectile::moveThroughTime(in_x0,param_1);
    pfVar7 = (float *)Projectile::GetVelocity(in_x0);
    fVar19 = *pfVar7;
    bVar1 = fVar19 < 0.0;
    if (in_x0[0x23d] != (Projectile)0x0) goto LAB_0378ffc4;
LAB_037900dc:
    if (bVar1 != NAN(fVar19)) goto LAB_0378ffc8;
    in_x0[0x23d] = (Projectile)0x1;
    pPVar11 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
    iVar4 = FUN_03723ca4(*(undefined4 *)(in_x0 + 0x1d8));
    if (iVar4 == 2) {
      cVar2 = IsWiden((TestDragon *)in_x0);
      if (cVar2 == '\0') {
        iVar4 = FUN_03723c98(*(undefined4 *)(in_x0 + 0x20c));
        if (iVar4 == 1) {
          pcVar17 = "tail_micro";
        }
        else {
          pcVar17 = "tail";
        }
      }
      else {
        pcVar17 = "tail_wide";
      }
    }
    else {
      cVar2 = IsWiden((TestDragon *)in_x0);
      if (cVar2 == '\0') {
        iVar4 = FUN_03723c98(*(undefined4 *)(in_x0 + 0x20c));
        if (iVar4 == 1) {
          pcVar17 = "04_micro";
        }
        else {
          pcVar17 = "04";
        }
      }
      else {
        pcVar17 = "04_wide";
      }
    }
  }
  else {
    puVar8 = (undefined4 *)FUN_0372484c(uVar18,0);
    FUN_03723af0(*puVar8,in_x0 + 0xc4);
    lVar5 = FUN_0372484c(*(undefined8 *)(*(long *)(in_x0 + 0x1a8) + 0x1b8),0);
    Projectile::SetVelocity(in_x0,(SexyVector3 *)(lVar5 + 4));
    Projectile::moveThroughTime(in_x0,param_1);
    FUN_0372484c(*(undefined8 *)(*(long *)(in_x0 + 0x1a8) + 0x1b8),0);
    (**(code **)(*(long *)in_x0 + 0x78))();
    fVar19 = (float)FUN_03723aec(*(undefined4 *)(in_x0 + 0xc4));
    pSVar9 = (SexyVector3 *)Projectile::GetVelocity(in_x0);
    pSVar10 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)in_x0);
    addLastUpdateInfo((TestDragon *)in_x0,fVar19,pSVar9,pSVar10,param_1);
    lVar5 = *(long *)(in_x0 + 0x1a8);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar5 + 0x1b8));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_48,(__normal_iterator *)&local_58);
    std::vector<TestDragonInfo,std::allocator<TestDragonInfo>>::erase
              ((vector<TestDragonInfo,std::allocator<TestDragonInfo>> *)(lVar5 + 0x1b8),local_48);
    fVar19 = *(float *)pSVar9;
    bVar1 = fVar19 < 0.0;
    if (in_x0[0x23d] == (Projectile)0x0) goto LAB_037900dc;
LAB_0378ffc4:
    if (!bVar1) goto LAB_0378ffc8;
    in_x0[0x23d] = (Projectile)0x0;
    pPVar11 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
    iVar4 = FUN_03723ca4(*(undefined4 *)(in_x0 + 0x1d8));
    if (iVar4 == 2) {
      cVar2 = IsWiden((TestDragon *)in_x0);
      if (cVar2 == '\0') {
        iVar4 = FUN_03723c98(*(undefined4 *)(in_x0 + 0x20c));
        if (iVar4 == 1) {
          pcVar17 = "tail_micro_re";
        }
        else {
          pcVar17 = "tail_re";
        }
      }
      else {
        pcVar17 = "tail_re_wide";
      }
    }
    else {
      cVar2 = IsWiden((TestDragon *)in_x0);
      if (cVar2 == '\0') {
        iVar4 = FUN_03723c98(*(undefined4 *)(in_x0 + 0x20c));
        if (iVar4 == 1) {
          pcVar17 = "04_micro_re";
        }
        else {
          pcVar17 = "04_re";
        }
      }
      else {
        pcVar17 = "04_re_wide";
      }
    }
  }
  std::string::string((string *)&local_48,pcVar17);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar11,(string *)&local_48,0,aDStack_38);
  std::string::~string((string *)&local_48);
  nop();
LAB_0378ffc8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TestDragon::AddInitUpdateInfo() */

void __thiscall TestDragon::AddInitUpdateInfo(TestDragon *this)

{
  SexyVector3 *pSVar1;
  SexyVector3 *pSVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)FUN_03723aec(*(undefined4 *)(this + 0xc4));
  pSVar1 = (SexyVector3 *)Projectile::GetVelocity((Projectile *)this);
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar4 = (float)PVZ_Dt();
  addLastUpdateInfo(this,fVar3,pSVar1,pSVar2,fVar4);
  return;
}

