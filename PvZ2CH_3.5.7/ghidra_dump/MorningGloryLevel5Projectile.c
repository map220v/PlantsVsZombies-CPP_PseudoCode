// Class: MorningGloryLevel5Projectile


/* MorningGloryLevel5Projectile::~MorningGloryLevel5Projectile() */

void __thiscall
MorningGloryLevel5Projectile::~MorningGloryLevel5Projectile(MorningGloryLevel5Projectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067f63f0;
  *(undefined ***)(this + 0x10) = &PTR__MorningGloryLevel5Projectile_067f65e0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MorningGloryLevel5Projectile::~MorningGloryLevel5Projectile() */

void __thiscall
MorningGloryLevel5Projectile::~MorningGloryLevel5Projectile(MorningGloryLevel5Projectile *this)

{
  ~MorningGloryLevel5Projectile(this + -0x10);
  return;
}


/* MorningGloryLevel5Projectile::~MorningGloryLevel5Projectile() */

void __thiscall
MorningGloryLevel5Projectile::~MorningGloryLevel5Projectile(MorningGloryLevel5Projectile *this)

{
  ~MorningGloryLevel5Projectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MorningGloryLevel5Projectile::~MorningGloryLevel5Projectile() */

void __thiscall
MorningGloryLevel5Projectile::~MorningGloryLevel5Projectile(MorningGloryLevel5Projectile *this)

{
  ~MorningGloryLevel5Projectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryLevel5Projectile::StaticClassInit() */

void MorningGloryLevel5Projectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"MorningGloryLevel5Projectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04176c14,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MorningGloryLevel5Projectile::StaticGetClass() */

long * MorningGloryLevel5Projectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MorningGloryLevel5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MorningGloryLevel5Projectile::GetClass() const */

long * MorningGloryLevel5Projectile::GetClass(void)

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
  (*pcVar3)(plVar1,"MorningGloryLevel5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryLevel5Projectile::getCollisionEntities(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&, Sexy::TRect<int> const&) const */

void __thiscall
MorningGloryLevel5Projectile::getCollisionEntities
          (MorningGloryLevel5Projectile *this,vector *param_1,TRect *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04175c54(*(undefined4 *)(this + 0xa8));
  local_c = iVar3 + -1;
  local_10 = 0;
  piVar4 = eastl::max_alt<int>(&local_10,&local_c);
  iVar1 = *piVar4;
  local_10 = BoardConstants::NUMBER_OF_ROWS();
  local_10 = local_10 + -1;
  local_c = iVar3 + 1;
  piVar4 = eastl::min_alt<int>(&local_10,&local_c);
  iVar3 = *piVar4;
  local_c = 0;
  cVar2 = (**(code **)(*(long *)this + 0xb8))(this,8);
  if (cVar2 != '\0') {
    operator|=(&local_c,4);
  }
  cVar2 = (**(code **)(*(long *)this + 0xb8))(this,7);
  if (cVar2 != '\0') {
    operator|=(&local_c,2);
  }
  cVar2 = (**(code **)(*(long *)this + 0xb8))(this,0xf0);
  if (cVar2 != '\0') {
    operator|=(&local_c,1);
  }
  EntityFinder::GetEntitiesTouchingRectangle(param_1,local_c,param_2,iVar1,iVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MorningGloryLevel5Projectile::MorningGloryLevel5Projectile() */

void __thiscall
MorningGloryLevel5Projectile::MorningGloryLevel5Projectile(MorningGloryLevel5Projectile *this)

{
  float fVar1;
  
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067f63f0;
  *(undefined ***)(this + 0x10) = &PTR__MorningGloryLevel5Projectile_067f65e0;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar1 + 0.31;
  return;
}


/* MorningGloryLevel5Projectile::StaticNew() */

MorningGloryLevel5Projectile * MorningGloryLevel5Projectile::StaticNew(void)

{
  MorningGloryLevel5Projectile *this;
  
  this = ::operator_new(0x1b0);
  MorningGloryLevel5Projectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryLevel5Projectile::onUpdate(float) */

void MorningGloryLevel5Projectile::onUpdate(float param_1)

{
  Projectile *in_x0;
  PopAnimRig *pPVar1;
  float fVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(in_x0 + 0x1a8) < fVar2) {
    pPVar1 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
    std::string::string(asStack_40,"re2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryLevel5Projectile::OnCollideEntity(BoardEntity*) */

void __thiscall
MorningGloryLevel5Projectile::OnCollideEntity
          (MorningGloryLevel5Projectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  ResourceInfo *pRVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  Projectile::playSound((Projectile *)this,param_1);
  iVar2 = FUN_04175c54(*(undefined4 *)(this + 0xa8));
  iVar3 = BoardEntity::CalcColumnPosition(param_1);
  DamageInfo::DamageInfo(aDStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  Sexy::Insets::Insets(aIStack_90,iVar3,iVar2 + -1,1,3);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
             aIStack_90);
  uVar11 = local_80;
  lVar5 = FUN_04175ccc(local_80,local_78);
  if (lVar5 != 0) {
    do {
      FUN_04175cd8(uVar11,uVar10);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_98);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
      puVar6 = (undefined8 *)FUN_04175cd8(local_80,uVar10);
      Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
      puVar6 = (undefined8 *)FUN_04175cd8(local_80,uVar10);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_a0);
      if (cVar1 == '\0') {
LAB_04179c1c:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0)
        ;
      }
      else {
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a0);
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar7);
        if ((cVar1 == '\0') ||
           ((this_00 != (Zombie *)0x0 &&
            ((((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0' ||
               (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 != '\0')) ||
              (cVar1 = Zombie::IsControlled(this_00), cVar1 != '\0')) ||
             (cVar1 = Zombie::IsInvisible(this_00), cVar1 != '\0')))))) goto LAB_04179c1c;
        pcVar12 = *(code **)(*(long *)this + 0x178);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a0);
        (*pcVar12)(this,aDStack_68,pRVar7);
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        (**(code **)(*plVar9 + 0x110))(plVar9,aDStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0)
        ;
      }
      uVar11 = local_80;
      uVar10 = uVar10 + 1;
      uVar8 = FUN_04175ccc(local_80,local_78);
    } while (uVar10 < uVar8);
  }
  uVar4 = (**(code **)(*(long *)this + 0x168))(this,param_1);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

