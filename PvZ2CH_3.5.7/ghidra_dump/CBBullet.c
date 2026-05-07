// Class: CBBullet


/* CBBullet::~CBBullet() */

void __thiscall CBBullet::~CBBullet(CBBullet *this)

{
  *(undefined ***)this = &PTR_GetClass_067efad0;
  *(undefined ***)(this + 0x10) = &PTR__CBBullet_067efcc0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CBBullet::~CBBullet() */

void __thiscall CBBullet::~CBBullet(CBBullet *this)

{
  ~CBBullet(this + -0x10);
  return;
}


/* CBBullet::~CBBullet() */

void __thiscall CBBullet::~CBBullet(CBBullet *this)

{
  ~CBBullet(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CBBullet::~CBBullet() */

void __thiscall CBBullet::~CBBullet(CBBullet *this)

{
  ~CBBullet(this + -0x10);
  return;
}


/* CBBullet::onDeflection(BoardEntity*) */

void CBBullet::onDeflection(BoardEntity *param_1)

{
  FUN_0414575c(0,param_1 + 0xc4);
  param_1[0x1a5] = (BoardEntity)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBBullet::StaticClassInit() */

void CBBullet::StaticClassInit(void)

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
    std::string::string(asStack_10,"CBBullet");
    (*pcVar2)(plVar1,asStack_10,FUN_04146d94,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CBBullet::StaticGetClass() */

long * CBBullet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CBBullet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CBBullet::GetClass() const */

long * CBBullet::GetClass(void)

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
  (*pcVar3)(plVar1,"CBBullet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CBBullet::CBBullet() */

void __thiscall CBBullet::CBBullet(CBBullet *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (CBBullet)0x0;
  *(undefined ***)this = &PTR_GetClass_067efad0;
  *(undefined ***)(this + 0x10) = &PTR__CBBullet_067efcc0;
  return;
}


/* CBBullet::StaticNew() */

CBBullet * CBBullet::StaticNew(void)

{
  CBBullet *this;
  
  this = ::operator_new(0x1a8);
  CBBullet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBBullet::SetTargetPos(Sexy::Point) */

void __thiscall CBBullet::SetTargetPos(CBBullet *this,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  DVec3 *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  int local_40;
  int local_3c;
  undefined8 local_38;
  int local_30;
  Vec3 aVStack_28 [16];
  float local_18;
  float local_14;
  float local_10;
  long local_8;
  
  uVar1 = *param_2;
  local_8 = ___stack_chk_guard;
  if ((uVar1 == 0xffffffff) || (uVar2 = param_2[1], uVar2 == 0xffffffff)) {
    uVar1 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
    *param_2 = uVar1;
    uVar2 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
    uVar1 = *param_2;
    param_2[1] = uVar2;
  }
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_38 = *puVar3;
  local_30 = *(int *)(puVar3 + 1);
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)uVar1,uVar2,local_30);
  fVar6 = 0.0;
  fVar5 = (float)local_3c;
  EATextSquish::Vec3::Vec3(aVStack_28,(float)local_40,fVar5,0.0);
  fVar4 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)aVStack_28,(SexyVector3 *)&local_38);
  local_18 = fVar4;
  local_14 = fVar5;
  local_10 = fVar6;
  fVar5 = atanf((fVar6 - fVar5) / fVar4);
  if (fVar4 < 0.0) {
    fVar5 = fVar5 + 3.1415927;
  }
  FUN_0414575c(fVar5 + 1.5707964,this + 0xc4);
  this_00 = (DVec3 *)Projectile::GetVelocity((Projectile *)this);
  fVar4 = (float)DVec3::getLength(this_00);
  fVar6 = cosf(fVar5);
  fVar5 = sinf(fVar5);
  Projectile::SetVelocity((Projectile *)this,fVar6 * fVar4,-(fVar5 * fVar4),0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBBullet::getCollisionEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   Sexy::TRect<int> const&) const */

void __thiscall CBBullet::getCollisionEntities(CBBullet *this,vector *param_1,TRect *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = BoardConstants::NUMBER_OF_ROWS();
  local_c = 0;
  cVar1 = (**(code **)(*(long *)this + 0xb8))(this,8);
  if (cVar1 != '\0') {
    operator|=(&local_c,4);
  }
  cVar1 = (**(code **)(*(long *)this + 0xb8))(this,7);
  if (cVar1 != '\0') {
    operator|=(&local_c,2);
  }
  cVar1 = (**(code **)(*(long *)this + 0xb8))(this,0xf0);
  if (cVar1 != '\0') {
    operator|=(&local_c,1);
  }
  EntityFinder::GetEntitiesTouchingRectangle(param_1,local_c,param_2,0,uVar2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,bool(*)(BoardEntity*,BoardEntity*)>
            (uVar3,uVar4,BoardEntity::BoardEntityLeftToRightSortFunc);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

