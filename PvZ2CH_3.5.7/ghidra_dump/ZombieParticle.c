// Class: ZombieParticle


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticle::StaticClassInit() */

void ZombieParticle::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieParticle");
    (*pcVar2)(plVar1,asStack_10,FUN_046a6b18,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieParticle::StaticGetClass() */

long * ZombieParticle::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieParticle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieParticle::GetClass() const */

long * ZombieParticle::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieParticle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieParticle::SetRotation(float) */

void __thiscall ZombieParticle::SetRotation(ZombieParticle *this,float param_1)

{
  *(float *)(this + 0xb4) = param_1;
  return;
}


/* ZombieParticle::SetScale(float) */

void __thiscall ZombieParticle::SetScale(ZombieParticle *this,float param_1)

{
  *(float *)(this + 0xb8) = param_1;
  return;
}


/* ZombieParticle::calcBounceGroundLine() const */

void __thiscall ZombieParticle::calcBounceGroundLine(ZombieParticle *this)

{
  FUN_046a55f8((float)(*(int *)(this + 0xd4) + *(int *)(this + 0xd8)) * 0.25);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticle::onBeganBounceMotion() */

void __thiscall ZombieParticle::onBeganBounceMotion(ZombieParticle *this)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  this[200] = (ZombieParticle)0x0;
  local_8 = ___stack_chk_guard;
  fVar2 = (float)calcBounceGroundLine(this);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  if (*(float *)(puVar1 + 1) < fVar2) {
    local_18 = *puVar1;
    local_10 = fVar2 + 1.0;
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieParticle::IsInSky() const */

void __thiscall ZombieParticle::IsInSky(ZombieParticle *this)

{
  SexyVector3 *pSVar1;
  
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Board::IsSky(*(Board **)(gLawnApp + 0x9f0),pSVar1);
  return;
}


/* ZombieParticle::IsDropingInSky() const */

undefined8 __thiscall ZombieParticle::IsDropingInSky(ZombieParticle *this)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_EOT();
  if (fVar2 <= *(float *)(this + 0xc4)) {
    return 0;
  }
  uVar1 = IsInSky(this);
  return uVar1;
}


/* ZombieParticle::onHitGround() */

void __thiscall ZombieParticle::onHitGround(ZombieParticle *this)

{
  char cVar1;
  SexyVector3 *pSVar2;
  
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar2,(BoardEntity *)this);
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar2);
  if ((cVar1 == '\0') &&
     (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),pSVar2), cVar1 == '\0')) {
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* ZombieParticle::CancelFadeOutAndDestroy() */

void __thiscall ZombieParticle::CancelFadeOutAndDestroy(ZombieParticle *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xc4) = uVar1;
  return;
}


/* ZombieParticle::ZombieParticle() */

void __thiscall ZombieParticle::ZombieParticle(ZombieParticle *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_068a9df0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieParticle_068a9fd8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  Sexy::Insets::Insets((Insets *)(this + 0xcc));
  DVec3::DVec3((DVec3 *)(this + 0xdc));
  DVec3::DVec3((DVec3 *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0xf4));
  Set8BytesTo0(this + 0x108);
  return;
}


/* ZombieParticle::StaticNew() */

ZombieParticle * ZombieParticle::StaticNew(void)

{
  ZombieParticle *this;
  
  this = ::operator_new(0x120);
  ZombieParticle(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticle::onPostLoad() */

void __thiscall ZombieParticle::onPostLoad(ZombieParticle *this)

{
  PopAnimRig *this_00;
  long lVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18);
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  lVar1 = PopAnimRig::CalcSymbolRect(this_00,(string *)(this + 0x108),(TRect *)aIStack_18);
  *(long *)(this + 0x118) = lVar1;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 10) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieParticle::SetLayerVisibility(std::string const&, bool) */

void __thiscall
ZombieParticle::SetLayerVisibility(ZombieParticle *this,string *param_1,bool param_2)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  PopAnimRig::SetLayerVisibility(this_00,param_1,param_2);
  return;
}


