// Class: EleocurlingPlantfoodProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingPlantfoodProjectile::StaticClassInit() */

void EleocurlingPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"EleocurlingPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0423ac68,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EleocurlingPlantfoodProjectile::StaticGetClass() */

long * EleocurlingPlantfoodProjectile::StaticGetClass(void)

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
  uVar2 = CurlingProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"EleocurlingPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EleocurlingPlantfoodProjectile::GetClass() const */

long * EleocurlingPlantfoodProjectile::GetClass(void)

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
  uVar2 = CurlingProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"EleocurlingPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EleocurlingPlantfoodProjectile::EleocurlingPlantfoodProjectile() */

void __thiscall
EleocurlingPlantfoodProjectile::EleocurlingPlantfoodProjectile(EleocurlingPlantfoodProjectile *this)

{
  CurlingProjectile::CurlingProjectile((CurlingProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06813650;
  *(undefined ***)(this + 0x10) = &PTR__EleocurlingPlantfoodProjectile_06813840;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  *(undefined4 *)(this + 0x1d8) = 1;
  return;
}


/* EleocurlingPlantfoodProjectile::StaticNew() */

EleocurlingPlantfoodProjectile * EleocurlingPlantfoodProjectile::StaticNew(void)

{
  EleocurlingPlantfoodProjectile *this;
  
  this = ::operator_new(0x1e0);
  EleocurlingPlantfoodProjectile(this);
  return this;
}


/* EleocurlingPlantfoodProjectile::~EleocurlingPlantfoodProjectile() */

void __thiscall
EleocurlingPlantfoodProjectile::~EleocurlingPlantfoodProjectile
          (EleocurlingPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06813650;
  *(undefined ***)(this + 0x10) = &PTR__EleocurlingPlantfoodProjectile_06813840;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  CurlingProjectile::~CurlingProjectile((CurlingProjectile *)this);
  return;
}


/* non-virtual thunk to EleocurlingPlantfoodProjectile::~EleocurlingPlantfoodProjectile() */

void __thiscall
EleocurlingPlantfoodProjectile::~EleocurlingPlantfoodProjectile
          (EleocurlingPlantfoodProjectile *this)

{
  ~EleocurlingPlantfoodProjectile(this + -0x10);
  return;
}


/* EleocurlingPlantfoodProjectile::~EleocurlingPlantfoodProjectile() */

void __thiscall
EleocurlingPlantfoodProjectile::~EleocurlingPlantfoodProjectile
          (EleocurlingPlantfoodProjectile *this)

{
  ~EleocurlingPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EleocurlingPlantfoodProjectile::~EleocurlingPlantfoodProjectile() */

void __thiscall
EleocurlingPlantfoodProjectile::~EleocurlingPlantfoodProjectile
          (EleocurlingPlantfoodProjectile *this)

{
  ~EleocurlingPlantfoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingPlantfoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
EleocurlingPlantfoodProjectile::OnCollideEntity
          (EleocurlingPlantfoodProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Zombie *pZVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  iVar5 = *(int *)(this + 0x1d8);
  local_8 = ___stack_chk_guard;
  if (iVar5 == 1) {
    iVar4 = 2;
  }
  else if (iVar5 == 2) {
    iVar4 = 3;
  }
  else if (iVar5 == 3) {
    iVar4 = 5;
  }
  else if (iVar5 == 4) {
    iVar4 = 7;
  }
  else {
    iVar4 = 2;
    if (iVar5 == 5) {
      iVar4 = 100;
    }
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c0);
  uVar3 = 0;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_20 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar6,uVar7,aRStack_28);
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
  if (!bVar1) {
    if ((param_1 != (BoardEntity *)0x0) &&
       (pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar8 != (Zombie *)0x0)) {
      pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      iVar5 = Zombie::GetSizeType(pZVar8);
      if (((iVar5 == 0) || (iVar5 = Zombie::GetSizeType(pZVar8), iVar5 == 1)) &&
         ((cVar2 = (**(code **)(*(long *)pZVar8 + 0x3f0))(pZVar8), cVar2 != '\0' &&
          (iVar5 = FUN_04234a88(*(undefined4 *)(pZVar8 + 0x50)), iVar5 <= iVar4)))) {
        iVar5 = Sexy::Rand(600);
        EATextSquish::Vec3::Vec3((Vec3 *)local_18,1000.0,(float)iVar5,0.0);
        Zombie::FlickOff(pZVar8,(SexyVector3 *)local_18);
      }
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)aRStack_28);
    uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

