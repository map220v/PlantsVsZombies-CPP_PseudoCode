// Class: PrimalPeashooterSplitTargetProjectile


/* PrimalPeashooterSplitTargetProjectile::onProjectileInitialized() */

void __thiscall
PrimalPeashooterSplitTargetProjectile::onProjectileInitialized
          (PrimalPeashooterSplitTargetProjectile *this)

{
  this[0x1a5] = (PrimalPeashooterSplitTargetProjectile)0x0;
  this[0x1a6] = (PrimalPeashooterSplitTargetProjectile)0x0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterSplitTargetProjectile::InitialSetPosition(float, float, float) */

void __thiscall
PrimalPeashooterSplitTargetProjectile::InitialSetPosition
          (PrimalPeashooterSplitTargetProjectile *this,float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  SexyVector3 *pSVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  Vec3 aVStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_18,param_1,param_2,param_3);
  pSVar2 = (SexyVector3 *)
           Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x18),(SexyVector3 *)aVStack_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x78),pSVar2);
  uVar1 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(param_2);
  FUN_0434ad94(this + 0xa8,uVar1);
  *(undefined4 *)(this + 0xac) = uVar1;
  *(float *)(this + 0xd0) = param_3;
  uVar1 = Board::MakeRenderOrder(0x64960,uVar1,0);
  FUN_0434ada0(this + 0x50,uVar1);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar5 = pfVar3[2];
    fVar4 = (float)Board::calculateRoofOffsetZ(*pfVar3);
    *(float *)(this + 0x18c) = fVar5 - fVar4;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalPeashooterSplitTargetProjectile::~PrimalPeashooterSplitTargetProjectile() */

