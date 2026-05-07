// Class: EgretflowerNormalProjectile


/* EgretflowerNormalProjectile::~EgretflowerNormalProjectile() */

void __thiscall
EgretflowerNormalProjectile::~EgretflowerNormalProjectile(EgretflowerNormalProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0681d840;
  *(undefined ***)(this + 0x10) = &PTR__EgretflowerNormalProjectile_0681da30;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to EgretflowerNormalProjectile::~EgretflowerNormalProjectile() */

void __thiscall
EgretflowerNormalProjectile::~EgretflowerNormalProjectile(EgretflowerNormalProjectile *this)

{
  ~EgretflowerNormalProjectile(this + -0x10);
  return;
}


/* EgretflowerNormalProjectile::~EgretflowerNormalProjectile() */

void __thiscall
EgretflowerNormalProjectile::~EgretflowerNormalProjectile(EgretflowerNormalProjectile *this)

{
  ~EgretflowerNormalProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EgretflowerNormalProjectile::~EgretflowerNormalProjectile() */

void __thiscall
EgretflowerNormalProjectile::~EgretflowerNormalProjectile(EgretflowerNormalProjectile *this)

{
  ~EgretflowerNormalProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerNormalProjectile::StaticClassInit() */

void EgretflowerNormalProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"EgretflowerNormalProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04262c00,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EgretflowerNormalProjectile::StaticGetClass() */

long * EgretflowerNormalProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EgretflowerNormalProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerNormalProjectile::GetClass() const */

long * EgretflowerNormalProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"EgretflowerNormalProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerNormalProjectile::EgretflowerNormalProjectile() */

void __thiscall
EgretflowerNormalProjectile::EgretflowerNormalProjectile(EgretflowerNormalProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (EgretflowerNormalProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_0681d840;
  *(undefined ***)(this + 0x10) = &PTR__EgretflowerNormalProjectile_0681da30;
  return;
}


/* EgretflowerNormalProjectile::StaticNew() */

EgretflowerNormalProjectile * EgretflowerNormalProjectile::StaticNew(void)

{
  EgretflowerNormalProjectile *this;
  
  this = ::operator_new(0x1a8);
  EgretflowerNormalProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerNormalProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
EgretflowerNormalProjectile::OnCollideEntity(EgretflowerNormalProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  ResourceInfo *pRVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  code *pcVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a5] == (EgretflowerNormalProjectile)0x0) {
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  else {
    uVar11 = 0;
    DamageInfo::DamageInfo(aDStack_68);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    iVar3 = BoardEntity::CalcColumnPosition(param_1);
    iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
    Sexy::Insets::Insets(aIStack_90,iVar3,iVar4,1,1);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar5,
               aIStack_90);
    uVar12 = local_80;
    lVar6 = FUN_04261b88(local_80,local_78);
    if (lVar6 != 0) {
      do {
        FUN_04261b94(uVar12,uVar11);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_98);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
        puVar7 = (undefined8 *)FUN_04261b94(local_80,uVar11);
        Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
        puVar7 = (undefined8 *)FUN_04261b94(local_80,uVar11);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_a0);
        if (cVar1 == '\0') {
LAB_04266618:
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        }
        else {
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a0);
          cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar8);
          if ((cVar1 == '\0') ||
             ((this_00 != (Zombie *)0x0 &&
              ((((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0' ||
                 (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 != '\0')) ||
                (cVar1 = Zombie::IsControlled(this_00), cVar1 != '\0')) ||
               (cVar1 = Zombie::IsInvisible(this_00), cVar1 != '\0')))))) goto LAB_04266618;
          pcVar13 = *(code **)(*(long *)this + 0x178);
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a0);
          (*pcVar13)(this,aDStack_68,pRVar8);
          plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
          (**(code **)(*plVar10 + 0x110))(plVar10,aDStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        }
        uVar12 = local_80;
        uVar11 = uVar11 + 1;
        uVar9 = FUN_04261b88(local_80,local_78);
      } while (uVar11 < uVar9);
    }
    uVar2 = (**(code **)(*(long *)this + 0x168))(this,param_1);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

