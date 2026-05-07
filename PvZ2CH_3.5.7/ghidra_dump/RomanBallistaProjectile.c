// Class: RomanBallistaProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RomanBallistaProjectile::StaticClassInit() */

void RomanBallistaProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"RomanBallistaProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0465bfec,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RomanBallistaProjectile::StaticGetClass() */

long * RomanBallistaProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RomanBallistaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RomanBallistaProjectile::GetClass() const */

long * RomanBallistaProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"RomanBallistaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RomanBallistaProjectile::~RomanBallistaProjectile() */

void __thiscall RomanBallistaProjectile::~RomanBallistaProjectile(RomanBallistaProjectile *this)

{
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined ***)this = &PTR_GetClass_0688cef0;
  *(undefined ***)(this + 0x10) = &PTR__RomanBallistaProjectile_0688d0e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to RomanBallistaProjectile::~RomanBallistaProjectile() */

void __thiscall RomanBallistaProjectile::~RomanBallistaProjectile(RomanBallistaProjectile *this)

{
  ~RomanBallistaProjectile(this + -0x10);
  return;
}


/* RomanBallistaProjectile::~RomanBallistaProjectile() */

void __thiscall RomanBallistaProjectile::~RomanBallistaProjectile(RomanBallistaProjectile *this)

{
  ~RomanBallistaProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RomanBallistaProjectile::~RomanBallistaProjectile() */

void __thiscall RomanBallistaProjectile::~RomanBallistaProjectile(RomanBallistaProjectile *this)

{
  ~RomanBallistaProjectile(this + -0x10);
  return;
}


/* RomanBallistaProjectile::RomanBallistaProjectile() */

void __thiscall RomanBallistaProjectile::RomanBallistaProjectile(RomanBallistaProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0688cef0;
  *(undefined ***)(this + 0x10) = &PTR__RomanBallistaProjectile_0688d0e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  *(undefined8 *)(this + 0x1b0) = 0;
  return;
}


/* RomanBallistaProjectile::StaticNew() */

RomanBallistaProjectile * RomanBallistaProjectile::StaticNew(void)

{
  RomanBallistaProjectile *this;
  
  this = ::operator_new(0x1b8);
  RomanBallistaProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RomanBallistaProjectile::handleImpact(BoardEntity*) */

void __thiscall
RomanBallistaProjectile::handleImpact(RomanBallistaProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  RtObject *this_00;
  ZombieRomanBallistaProps *pZVar4;
  long lVar5;
  string *psVar6;
  SexyVector3 *pSVar7;
  undefined8 *puVar8;
  long *plVar9;
  code *pcVar10;
  string asStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1a8));
  if (cVar1 != '\0') {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
    pZVar4 = Sexy::RtObject::Cast<ZombieRomanBallistaProps_const>(this_00);
    if (*(MTRand **)(this + 0x1b0) == (MTRand *)0x0) {
      lVar5 = ProbabilityTypeContainer::PickItem((ProbabilityTypeContainer *)(pZVar4 + 0x240));
    }
    else {
      lVar5 = ProbabilityTypeContainer::PickItem
                        ((ProbabilityTypeContainer *)(pZVar4 + 0x240),*(MTRand **)(this + 0x1b0));
    }
    FUN_05475d88(asStack_48,lVar5 + 0x10);
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
    if (bVar2) {
      cVar1 = NewPVPUtils::IsPlayingNewPVP();
      if (cVar1 == '\0') {
        plVar9 = *(long **)(gLawnApp + 0x9f0);
        pcVar10 = *(code **)(*plVar9 + 0x318);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_40);
        pSVar7 = (SexyVector3 *)(*pcVar10)(plVar9,(SpawnZombieParams *)&local_30,0xfffffffb,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      }
      else {
        Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
        uVar3 = FUN_0465a84c(*(undefined4 *)(this + 0x70));
        local_30 = CONCAT44(local_30._4_4_,uVar3);
        plVar9 = *(long **)(gLawnApp + 0x9f0);
        pcVar10 = *(code **)(*plVar9 + 0x318);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        pSVar7 = (SexyVector3 *)
                 (*pcVar10)(plVar9,aRStack_38,0xfffffffb,(SpawnZombieParams *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
      }
      puVar8 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      local_30 = *puVar8;
      local_28 = 0;
      BoardEntity::PlaceOnBoard(pSVar7);
      (**(code **)(*(long *)pSVar7 + 0x260))(pSVar7);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    std::string::~string(asStack_48);
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

