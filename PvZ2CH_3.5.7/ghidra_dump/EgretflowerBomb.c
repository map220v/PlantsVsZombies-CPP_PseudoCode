// Class: EgretflowerBomb


/* EgretflowerBomb::CalcRenderOrder() const */

void __thiscall EgretflowerBomb::CalcRenderOrder(EgretflowerBomb *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61cd8,0,uVar1);
  return;
}


/* non-virtual thunk to EgretflowerBomb::CalcRenderOrder() const */

void __thiscall EgretflowerBomb::CalcRenderOrder(EgretflowerBomb *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerBomb::StaticClassInit() */

void EgretflowerBomb::StaticClassInit(void)

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
    std::string::string(asStack_10,"EgretflowerBomb");
    (*pcVar2)(plVar1,asStack_10,FUN_04265e68,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EgretflowerBomb::StaticGetClass() */

long * EgretflowerBomb::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"EgretflowerBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerBomb::GetClass() const */

long * EgretflowerBomb::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"EgretflowerBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerBomb::onAnimationDone(std::string const&) */

void __thiscall EgretflowerBomb::onAnimationDone(EgretflowerBomb *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"idle1");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* EgretflowerBomb::~EgretflowerBomb() */

void __thiscall EgretflowerBomb::~EgretflowerBomb(EgretflowerBomb *this)

{
  *(undefined ***)this = &PTR_GetClass_0681dc80;
  *(undefined ***)(this + 0x10) = &PTR__EgretflowerBomb_0681df38;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to EgretflowerBomb::~EgretflowerBomb() */

void __thiscall EgretflowerBomb::~EgretflowerBomb(EgretflowerBomb *this)

{
  ~EgretflowerBomb(this + -0x10);
  return;
}


/* EgretflowerBomb::~EgretflowerBomb() */

void __thiscall EgretflowerBomb::~EgretflowerBomb(EgretflowerBomb *this)

{
  ~EgretflowerBomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EgretflowerBomb::~EgretflowerBomb() */

void __thiscall EgretflowerBomb::~EgretflowerBomb(EgretflowerBomb *this)

{
  ~EgretflowerBomb(this + -0x10);
  return;
}


/* EgretflowerBomb::EgretflowerBomb() */

void __thiscall EgretflowerBomb::EgretflowerBomb(EgretflowerBomb *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0681dc80;
  *(undefined ***)(this + 0x10) = &PTR__EgretflowerBomb_0681df38;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* EgretflowerBomb::StaticNew() */

EgretflowerBomb * EgretflowerBomb::StaticNew(void)

{
  EgretflowerBomb *this;
  
  this = ::operator_new(0x1b0);
  EgretflowerBomb(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerBomb::StartEffect() */

void __thiscall EgretflowerBomb::StartEffect(EgretflowerBomb *this)

{
  bool bVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  RtMixedPtr aRStack_98 [8];
  RtId aRStack_90 [16];
  string asStack_80 [24];
  string asStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar3 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
  std::string::string(asStack_68,"idle1");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
  std::string::string(asStack_80,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_90,
             asStack_80);
  PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_80);
  nop();
  Sexy::RtId::~RtId(aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
  GridItem::GetGridLocation();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_80);
  Sexy::Insets::Insets((Insets *)aRStack_90,local_b0 + -1,local_ac,2,1);
  EntityFinder::GetEntitiesInGridSquares(asStack_80,2,aRStack_90);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_80);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
    if ((((this_00 != (Zombie *)0x0) && (cVar2 = Zombie::IsBoss(this_00), cVar2 == '\0')) &&
        (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')) &&
       ((cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0' &&
        (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00),
        cVar2 != '\0')))) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_98,(RtWeakPtrBase *)(this + 0x1a8));
      ZombieConditionsStruct::ZombieConditionsStruct
                ((ZombieConditionsStruct *)0x3f800000,asStack_68,2,aRStack_98);
      Zombie::ApplyCondition(this_00,(ZombieConditionsStruct *)asStack_68);
      PVPZoneData::~PVPZoneData((PVPZoneData *)asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

