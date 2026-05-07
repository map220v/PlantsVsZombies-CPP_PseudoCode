// Class: VanillaPlantFoodProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaPlantFoodProjectile::StaticClassInit() */

void VanillaPlantFoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"VanillaPlantFoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03965a00,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanillaPlantFoodProjectile::StaticGetClass() */

long * VanillaPlantFoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VanillaPlantFoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaPlantFoodProjectile::GetClass() const */

long * VanillaPlantFoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"VanillaPlantFoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaPlantFoodProjectile::ZombieCanBeFlickedOff(Zombie const*) */

bool __thiscall
VanillaPlantFoodProjectile::ZombieCanBeFlickedOff(VanillaPlantFoodProjectile *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x3f0))(param_1);
  if ((cVar1 != '\0') && (iVar2 = Zombie::GetSizeType(param_1), iVar2 != 2)) {
    iVar2 = Zombie::GetSizeType(param_1);
    return iVar2 != 1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaPlantFoodProjectile::moveThroughTime(float) */

void __thiscall
VanillaPlantFoodProjectile::moveThroughTime(VanillaPlantFoodProjectile *this,float param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar3);
  iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar3[1]);
  Sexy::Point::Point((Point *)&local_20,iVar1,iVar2);
  puVar4 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
  uVar5 = *puVar4;
  local_10 = *(undefined4 *)(puVar4 + 1);
  local_18._0_4_ = (undefined4)uVar5;
  local_18._4_4_ = (float)((ulong)uVar5 >> 0x20);
  if (local_1c < 1) {
    local_18 = CONCAT44(ABS(local_18._4_4_),(undefined4)local_18);
    Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_18);
    uVar5 = local_18;
  }
  else if (5 < local_1c) {
    local_18 = CONCAT44(-ABS(local_18._4_4_),(undefined4)local_18);
    Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_18);
    uVar5 = local_18;
  }
  local_18 = uVar5;
  if (local_20 < 0) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    Projectile::moveThroughTime((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanillaPlantFoodProjectile::~VanillaPlantFoodProjectile() */

void __thiscall
VanillaPlantFoodProjectile::~VanillaPlantFoodProjectile(VanillaPlantFoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066d5b70;
  *(undefined ***)(this + 0x10) = &PTR__VanillaPlantFoodProjectile_066d5d60;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to VanillaPlantFoodProjectile::~VanillaPlantFoodProjectile() */

void __thiscall
VanillaPlantFoodProjectile::~VanillaPlantFoodProjectile(VanillaPlantFoodProjectile *this)

{
  ~VanillaPlantFoodProjectile(this + -0x10);
  return;
}


/* VanillaPlantFoodProjectile::~VanillaPlantFoodProjectile() */

void __thiscall
VanillaPlantFoodProjectile::~VanillaPlantFoodProjectile(VanillaPlantFoodProjectile *this)

{
  ~VanillaPlantFoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VanillaPlantFoodProjectile::~VanillaPlantFoodProjectile() */

void __thiscall
VanillaPlantFoodProjectile::~VanillaPlantFoodProjectile(VanillaPlantFoodProjectile *this)

{
  ~VanillaPlantFoodProjectile(this + -0x10);
  return;
}


/* VanillaPlantFoodProjectile::VanillaPlantFoodProjectile() */

void __thiscall
VanillaPlantFoodProjectile::VanillaPlantFoodProjectile(VanillaPlantFoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_066d5b70;
  *(undefined ***)(this + 0x10) = &PTR__VanillaPlantFoodProjectile_066d5d60;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  return;
}


/* VanillaPlantFoodProjectile::StaticNew() */

VanillaPlantFoodProjectile * VanillaPlantFoodProjectile::StaticNew(void)

{
  VanillaPlantFoodProjectile *this;
  
  this = ::operator_new(0x1b8);
  VanillaPlantFoodProjectile(this);
  return this;
}


/* VanillaPlantFoodProjectile::MakePositionAdjustment() */

void __thiscall VanillaPlantFoodProjectile::MakePositionAdjustment(VanillaPlantFoodProjectile *this)

{
  RtObject *this_00;
  VanillaPlantFoodProjectileProps *pVVar1;
  float *pfVar2;
  
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pVVar1 = Sexy::RtObject::Cast<VanillaPlantFoodProjectileProps>(this_00);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Projectile::SetPosition
            ((Projectile *)this,*pfVar2 + *(float *)(pVVar1 + 0x1e4),
             pfVar2[1] + *(float *)(pVVar1 + 0x1e8),pfVar2[2]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaPlantFoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
VanillaPlantFoodProjectile::OnCollideEntity(VanillaPlantFoodProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Zombie *this_00;
  float *pfVar4;
  RtObject *pRVar5;
  VanillaPlantFoodProjectileProps *pVVar6;
  long extraout_x0;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  DamageInfo *pDVar11;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  Vec3 aVStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) {
    Sexy::OutputDebugStrF
              ((wchar_t *)"VanillaPlantFoodProjectile::OnCollideEntity m_AttackTimes = %d",
               (ulong)*(uint *)(this + 0x1ac));
    cVar1 = ZombieCanBeFlickedOff(this,this_00);
    if (cVar1 == '\0') {
      pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)this);
      pVVar6 = Sexy::RtObject::Cast<VanillaPlantFoodProjectileProps>(pRVar5);
                    /* WARNING: Load size is inaccurate */
      pDVar11._0_4_ = *(DamageInfo **)(pVVar6 + 0x1e0);
      pcVar7 = *(code **)(*(long *)this_00 + 0x110);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo(pDVar11._0_4_,local_70,local_6c,(DamageInfo *)aVStack_68,aPStack_78,0);
      (*pcVar7)(this_00,(DamageInfo *)aVStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aVStack_68);
      pRVar5 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
      if ((pRVar5 != (RtObject *)0x0) && (bVar2 = Sexy::RtObject::IsA<Plant>(pRVar5), bVar2)) {
        nop();
        nop();
        if (((extraout_x0 != 0) &&
            (cVar1 = Plant::GetAvatarEnable(*(Plant **)(extraout_x0 + 0x10)), cVar1 != '\0')) &&
           (((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0' ||
             (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) ||
            (cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0')))) {
          iVar3 = Zombie::GetSizeType(this_00);
          if (iVar3 == 1) {
            pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)this);
            pVVar6 = Sexy::RtObject::Cast<VanillaPlantFoodProjectileProps>(pRVar5);
            fVar8 = *(float *)(pVVar6 + 0x1ec);
            fVar10 = (float)Sexy::Rand(1.0);
            if (fVar8 < fVar10) {
              Zombie::ApplyCondition((Zombie *)0x40000000,0,this_00,0,1);
            }
            else {
              Zombie::ApplyCondition((Zombie *)0x40000000,0,this_00,1,1);
            }
          }
          else {
            cVar1 = Zombie::IsBoss(this_00);
            if (((cVar1 == '\0') &&
                (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
               ((iVar3 = Zombie::GetSizeType(this_00), iVar3 == 2 &&
                (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))) {
              Zombie::ApplyCondition((Zombie *)0x40000000,0,this_00,0,1);
            }
          }
        }
      }
    }
    else {
      if (*(int *)(this + 0x1ac) + 1 < 5) {
        *(int *)(this + 0x1ac) = *(int *)(this + 0x1ac) + 1;
      }
      else {
        *(undefined4 *)(this + 0x1ac) = 0;
        (**(code **)(*(long *)this + 0x48))(this);
      }
      pfVar4 = (float *)Projectile::GetVelocity((Projectile *)this);
      if (*pfVar4 < 0.0) {
        fVar10 = -850.0;
      }
      else {
        fVar10 = 850.0;
      }
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
      fVar9 = pfVar4[1];
      fVar8 = *pfVar4;
      local_70 = 0x43160000;
      pfVar4 = eastl::max_alt<float>((float *)&local_70,pfVar4 + 2);
      EATextSquish::Vec3::Vec3(aVStack_68,fVar10 + fVar8,fVar9,*pfVar4);
      Zombie::FlickOff((SexyVector3 *)this_00,400.0,-1120.0);
      std::string::string((string *)&local_70,"Play_UI_PowerUp_Flick_Secondary");
      RealObject::PlayPositionalSound((RealObject *)this_00,(string *)&local_70,0.0);
      std::string::~string((string *)&local_70);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

