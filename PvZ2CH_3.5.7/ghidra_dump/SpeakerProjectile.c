// Class: SpeakerProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeakerProjectile::StaticClassInit() */

void SpeakerProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpeakerProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03e34a00,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpeakerProjectile::StaticGetClass() */

long * SpeakerProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpeakerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpeakerProjectile::GetClass() const */

long * SpeakerProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SpeakerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpeakerProjectile::SpeakerProjectile() */

void __thiscall SpeakerProjectile::SpeakerProjectile(SpeakerProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06789bb0;
  *(undefined ***)(this + 0x10) = &PTR__SpeakerProjectile_06789da0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* SpeakerProjectile::StaticNew() */

SpeakerProjectile * SpeakerProjectile::StaticNew(void)

{
  SpeakerProjectile *this;
  
  this = ::operator_new(0x1c0);
  SpeakerProjectile(this);
  return this;
}


/* SpeakerProjectile::~SpeakerProjectile() */

void __thiscall SpeakerProjectile::~SpeakerProjectile(SpeakerProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06789bb0;
  *(undefined ***)(this + 0x10) = &PTR__SpeakerProjectile_06789da0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SpeakerProjectile::~SpeakerProjectile() */

void __thiscall SpeakerProjectile::~SpeakerProjectile(SpeakerProjectile *this)

{
  ~SpeakerProjectile(this + -0x10);
  return;
}


/* SpeakerProjectile::~SpeakerProjectile() */

void __thiscall SpeakerProjectile::~SpeakerProjectile(SpeakerProjectile *this)

{
  ~SpeakerProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SpeakerProjectile::~SpeakerProjectile() */

void __thiscall SpeakerProjectile::~SpeakerProjectile(SpeakerProjectile *this)

{
  ~SpeakerProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeakerProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall SpeakerProjectile::OnCollideEntity(SpeakerProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  PlantGroup *this_01;
  Zombie *this_02;
  BoardEntity *pBVar8;
  long lVar9;
  undefined8 extraout_x0;
  float *pfVar10;
  float fVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined4 local_50 [2];
  undefined8 local_48 [2];
  undefined1 local_38;
  undefined8 local_30 [5];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar2 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)param_1), bVar2)) {
    nop();
    PlantGroup::GetPlantAtLayer((RtMixedPtrBase *)local_48);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_48);
    if (cVar3 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
      Plant::GetType();
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      bVar2 = std::operator==((string *)(lVar9 + 8),"morningglory");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      if (bVar2) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
        nop();
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_30);
        PlantMorningGlory::AbsorbSoundWave(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        (**(code **)(*(long *)this + 0x48))(this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
        uVar4 = 1;
        goto LAB_03e35700;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a8);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_48[0] = std::
                find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                          (uVar6,uVar7,(RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)local_48,(__normal_iterator *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  uVar4 = 0;
  if (bVar2) {
    std::string::string((string *)local_48,"Play_Zomb_Future_Football_Mvmt_Fling");
    BoardEntityPusher::BoardEntityPusher
              ((BoardEntityPusher *)local_30,(BoardEntity *)0x0,(string *)local_48);
    std::string::~string((string *)local_48);
    nop();
    if (param_1 != (BoardEntity *)0x0) {
      this_01 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
      this_02 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      if (this_01 != (PlantGroup *)0x0) {
        pBVar8 = (BoardEntity *)Projectile::GetInstigator((Projectile *)this);
        cVar3 = PlantGroup::CanAttackRelocateGroup(this_01,pBVar8);
        if (cVar3 != '\0') {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_50,(RtWeakPtrBase *)aRStack_58);
          uVar1 = BoardEntityPusher::PUSH_DIRECTION_LEFT;
          iVar5 = FUN_03e32568(*(undefined4 *)(this_01 + 0xa4));
          PushPlantGroupProps::PushPlantGroupProps
                    ((PushPlantGroupProps *)local_48,(RtWeakPtr<Sexy::ResourceInfo> *)local_50,uVar1
                     ,iVar5 + 1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
          local_38 = 1;
          BoardEntityPusher::PushPlantGroup
                    ((BoardEntityPusher *)local_30,(PushPlantGroupProps *)local_48);
          std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_48);
        }
      }
      if ((((this_02 != (Zombie *)0x0) && (cVar3 = Zombie::IsTargetable(this_02), cVar3 != '\0')) &&
          (cVar3 = (**(code **)(*(long *)this_02 + 0x330))(this_02), cVar3 == '\0')) &&
         (cVar3 = (**(code **)(*(long *)this_02 + 0x328))(this_02), cVar3 == '\0')) {
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)this_02);
        fVar11 = *pfVar10;
        fVar12 = pfVar10[1];
        local_50[0] = 0x43160000;
        pfVar10 = eastl::max_alt<float>((float *)local_50,pfVar10 + 2);
        EATextSquish::Vec3::Vec3((Vec3 *)local_48,fVar11 - 850.0,fVar12,*pfVar10);
        Zombie::FlickOff((SexyVector3 *)this_02,400.0,-1120.0);
      }
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_48,(RtWeakPtrBase *)local_50);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    uVar4 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    BoardEntityPusher::~BoardEntityPusher((BoardEntityPusher *)local_30);
  }
LAB_03e35700:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

