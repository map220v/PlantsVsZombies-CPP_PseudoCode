// Class: AquaVineWateredProjectile


/* AquaVineWateredProjectile::wouldKillZombie(Zombie*) */

bool __thiscall
AquaVineWateredProjectile::wouldKillZombie(AquaVineWateredProjectile *this,Zombie *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 != (Zombie *)0x0) {
    fVar1 = (float)Zombie::GetTotalHitpoints(param_1);
    fVar2 = (float)FUN_03f4b384(*(undefined4 *)(param_1 + 0x284));
    fVar3 = (float)FUN_03f4b330(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
    return fVar1 - *(float *)(this + 0xd8) * fVar3 <= fVar2 * 0.4;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVineWateredProjectile::StaticClassInit() */

void AquaVineWateredProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"AquaVineWateredProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03f4fc40,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AquaVineWateredProjectile::StaticGetClass() */

long * AquaVineWateredProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AquaVineWateredProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVineWateredProjectile::GetClass() const */

long * AquaVineWateredProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"AquaVineWateredProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVineWateredProjectile::canflickZombieOffTheBoard(Zombie const*) */

byte __thiscall
AquaVineWateredProjectile::canflickZombieOffTheBoard
          (AquaVineWateredProjectile *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  RtObject *this_00;
  AquaVineProjectileProps *pAVar6;
  
  lVar5 = Projectile::GetProps((Projectile *)this);
  if ((lVar5 != 0) && (param_1 != (Zombie *)0x0)) {
    this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pAVar6 = Sexy::RtObject::Cast<AquaVineProjectileProps>(this_00);
    if (pAVar6 != (AquaVineProjectileProps *)0x0) {
      uVar4 = FUN_03f4b2f4(*(undefined4 *)(this + 0x24));
      cVar1 = RealObject::IsOnTeam(param_1,uVar4);
      if ((((cVar1 == '\0') &&
           (cVar1 = (**(code **)(*(long *)param_1 + 0x380))(param_1), cVar1 != '\0')) &&
          (bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)param_1), !bVar2)) &&
         (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar2)) {
        bVar3 = ClassRestrictionSet::IsExcluded
                          ((ClassRestrictionSet *)(this + 0x1c0),(GameObject *)param_1);
        return bVar3 ^ 1;
      }
    }
  }
  return 0;
}


/* AquaVineWateredProjectile::AquaVineWateredProjectile() */

void __thiscall
AquaVineWateredProjectile::AquaVineWateredProjectile(AquaVineWateredProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067996a0;
  *(undefined ***)(this + 0x10) = &PTR__AquaVineWateredProjectile_06799890;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x1c0));
  return;
}


/* AquaVineWateredProjectile::StaticNew() */

AquaVineWateredProjectile * AquaVineWateredProjectile::StaticNew(void)

{
  AquaVineWateredProjectile *this;
  
  this = ::operator_new(0x1e8);
  AquaVineWateredProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVineWateredProjectile::flickZombieOffTheBoard(Zombie*) */

void __thiscall
AquaVineWateredProjectile::flickZombieOffTheBoard(AquaVineWateredProjectile *this,Zombie *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    local_1c = 150.0;
    pfVar1 = eastl::max_alt<float>(&local_1c,pfVar1 + 2);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar2 + 850.0,fVar3,*pfVar1);
    Zombie::FlickOff((SexyVector3 *)param_1,400.0,-1120.0);
    MessageRouter::Broadcast<Zombie*,Zombie*>
              ((MessageRouter *)gMessageRouter,Message::ZombieFlicked,param_1);
    MessageRouter::Broadcast<KnockbackReason,KnockbackReason>
              ((MessageRouter *)gMessageRouter,Message::ZombieKnockedBackByPlayer,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AquaVineWateredProjectile::damageEntity(BoardEntity*) */

void __thiscall
AquaVineWateredProjectile::damageEntity(AquaVineWateredProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *extraout_x0;
  
  if ((((param_1 != (BoardEntity *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) &&
      (nop(), extraout_x0 != (Zombie *)0x0)) &&
     ((cVar2 = wouldKillZombie(this,extraout_x0), cVar2 != '\0' &&
      (cVar2 = canflickZombieOffTheBoard(this,extraout_x0), cVar2 != '\0')))) {
    flickZombieOffTheBoard(this,extraout_x0);
    return;
  }
  Projectile::damageEntity((Projectile *)this,param_1);
  return;
}


/* AquaVineWateredProjectile::InitializeValues(ClassRestrictionSet) */

void __thiscall
AquaVineWateredProjectile::InitializeValues
          (AquaVineWateredProjectile *this,ZombieRestrictionSet *param_2)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  ZombieRestrictionSet::operator=((ZombieRestrictionSet *)(this + 0x1c0),param_2);
  return;
}


/* AquaVineWateredProjectile::~AquaVineWateredProjectile() */

void __thiscall
AquaVineWateredProjectile::~AquaVineWateredProjectile(AquaVineWateredProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067996a0;
  *(undefined ***)(this + 0x10) = &PTR__AquaVineWateredProjectile_06799890;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x1c0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to AquaVineWateredProjectile::~AquaVineWateredProjectile() */

void __thiscall
AquaVineWateredProjectile::~AquaVineWateredProjectile(AquaVineWateredProjectile *this)

{
  ~AquaVineWateredProjectile(this + -0x10);
  return;
}


/* AquaVineWateredProjectile::~AquaVineWateredProjectile() */

void __thiscall
AquaVineWateredProjectile::~AquaVineWateredProjectile(AquaVineWateredProjectile *this)

{
  ~AquaVineWateredProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AquaVineWateredProjectile::~AquaVineWateredProjectile() */

void __thiscall
AquaVineWateredProjectile::~AquaVineWateredProjectile(AquaVineWateredProjectile *this)

{
  ~AquaVineWateredProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVineWateredProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
AquaVineWateredProjectile::OnCollideEntity(AquaVineWateredProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
LAB_03f51214:
    uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  else {
    cVar1 = AquaVinePFProjectile::canTargetEntity((AquaVinePFProjectile *)this,param_1);
    if (cVar1 != '\0') {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x1a8);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      ToolPacketData::GetProps();
      local_10 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar4,uVar5,aRStack_18);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (!bVar2) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_18);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)this_00,(RtWeakPtr *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        goto LAB_03f51214;
      }
    }
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