/* ZombieParticle::~ZombieParticle() */

void __thiscall ZombieParticle::~ZombieParticle(ZombieParticle *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0xa8);
  *(undefined ***)this = &PTR_GetClass_068a9df0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieParticle_068a9fd8;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  std::string::~string((string *)(this + 0x108));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to ZombieParticle::~ZombieParticle() */

void __thiscall ZombieParticle::~ZombieParticle(ZombieParticle *this)

{
  ~ZombieParticle(this + -0x10);
  return;
}


/* ZombieParticle::~ZombieParticle() */

void __thiscall ZombieParticle::~ZombieParticle(ZombieParticle *this)

{
  ~ZombieParticle(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieParticle::~ZombieParticle() */

void __thiscall ZombieParticle::~ZombieParticle(ZombieParticle *this)

{
  ~ZombieParticle(this + -0x10);
  return;
}


/* ZombieParticle::SetAttribute(ZombieParticleAttribute, bool) */

void ZombieParticle::SetAttribute(long param_1)

{
  SetFlag<DebugLogFlags>(param_1 + 0x114);
  return;
}


/* ZombieParticle::HasAttribute(ZombieParticleAttribute) const */

bool ZombieParticle::HasAttribute(long param_1)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(param_1 + 0x114));
  return bVar1;
}


/* ZombieParticle::onInitialized() */

void __thiscall ZombieParticle::onInitialized(ZombieParticle *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0x3f800000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0xc0) = uVar1;
  uVar1 = PVZ_EOT();
  this[200] = (ZombieParticle)0x0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0xc4) = uVar1;
  return;
}


/* ZombieParticle::SetMotionType(ZombieParticleMotionType) */

void __thiscall ZombieParticle::SetMotionType(ZombieParticle *this,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x110) != param_2) {
    *(int *)(this + 0x110) = param_2;
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0xc0) = uVar1;
    if (*(int *)(this + 0x110) == 1) {
      onBeganBounceMotion(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticle::SetBounceMotionRandomlyFromZombie(Zombie*) */

void __thiscall
ZombieParticle::SetBounceMotionRandomlyFromZombie(ZombieParticle *this,Zombie *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  float local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  fVar7 = 1.0;
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_28 = *puVar2;
  local_20 = *(float *)(puVar2 + 1);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(param_1);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar8 = *(float *)(lVar3 + 0xc4);
  fVar6 = *(float *)(lVar3 + 200);
  fVar4 = (float)FUN_046a55f8((float)*(int *)(this + 0xf4) + (float)*(int *)(this + 0xfc) * 0.5);
  fVar5 = (float)Zombie::GetFacingMultiplier(param_1);
  local_28 = CONCAT44(local_28._4_4_,((float)local_28 + fVar4 * fVar5) - fVar8);
  fVar4 = (float)FUN_046a55f8((float)*(int *)(this + 0xf8) + (float)*(int *)(this + 0x100) * 0.5);
  local_20 = local_20 - (fVar4 - fVar6);
  (**(code **)(*(long *)this + 0x78))(this,&local_28);
  iVar1 = Sexy::Rand(2);
  if (iVar1 != 0) {
    fVar7 = -1.0;
  }
  fVar4 = 1.0;
  iVar1 = Sexy::Rand(2);
  if (iVar1 != 0) {
    fVar4 = -1.0;
  }
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,-1000.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xe8),(SexyVector3 *)aVStack_18);
  fVar5 = (float)Sexy::Rand(60.0);
  fVar6 = (float)Sexy::Rand(20.0);
  EATextSquish::Vec3::Vec3(aVStack_18,(fVar5 + 60.0) * fVar7,0.0,fVar6 + 175.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xdc),(SexyVector3 *)aVStack_18);
  fVar5 = (float)Sexy::Rand(3.1415927);
  *(float *)(this + 0xb0) = (fVar5 + 1.5707964) * fVar4;
  SetMotionType(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticle::SetBounceMotionWithVelocity(Sexy::SexyVector3) */

void ZombieParticle::SetBounceMotionWithVelocity
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,ZombieParticle *param_4)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,_FUN_046a5e08);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0xe8),(SexyVector3 *)aVStack_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0xdc),(SexyVector3 *)&local_30);
  SetMotionType(param_4,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieParticle::startFadeOutAndDestroy() */

void __thiscall ZombieParticle::startFadeOutAndDestroy(ZombieParticle *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_EOT();
  if (fVar1 <= *(float *)(this + 0xc4)) {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0xc4) = uVar2;
  }
  return;
}


