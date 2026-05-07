// Class: ShadowVanillaSpecialHurricaneProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaSpecialHurricaneProjectile::StaticClassInit() */

void ShadowVanillaSpecialHurricaneProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShadowVanillaSpecialHurricaneProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce4ce0,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowVanillaSpecialHurricaneProjectile::StaticGetClass() */

long * ShadowVanillaSpecialHurricaneProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShadowVanillaSpecialHurricaneProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowVanillaSpecialHurricaneProjectile::GetClass() const */

long * ShadowVanillaSpecialHurricaneProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ShadowVanillaSpecialHurricaneProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowVanillaSpecialHurricaneProjectile::SetShadowMistParam(float, float) */

void __thiscall
ShadowVanillaSpecialHurricaneProjectile::SetShadowMistParam
          (ShadowVanillaSpecialHurricaneProjectile *this,float param_1,float param_2)

{
  *(float *)(this + 0x1c8) = param_1;
  *(float *)(this + 0x1cc) = param_2;
  return;
}


/* ShadowVanillaSpecialHurricaneProjectile::ShadowVanillaSpecialHurricaneProjectile() */

void __thiscall
ShadowVanillaSpecialHurricaneProjectile::ShadowVanillaSpecialHurricaneProjectile
          (ShadowVanillaSpecialHurricaneProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069a0f00;
  *(undefined ***)(this + 0x10) = &PTR__ShadowVanillaSpecialHurricaneProjectile_069a10f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1a8) = 1;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b0));
  *(undefined4 *)(this + 0x1cc) = 0x40e00000;
  *(undefined4 *)(this + 0x1c8) = 0x3e4ccccd;
  return;
}


/* ShadowVanillaSpecialHurricaneProjectile::StaticNew() */

ShadowVanillaSpecialHurricaneProjectile * ShadowVanillaSpecialHurricaneProjectile::StaticNew(void)

{
  ShadowVanillaSpecialHurricaneProjectile *this;
  
  this = ::operator_new(0x1d0);
  ShadowVanillaSpecialHurricaneProjectile(this);
  return this;
}


/* ShadowVanillaSpecialHurricaneProjectile::~ShadowVanillaSpecialHurricaneProjectile() */

void __thiscall
ShadowVanillaSpecialHurricaneProjectile::~ShadowVanillaSpecialHurricaneProjectile
          (ShadowVanillaSpecialHurricaneProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069a0f00;
  *(undefined ***)(this + 0x10) = &PTR__ShadowVanillaSpecialHurricaneProjectile_069a10f0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to
   ShadowVanillaSpecialHurricaneProjectile::~ShadowVanillaSpecialHurricaneProjectile() */

void __thiscall
ShadowVanillaSpecialHurricaneProjectile::~ShadowVanillaSpecialHurricaneProjectile
          (ShadowVanillaSpecialHurricaneProjectile *this)

{
  ~ShadowVanillaSpecialHurricaneProjectile(this + -0x10);
  return;
}


/* ShadowVanillaSpecialHurricaneProjectile::~ShadowVanillaSpecialHurricaneProjectile() */

void __thiscall
ShadowVanillaSpecialHurricaneProjectile::~ShadowVanillaSpecialHurricaneProjectile
          (ShadowVanillaSpecialHurricaneProjectile *this)

{
  ~ShadowVanillaSpecialHurricaneProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   ShadowVanillaSpecialHurricaneProjectile::~ShadowVanillaSpecialHurricaneProjectile() */

void __thiscall
ShadowVanillaSpecialHurricaneProjectile::~ShadowVanillaSpecialHurricaneProjectile
          (ShadowVanillaSpecialHurricaneProjectile *this)

{
  ~ShadowVanillaSpecialHurricaneProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaSpecialHurricaneProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ShadowVanillaSpecialHurricaneProjectile::OnCollideEntity
          (ShadowVanillaSpecialHurricaneProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Zombie *pZVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar4,uVar5,aRStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  uVar2 = 0;
  if (!bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    if ((param_1 != (BoardEntity *)0x0) &&
       (pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar6 != (Zombie *)0x0)) {
      cVar3 = Zombie::HasCondition(pZVar6,0x51);
      if (cVar3 != '\0') {
        Zombie::EndCondition(pZVar6,0x51);
      }
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(this + 0x1cc),0,pZVar6,0x51,1);
      Zombie::SetConditionTracker(*(undefined4 *)(this + 0x1c8),pZVar6,0x51);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