void __thiscall
PrimalPeashooterSplitTargetProjectile::~PrimalPeashooterSplitTargetProjectile
          (PrimalPeashooterSplitTargetProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067f8330;
  *(undefined ***)(this + 0x10) = &PTR__PrimalPeashooterSplitTargetProjectile_067f8520;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to
   PrimalPeashooterSplitTargetProjectile::~PrimalPeashooterSplitTargetProjectile() */

void __thiscall
PrimalPeashooterSplitTargetProjectile::~PrimalPeashooterSplitTargetProjectile
          (PrimalPeashooterSplitTargetProjectile *this)

{
  ~PrimalPeashooterSplitTargetProjectile(this + -0x10);
  return;
}


/* PrimalPeashooterSplitTargetProjectile::~PrimalPeashooterSplitTargetProjectile() */

void __thiscall
PrimalPeashooterSplitTargetProjectile::~PrimalPeashooterSplitTargetProjectile
          (PrimalPeashooterSplitTargetProjectile *this)

{
  ~PrimalPeashooterSplitTargetProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   PrimalPeashooterSplitTargetProjectile::~PrimalPeashooterSplitTargetProjectile() */

void __thiscall
PrimalPeashooterSplitTargetProjectile::~PrimalPeashooterSplitTargetProjectile
          (PrimalPeashooterSplitTargetProjectile *this)

{
  ~PrimalPeashooterSplitTargetProjectile(this + -0x10);
  return;
}


/* PrimalPeashooterSplitTargetProjectile::OnCollideGround() */

undefined8 __thiscall
PrimalPeashooterSplitTargetProjectile::OnCollideGround(PrimalPeashooterSplitTargetProjectile *this)

{
  undefined4 uVar1;
  long lVar2;
  
  this[0x1a5] = (PrimalPeashooterSplitTargetProjectile)0x1;
  Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
  Projectile::SetAcceleration((Projectile *)this,0.0,0.0,0.0);
  FUN_04181350(this + 0xc4);
  FUN_04181344(this + 0xcc);
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  uVar1 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(*(float *)(lVar2 + 4));
  FUN_04181284(this + 0xa8,uVar1);
  uVar1 = Board::MakeRenderOrder(0x61cd8,uVar1,0);
  FUN_0418128c(this + 0x50,uVar1);
  return 1;
}


/* PrimalPeashooterSplitTargetProjectile::PrimalPeashooterSplitTargetProjectile() */

void __thiscall
PrimalPeashooterSplitTargetProjectile::PrimalPeashooterSplitTargetProjectile
          (PrimalPeashooterSplitTargetProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067f8330;
  *(undefined ***)(this + 0x10) = &PTR__PrimalPeashooterSplitTargetProjectile_067f8520;
  return;
}


/* PrimalPeashooterSplitTargetProjectile::StaticNew() */

PrimalPeashooterSplitTargetProjectile * PrimalPeashooterSplitTargetProjectile::StaticNew(void)

{
  PrimalPeashooterSplitTargetProjectile *this;
  
  this = ::operator_new(0x1b0);
  PrimalPeashooterSplitTargetProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterSplitTargetProjectile::StaticClassInit() */

void PrimalPeashooterSplitTargetProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimalPeashooterSplitTargetProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04182824,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalPeashooterSplitTargetProjectile::StaticGetClass() */

long * PrimalPeashooterSplitTargetProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PrimalPeashooterSplitTargetProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalPeashooterSplitTargetProjectile::GetClass() const */

long * PrimalPeashooterSplitTargetProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PrimalPeashooterSplitTargetProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalPeashooterSplitTargetProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
PrimalPeashooterSplitTargetProjectile::OnCollideEntity
          (PrimalPeashooterSplitTargetProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  
  if ((((this[0x1a5] != (PrimalPeashooterSplitTargetProjectile)0x0) &&
       (this[0x1a6] == (PrimalPeashooterSplitTargetProjectile)0x0)) &&
      (param_1 != (BoardEntity *)0x0)) &&
     ((pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar2 != (Zombie *)0x0 &&
      (cVar1 = (**(code **)(*(long *)pZVar2 + 0x328))(), cVar1 == '\0')))) {
    (**(code **)(*(long *)this + 0x1b0))(this,param_1);
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterSplitTargetProjectile::onUpdate(float) */

void __thiscall
PrimalPeashooterSplitTargetProjectile::onUpdate
          (PrimalPeashooterSplitTargetProjectile *this,float param_1)

{
  long extraout_x0;
  PopAnimRig *pPVar1;
  char *__s;
  float fVar2;
  PopAnimRig *local_88;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1a5] != (PrimalPeashooterSplitTargetProjectile)0x0) &&
     (this[0x1a6] == (PrimalPeashooterSplitTargetProjectile)0x0)) {
    fVar2 = *(float *)(this + 0x1a8);
    *(float *)(this + 0x1a8) = param_1 + fVar2;
    Projectile::GetProps((Projectile *)this);
    nop();
    if (*(float *)(extraout_x0 + 0x1e0) <= param_1 + fVar2) {
      this[0x1a6] = (PrimalPeashooterSplitTargetProjectile)0x1;
      if (*(int *)(this + 0x1ac) == 0) {
        pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        std::string::string(asStack_58,"end");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string(asStack_60,"onAnimStopped");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_68,asStack_60);
        PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_60);
        nop();
        Sexy::RtId::~RtId(aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_58);
        nop();
      }
      else {
        if (*(int *)(this + 0x1ac) == 1) {
          local_88 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
          __s = "end2";
        }
        else {
          local_88 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
          __s = "end3";
        }
        std::string::string(asStack_58,__s);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string(asStack_60,"onAnimStopped");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_68,asStack_60);
        PopAnimRig::PlayAndStop(local_88,asStack_58,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_60);
        nop();
        Sexy::RtId::~RtId(aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_58);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterSplitTargetProjectile::setStartDirect(int) */

void __thiscall
PrimalPeashooterSplitTargetProjectile::setStartDirect
          (PrimalPeashooterSplitTargetProjectile *this,int param_1)

{
  int iVar1;
  PopAnimRig *pPVar2;
  char *pcVar3;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 0) {
    iVar1 = Sexy::Rand();
    iVar1 = iVar1 % 3;
    *(int *)(this + 0x1ac) = iVar1;
    if (iVar1 == 0) {
      pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string(asStack_58,"spawn1");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
    else {
      if (iVar1 == 1) {
        pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        pcVar3 = "spawn2";
      }
      else {
        pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        pcVar3 = "spawn3";
      }
      std::string::string(asStack_58,pcVar3);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
  }
  else if (param_1 == 0) {
    pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    std::string::string(asStack_58,"split_right");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
  }
  else {
    if (param_1 == 1) {
      pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      pcVar3 = "split_left";
    }
    else if (param_1 == 2) {
      pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      pcVar3 = "split_up";
    }
    else {
      if (param_1 != 3) goto LAB_04183460;
      pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      pcVar3 = "split_down";
    }
    std::string::string(asStack_58,pcVar3);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
  }
LAB_04183460:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterSplitTargetProjectile::onAnimStopped(std::string const&) */

void __thiscall
PrimalPeashooterSplitTargetProjectile::onAnimStopped
          (PrimalPeashooterSplitTargetProjectile *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  DummyInit *local_58;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"split_right");
  if ((((bVar1) || (bVar1 = std::operator==(param_1,"split_left"), bVar1)) ||
      (bVar1 = std::operator==(param_1,"split_up"), bVar1)) ||
     (bVar1 = std::operator==(param_1,"split_down"), bVar1)) {
    setStartDirect(this,-1);
  }
  else {
    bVar1 = std::operator==(param_1,"spawn1");
    if (bVar1) {
      pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string(asStack_40,"loop1");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    }
    else {
      bVar1 = std::operator==(param_1,"spawn2");
      if (bVar1) {
        pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        std::string::string(asStack_40,"loop2");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      }
      else {
        bVar1 = std::operator==(param_1,"spawn3");
        if (!bVar1) {
          bVar1 = std::operator==(param_1,"end");
          if (((bVar1) || (bVar1 = std::operator==(param_1,"end2"), bVar1)) ||
             (bVar1 = std::operator==(param_1,"end3"), bVar1)) {
            (**(code **)(*(long *)this + 0x48))(this);
          }
          goto LAB_0418389c;
        }
        pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        std::string::string(asStack_40,"loop3");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      }
    }
    local_58 = aDStack_38;
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,local_58);
    std::string::~string(asStack_40);
    nop();
  }
LAB_0418389c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

