// Class: BambooPlantfoodProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BambooPlantfoodProjectile::StaticClassInit() */

void BambooPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BambooPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04914278,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BambooPlantfoodProjectile::StaticGetClass() */

long * BambooPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BambooPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BambooPlantfoodProjectile::GetClass() const */

long * BambooPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BambooPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BambooPlantfoodProjectile::onUpdate(float) */

void BambooPlantfoodProjectile::onUpdate(float param_1)

{
  char cVar1;
  Projectile *in_x0;
  PopAnimRig *this;
  
  this = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
  cVar1 = PopAnimRig::IsPlayingAnything(this);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BambooPlantfoodProjectile::onDestroy() */

void __thiscall BambooPlantfoodProjectile::onDestroy(BambooPlantfoodProjectile *this)

{
  long lVar1;
  RtObject *this_00;
  Plant *pPVar2;
  string *extraout_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1c0] != (BambooPlantfoodProjectile)0x0) &&
     (lVar1 = Projectile::GetInstigator((Projectile *)this), lVar1 != 0)) {
    this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    pPVar2 = Sexy::RtObject::Cast<Plant>(this_00);
    if (pPVar2 != (Plant *)0x0) {
      nop();
      std::string::string(asStack_10,"");
      PlantBamboo::onPlantfoodAttackFinished(extraout_x0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BambooPlantfoodProjectile::BambooPlantfoodProjectile() */

void __thiscall
BambooPlantfoodProjectile::BambooPlantfoodProjectile(BambooPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0690ee20;
  *(undefined ***)(this + 0x10) = &PTR__BambooPlantfoodProjectile_0690f010;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  this[0x1c0] = (BambooPlantfoodProjectile)0x0;
  return;
}


/* BambooPlantfoodProjectile::StaticNew() */

BambooPlantfoodProjectile * BambooPlantfoodProjectile::StaticNew(void)

{
  BambooPlantfoodProjectile *this;
  
  this = ::operator_new(0x1c8);
  BambooPlantfoodProjectile(this);
  return this;
}


/* BambooPlantfoodProjectile::~BambooPlantfoodProjectile() */

void __thiscall
BambooPlantfoodProjectile::~BambooPlantfoodProjectile(BambooPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0690ee20;
  *(undefined ***)(this + 0x10) = &PTR__BambooPlantfoodProjectile_0690f010;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BambooPlantfoodProjectile::~BambooPlantfoodProjectile() */

void __thiscall
BambooPlantfoodProjectile::~BambooPlantfoodProjectile(BambooPlantfoodProjectile *this)

{
  ~BambooPlantfoodProjectile(this + -0x10);
  return;
}


/* BambooPlantfoodProjectile::~BambooPlantfoodProjectile() */

void __thiscall
BambooPlantfoodProjectile::~BambooPlantfoodProjectile(BambooPlantfoodProjectile *this)

{
  ~BambooPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BambooPlantfoodProjectile::~BambooPlantfoodProjectile() */

void __thiscall
BambooPlantfoodProjectile::~BambooPlantfoodProjectile(BambooPlantfoodProjectile *this)

{
  ~BambooPlantfoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BambooPlantfoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
BambooPlantfoodProjectile::OnCollideEntity(BambooPlantfoodProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  Plant *pPVar4;
  Zombie *this_01;
  undefined8 uVar5;
  undefined8 uVar6;
  RealObject *this_02;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  undefined8 local_78 [2];
  undefined8 local_68;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
LAB_04914840:
    this_01 = (Zombie *)0x0;
  }
  else {
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
    if (pPVar4 != (Plant *)0x0) goto LAB_04914808;
    this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (this_01 == (Zombie *)0x0) goto LAB_04914840;
    cVar1 = (**(code **)(*(long *)this_01 + 0x328))();
    if (cVar1 != '\0') goto LAB_04914808;
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)&local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
  if (cVar1 != '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1a8);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_78[0] = std::
                  find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                            (uVar5,uVar6,aRStack_80);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)local_78,(__normal_iterator *)&local_68);
    if (bVar2) {
      this_02 = (RealObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      std::string::string((string *)&local_68,"Play_Plant_Bloomerange_Impact");
      RealObject::PlayPositionalSound(this_02,(string *)&local_68,0.0);
      std::string::~string((string *)&local_68);
      nop();
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)aRStack_80);
      (**(code **)(*(long *)this + 0x168))(this,param_1);
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      (**(code **)(*(long *)this + 0x178))(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68,param_1);
      if ((this_01 == (Zombie *)0x0) ||
         (cVar1 = (**(code **)(*(long *)this_01 + 0x3f0))(this_01), cVar1 == '\0')) {
LAB_0491499c:
        (**(code **)(*(long *)this + 0x1b0))(this,param_1);
      }
      else {
        fVar7 = (float)Zombie::GetHitpointsUntilBleedout(this_01);
        fVar8 = (float)FUN_04913778(*(undefined4 *)(this_01 + 0x2a8));
        if (local_60 < fVar8 + fVar7) goto LAB_0491499c;
        iVar3 = Sexy::Rand(600);
        EATextSquish::Vec3::Vec3((Vec3 *)local_78,1000.0,(float)iVar3,0.0);
        Zombie::FlickOff(this_01,(SexyVector3 *)local_78);
      }
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
LAB_04914808:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

