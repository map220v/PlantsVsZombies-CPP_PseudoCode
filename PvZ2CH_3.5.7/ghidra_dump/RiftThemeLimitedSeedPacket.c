// Class: RiftThemeLimitedSeedPacket


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLimitedSeedPacket::StaticClassInit() */

void RiftThemeLimitedSeedPacket::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeLimitedSeedPacket");
    (*pcVar2)(plVar1,asStack_10,FUN_036fa430,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeLimitedSeedPacket::StaticGetClass() */

long * RiftThemeLimitedSeedPacket::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeLimitedSeedPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeLimitedSeedPacket::GetClass() const */

long * RiftThemeLimitedSeedPacket::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeLimitedSeedPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeLimitedSeedPacket::RiftThemeLimitedSeedPacket() */

void __thiscall
RiftThemeLimitedSeedPacket::RiftThemeLimitedSeedPacket(RiftThemeLimitedSeedPacket *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_066871c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* RiftThemeLimitedSeedPacket::StaticNew() */

RiftThemeLimitedSeedPacket * RiftThemeLimitedSeedPacket::StaticNew(void)

{
  RiftThemeLimitedSeedPacket *this;
  
  this = ::operator_new(0x38);
  RiftThemeLimitedSeedPacket(this);
  return this;
}


/* RiftThemeLimitedSeedPacket::~RiftThemeLimitedSeedPacket() */

void __thiscall
RiftThemeLimitedSeedPacket::~RiftThemeLimitedSeedPacket(RiftThemeLimitedSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_066871c0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeLimitedSeedPacket::~RiftThemeLimitedSeedPacket() */

void __thiscall
RiftThemeLimitedSeedPacket::~RiftThemeLimitedSeedPacket(RiftThemeLimitedSeedPacket *this)

{
  ~RiftThemeLimitedSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeLimitedSeedPacket::GetNameBlackList(std::vector<std::string, std::allocator<std::string
   > >&) */

void __thiscall
RiftThemeLimitedSeedPacket::GetNameBlackList(RiftThemeLimitedSeedPacket *this,vector *param_1)

{
  if (this[0x18] == (RiftThemeLimitedSeedPacket)0x0) {
    return;
  }
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)param_1,(vector *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLimitedSeedPacket::DisableSeedPackets() */

void __thiscall RiftThemeLimitedSeedPacket::DisableSeedPackets(RiftThemeLimitedSeedPacket *this)

{
  bool bVar1;
  long extraout_x0;
  ResourceInfo *pRVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface
            ((LevelEditorCardPlantInterface *)&local_30);
  while( true ) {
    bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                      ((ObjectTypeDirectoryIterator *)&local_30);
    uVar5 = (uint)bVar1;
    if (!bVar1) break;
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)&local_30);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_28);
    if ((pRVar2 == (ResourceInfo *)0x0) || (pRVar2[0x30] == (ResourceInfo)0x0)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    }
    else {
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)aRStack_20,
                 (string *)(pRVar2 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    }
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)&local_30);
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)aRStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)aRStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            (uVar3,uVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
LAB_03710f90:
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)aRStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar5 = uVar5 + 1;
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    FUN_05475d88(asStack_38,uVar3);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x20),asStack_38);
    if (*(uint *)(extraout_x0 + 0x20) == uVar5) {
      std::string::~string(asStack_38);
      goto LAB_03710f90;
    }
    std::string::~string(asStack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* RiftThemeLimitedSeedPacket::Activate() */

void __thiscall RiftThemeLimitedSeedPacket::Activate(RiftThemeLimitedSeedPacket *this)

{
  RiftTheme::Activate((RiftTheme *)this);
  DisableSeedPackets(this);
  return;
}

