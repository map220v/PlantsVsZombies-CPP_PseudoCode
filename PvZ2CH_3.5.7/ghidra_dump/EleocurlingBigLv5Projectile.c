// Class: EleocurlingBigLv5Projectile


/* EleocurlingBigLv5Projectile::~EleocurlingBigLv5Projectile() */

void __thiscall
EleocurlingBigLv5Projectile::~EleocurlingBigLv5Projectile(EleocurlingBigLv5Projectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06813430;
  *(undefined ***)(this + 0x10) = &PTR__EleocurlingBigLv5Projectile_06813620;
  CurlingCollidableProjectile::~CurlingCollidableProjectile((CurlingCollidableProjectile *)this);
  return;
}


/* non-virtual thunk to EleocurlingBigLv5Projectile::~EleocurlingBigLv5Projectile() */

void __thiscall
EleocurlingBigLv5Projectile::~EleocurlingBigLv5Projectile(EleocurlingBigLv5Projectile *this)

{
  ~EleocurlingBigLv5Projectile(this + -0x10);
  return;
}


/* EleocurlingBigLv5Projectile::~EleocurlingBigLv5Projectile() */

void __thiscall
EleocurlingBigLv5Projectile::~EleocurlingBigLv5Projectile(EleocurlingBigLv5Projectile *this)

{
  ~EleocurlingBigLv5Projectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EleocurlingBigLv5Projectile::~EleocurlingBigLv5Projectile() */

void __thiscall
EleocurlingBigLv5Projectile::~EleocurlingBigLv5Projectile(EleocurlingBigLv5Projectile *this)

{
  ~EleocurlingBigLv5Projectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingBigLv5Projectile::StaticClassInit() */

void EleocurlingBigLv5Projectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"EleocurlingBigLv5Projectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04236078,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EleocurlingBigLv5Projectile::StaticGetClass() */

long * EleocurlingBigLv5Projectile::StaticGetClass(void)

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
  uVar2 = CurlingCollidableProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"EleocurlingBigLv5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EleocurlingBigLv5Projectile::GetClass() const */

long * EleocurlingBigLv5Projectile::GetClass(void)

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
  uVar2 = CurlingCollidableProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"EleocurlingBigLv5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EleocurlingBigLv5Projectile::EleocurlingBigLv5Projectile() */

void __thiscall
EleocurlingBigLv5Projectile::EleocurlingBigLv5Projectile(EleocurlingBigLv5Projectile *this)

{
  CurlingCollidableProjectile::CurlingCollidableProjectile((CurlingCollidableProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06813430;
  *(undefined ***)(this + 0x10) = &PTR__EleocurlingBigLv5Projectile_06813620;
  return;
}


/* EleocurlingBigLv5Projectile::StaticNew() */

EleocurlingBigLv5Projectile * EleocurlingBigLv5Projectile::StaticNew(void)

{
  EleocurlingBigLv5Projectile *this;
  
  this = ::operator_new(0x1c0);
  EleocurlingBigLv5Projectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingBigLv5Projectile::OnCollideEntity(BoardEntity*) */

void __thiscall
EleocurlingBigLv5Projectile::OnCollideEntity(EleocurlingBigLv5Projectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  CurlingItem *pCVar5;
  float *pfVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    cVar1 = CurlingProjectile::ProcessCurlingCollision((CurlingProjectile *)this,param_1);
    uVar2 = 0;
    if (cVar1 == '\0') goto LAB_0423a6a8;
    Sexy::Point::Point((Point *)&local_18);
    BoardEntity::CalcGridPosition();
    local_18 = local_10;
    pCVar5 = Sexy::RtObject::Cast<CurlingItem>((RtObject *)param_1);
    if (pCVar5 != (CurlingItem *)0x0) {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      iVar3 = BoardTransforms::BoardSpaceToGridX(*pfVar6);
      iVar4 = BoardTransforms::BoardSpaceToGridX(pfVar6[1]);
      Sexy::Point::Point((Point *)&local_10,iVar3,iVar4);
      local_18 = local_10;
    }
    std::string::string((string *)&local_10,"curlingitem_big");
    CurlingProjectile::CreateCurlingAt
              ((CurlingProjectile *)this,(string *)&local_10,(Point *)&local_18,true);
    std::string::~string((string *)&local_10);
    nop();
    CurlingProjectile::DamageGridZombies((CurlingProjectile *)this,param_1,false);
  }
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
LAB_0423a6a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