/* ZombieParticle::getFadeOutAlpha() const */

float __thiscall ZombieParticle::getFadeOutAlpha(ZombieParticle *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_EOT();
  fVar2 = *(float *)(this + 0xc4);
  if ((fVar2 != fVar1) && (fVar1 = (float)PVZ_T(), fVar2 + 2.0 < fVar1)) {
    fVar1 = (float)PVZ_T();
    return 1.0 - ((-2.0 - *(float *)(this + 0xc4)) + fVar1) * 2.0;
  }
  return 1.0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticle::onDraw(Sexy::Graphics*) */

void __thiscall ZombieParticle::onDraw(ZombieParticle *this,Graphics *param_1)

{
  PopAnimRig *pPVar1;
  float fVar2;
  undefined4 uVar3;
  float local_48;
  float local_44;
  Insets aIStack_40 [16];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x118) != 0) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    fVar2 = (float)getFadeOutAlpha(this);
    Sexy::Insets::Insets(aIStack_40,0xff,0xff,0xff,(int)(fVar2 * 255.0));
    PopAnimRig::SetPAMColor(pPVar1,(Color *)aIStack_40);
    uVar3 = *(undefined4 *)(this + 0x1c);
    local_48 = (float)FUN_046a5578(*(undefined4 *)(this + 0x18),uVar3,*(undefined4 *)(this + 0x20));
    local_44 = (float)uVar3;
    fVar2 = (float)FUN_046a55d4();
    local_48 = (float)(int)((fVar2 - *(float *)(param_1 + 0x20)) * *(float *)(param_1 + 0x18)) +
               *(float *)(param_1 + 0x20);
    fVar2 = (float)FUN_046a55d4(uVar3);
    local_44 = (float)(int)((fVar2 - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x1c)) +
               *(float *)(param_1 + 0x24);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aIStack_40,
               (float)*(int *)(this + 0xcc) + (float)*(int *)(this + 0xd4) * 0.5,
               (float)*(int *)(this + 0xd0) + (float)*(int *)(this + 0xd8) * 0.5);
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyVector2 *)&local_48,*(float *)(this + 0xb4),
               *(float *)(this + 0xb8) * *(float *)(param_1 + 0x18),(SexyVector2 *)aIStack_40,true);
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    PopAnimRig::DrawSprite(pPVar1,param_1,*(PASpriteInst **)(this + 0x118),aSStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticle::updateBounceMotion() */

void __thiscall ZombieParticle::updateBounceMotion(ZombieParticle *this)

{
  SexyVector3 *this_00;
  char cVar1;
  undefined8 *puVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined4 local_68;
  float local_64;
  float local_60;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_48;
  float local_44;
  float local_40;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[200] == (ZombieParticle)0x0) {
    fVar5 = (float)PVZ_Dt();
    if (0.0 < fVar5) {
      this_00 = (SexyVector3 *)(this + 0xdc);
      puVar2 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      do {
        local_98 = *puVar2;
        local_90 = *(float *)(puVar2 + 1);
        local_88 = *(undefined8 *)this_00;
        local_80 = *(float *)(this + 0xe4);
        local_78 = *(undefined8 *)(this + 0xe8);
        local_70 = *(float *)(this + 0xf0);
        fVar6 = (float)calcBounceGroundLine(this);
        fVar6 = local_90 - fVar6;
        local_a0 = 0.0;
        local_9c = 0.0;
        fVar7 = local_80;
        cVar1 = Sexy::SexyMath::QuadraticFormula(local_70 * 0.5,local_80,fVar6,&local_a0,&local_9c);
        if (cVar1 == '\0') {
          this[200] = (ZombieParticle)0x1;
          goto LAB_046a648c;
        }
        pfVar3 = eastl::max_alt<float>(&local_a0,&local_9c);
        fVar8 = *pfVar3;
        if (fVar5 < fVar8) {
          pcVar4 = *(code **)(*(long *)this + 0x78);
          local_68 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_88,fVar5);
          local_64 = fVar7;
          local_60 = fVar6;
          local_58 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_98,(SexyVector3 *)&local_68)
          ;
          local_54 = fVar7;
          local_50 = fVar6;
          local_48 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_78,fVar5);
          local_44 = fVar7;
          local_40 = fVar6;
          local_38 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_48,fVar5);
          local_34 = fVar7;
          local_30 = fVar6;
          local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,0.5);
          local_24 = fVar7;
          local_20 = fVar6;
          local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_58,(SexyVector3 *)&local_28)
          ;
          local_14 = fVar7;
          local_10 = fVar6;
          (*pcVar4)(this,(SexyVector3 *)&local_18);
          local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_78,fVar5);
          local_24 = fVar7;
          local_20 = fVar6;
          local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_88,(SexyVector3 *)&local_28)
          ;
          local_14 = fVar7;
          local_10 = fVar6;
          Sexy::SexyVector3::operator=(this_00,(SexyVector3 *)&local_18);
          *(float *)(this + 0xb4) = *(float *)(this + 0xb4) + *(float *)(this + 0xb0) * fVar5;
          if (this[200] == (ZombieParticle)0x0) goto LAB_046a6094;
          goto LAB_046a648c;
        }
        pcVar4 = *(code **)(*(long *)this + 0x78);
        local_68 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_88,fVar8);
        local_64 = fVar7;
        local_60 = fVar6;
        local_58 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_98,(SexyVector3 *)&local_68);
        local_54 = fVar7;
        local_50 = fVar6;
        local_48 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_78,fVar8);
        local_44 = fVar7;
        local_40 = fVar6;
        local_38 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_48,fVar8);
        local_34 = fVar7;
        local_30 = fVar6;
        local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,0.5);
        local_24 = fVar7;
        local_20 = fVar6;
        local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_58,(SexyVector3 *)&local_28);
        local_14 = fVar7;
        local_10 = fVar6;
        (*pcVar4)(this,(SexyVector3 *)&local_18);
        local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_78,fVar8);
        local_24 = fVar7;
        local_20 = fVar6;
        local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_88,(SexyVector3 *)&local_28);
        local_14 = fVar7;
        local_10 = fVar6;
        Sexy::SexyVector3::operator=(this_00,(SexyVector3 *)&local_18);
        fVar7 = *(float *)(this + 0xb4) + *(float *)(this + 0xb0) * fVar8;
        *(float *)(this + 0xb4) = fVar7;
        local_18 = Sexy::SexyVector3::operator*(this_00,0.381966);
        local_14 = fVar7;
        local_10 = fVar6;
        Sexy::SexyVector3::operator=(this_00,(SexyVector3 *)&local_18);
        fVar7 = *(float *)(this + 0xe4);
        *(float *)(this + 0xe4) = -fVar7;
        *(float *)(this + 0xb0) = *(float *)(this + 0xb0) * 0.381966;
        if ((ABS(-fVar7) < 5.0) || (cVar1 = IsInSky(this), cVar1 != '\0')) {
          this[200] = (ZombieParticle)0x1;
          onHitGround(this);
          cVar1 = GameObject::IsDestroyed((GameObject *)this);
          if (cVar1 != '\0') goto LAB_046a6094;
          break;
        }
        fVar5 = fVar5 - fVar8;
        onHitGround(this);
        cVar1 = GameObject::IsDestroyed((GameObject *)this);
        if (cVar1 != '\0') goto LAB_046a6094;
      } while (0.0 < fVar5);
    }
    if (this[200] != (ZombieParticle)0x0) {
LAB_046a648c:
      startFadeOutAndDestroy(this);
    }
  }
LAB_046a6094:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticle::InSkyUpdate() */

void __thiscall ZombieParticle::InSkyUpdate(ZombieParticle *this)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  SexyVector3 *this_00;
  code *pcVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsDropingInSky(this);
  if (cVar2 != '\0') {
    fVar5 = (float)PVZ_Dt();
    uVar3 = (uint)*(float *)(this + 0xb0);
    uVar1 = (int)uVar3 >> 0x1f;
    *(float *)(this + 0xb4) =
         *(float *)(this + 0xb4) +
         fVar5 * (*(float *)(this + 0xb0) / (float)(int)((uVar3 ^ uVar1) - uVar1)) * 3.14;
    if (0.1 < *(float *)(this + 0xb8)) {
      fVar5 = (float)PVZ_Dt();
      *(float *)(this + 0xb8) = *(float *)(this + 0xb8) - fVar5 * 0.5;
    }
    pcVar4 = *(code **)(*(long *)this + 0x78);
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    uVar6 = 0;
    uVar7 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,2.0,0.0,0.0);
    local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
    local_14 = uVar6;
    local_10 = uVar7;
    (*pcVar4)(this,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieParticle::onUpdate() */

void __thiscall ZombieParticle::onUpdate(ZombieParticle *this)

{
  float fVar1;
  
  if (*(int *)(this + 0x110) == 1) {
    updateBounceMotion(this);
    InSkyUpdate(this);
    fVar1 = (float)getFadeOutAlpha(this);
  }
  else {
    InSkyUpdate(this);
    fVar1 = (float)getFadeOutAlpha(this);
  }
  if (fVar1 <= 0.0) {
    (**(code **)(*(long *)this + 0x48))(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticle::InitializeAnimation(ZombieAnimRig*, ZombieAnimRig*, std::vector<std::string,
   std::allocator<std::string > > const&, std::string const&, float) */

void __thiscall
ZombieParticle::InitializeAnimation
          (ZombieParticle *this,ZombieAnimRig *param_1,ZombieAnimRig *param_2,vector *param_3,
          string *param_4,float param_5)

{
  TRect *pTVar1;
  long lVar2;
  string *psVar3;
  ulong uVar4;
  PopAnimRig *this_00;
  ulong uVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  *(float *)(this + 0xbc) = param_5;
  thunk_FUN_05475e00((string *)(this + 0x108),param_4);
  pTVar1 = (TRect *)(this + 0xf4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,0,0);
  *(undefined8 *)pTVar1 = local_18;
  *(undefined8 *)(this + 0xfc) = uStack_10;
  lVar2 = FUN_046a5464(*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8));
  if (lVar2 != 0) {
    do {
      Sexy::Insets::Insets((Insets *)&local_28);
      psVar3 = (string *)FUN_046a5470(*(undefined8 *)param_3,uVar5);
      lVar2 = PopAnimRig::CalcSymbolRect((PopAnimRig *)param_1,psVar3,(TRect *)&local_28);
      if (lVar2 != 0) {
        if ((float)*(int *)(this + 0xfc) == 0.0) {
          *(undefined8 *)pTVar1 = local_28;
          *(undefined8 *)(this + 0xfc) = uStack_20;
        }
        else {
          Sexy::TRect<int>::Union(pTVar1);
          *(undefined8 *)pTVar1 = local_18;
          *(undefined8 *)(this + 0xfc) = uStack_10;
        }
      }
      uVar5 = uVar5 + 1;
      uVar4 = FUN_046a5464(*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8));
    } while (uVar5 < uVar4);
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  lVar2 = PopAnimRig::CalcSymbolRect(this_00,(string *)(this + 0x108),(TRect *)(this + 0xcc));
  *(long *)(this + 0x118) = lVar2;
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 10) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticle::InitializeAnimation(Zombie*, std::vector<std::string, std::allocator<std::string
   > > const&, std::string const&, float) */

void __thiscall
ZombieParticle::InitializeAnimation
          (ZombieParticle *this,Zombie *param_1,vector *param_2,string *param_3,float param_4)

{
  PopAnim *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RechargeRewardConfig *this_01;
  char *pcVar2;
  RtClass *pRVar3;
  ZombieAnimRig *extraout_x0;
  ZombieAnimRig *pZVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x3c8))(aRStack_30,param_1);
  pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  this_01 = (RechargeRewardConfig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  RechargeRewardConfig::getDefaultBanner(this_01);
  pcVar2 = (char *)FUN_0547429c();
  pRVar3 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar2);
  PopAnimRig::CreateRig(pPVar1,pRVar3);
  nop();
  pcVar5 = *(code **)(*(long *)extraout_x0 + 0x78);
  std::string::string(asStack_28,"particles");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar5)(extraout_x0,asStack_28,0,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  pZVar4 = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  InitializeAnimation(this,pZVar4,extraout_x0,param_2,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticle::onDrawShadow(Sexy::Graphics*) */

void __thiscall ZombieParticle::onDrawShadow(ZombieParticle *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_58;
  undefined4 local_54;
  Insets aIStack_50 [16];
  Insets aIStack_40 [16];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)getFadeOutAlpha(this);
  Sexy::Insets::Insets(aIStack_50,0xff,0xff,0xff,(int)(fVar6 * 255.0));
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0xd0))(&local_58,*(long **)(gLawnApp + 0x9f0));
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = FUN_046a55e4(local_58);
  fVar6 = *pfVar4;
  iVar2 = FUN_046a55e4(local_54);
  fVar11 = pfVar4[1];
  fVar6 = (float)FUN_046a55d4((float)iVar1 + fVar6);
  fVar8 = *(float *)(param_1 + 0x20);
  fVar10 = *(float *)(param_1 + 0x18);
  fVar11 = (float)FUN_046a55d4((float)iVar2 + fVar11);
  fVar9 = *(float *)(param_1 + 0x24);
  fVar7 = *(float *)(param_1 + 0x1c);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  TodScaleRotateTransformMatrix
            ((SexyMatrix3 *)aSStack_30,(float)(int)((fVar6 - fVar8) * fVar10) + fVar8,
             (float)(int)((fVar11 - fVar9) * fVar7) + fVar9,0.0,
             *(float *)(this + 0xbc) * *(float *)(param_1 + 0x18),
             *(float *)(this + 0xbc) * *(float *)(param_1 + 0x1c));
  pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06b1f470);
  iVar1 = *(int *)(param_1 + 0x78);
  this_00 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06b1f470);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06b1f470);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Insets::Insets(aIStack_40,0,0,iVar2,iVar3);
  TodBltMatrix(param_1,pIVar5,(SexyMatrix3 *)aSStack_30,(TRect *)(param_1 + 0x28),
               (Color *)aIStack_50,iVar1,(TRect *)aIStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieParticle::CalcRenderOrder() const */

void __thiscall ZombieParticle::CalcRenderOrder(ZombieParticle *this)

{
  char cVar1;
  
  cVar1 = IsDropingInSky(this);
  if (cVar1 == '\0') {
    BoardEntity::CalcRenderOrder((BoardEntity *)this);
    return;
  }
  Board::MakeRenderOrder(0x493e2,0xffffffff,0);
  return;
}


/* non-virtual thunk to ZombieParticle::CalcRenderOrder() const */

void __thiscall ZombieParticle::CalcRenderOrder(ZombieParticle *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}

