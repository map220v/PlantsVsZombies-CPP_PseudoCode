// Class: Network_ArtifactImprovedPropertySheet


/* Network_ArtifactImprovedPropertySheet::Network_ArtifactImprovedPropertySheet() */

void __thiscall
Network_ArtifactImprovedPropertySheet::Network_ArtifactImprovedPropertySheet
          (Network_ArtifactImprovedPropertySheet *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0661fa40;
  *(undefined ***)(this + 8) = &PTR__Network_ArtifactImprovedPropertySheet_0661faa8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* Network_ArtifactImprovedPropertySheet::~Network_ArtifactImprovedPropertySheet() */

void __thiscall
Network_ArtifactImprovedPropertySheet::~Network_ArtifactImprovedPropertySheet
          (Network_ArtifactImprovedPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0661fa40;
  *(undefined ***)(this + 8) = &PTR__Network_ArtifactImprovedPropertySheet_0661faa8;
  std::vector<NetworkArtifactBoostData,std::allocator<NetworkArtifactBoostData>>::~vector
            ((vector<NetworkArtifactBoostData,std::allocator<NetworkArtifactBoostData>> *)
             (this + 0x30));
  std::vector<NetworkArtifactBoostConfig,std::allocator<NetworkArtifactBoostConfig>>::~vector
            ((vector<NetworkArtifactBoostConfig,std::allocator<NetworkArtifactBoostConfig>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to
   Network_ArtifactImprovedPropertySheet::~Network_ArtifactImprovedPropertySheet() */

void __thiscall
Network_ArtifactImprovedPropertySheet::~Network_ArtifactImprovedPropertySheet
          (Network_ArtifactImprovedPropertySheet *this)

{
  ~Network_ArtifactImprovedPropertySheet(this + -8);
  return;
}


/* Network_ArtifactImprovedPropertySheet::~Network_ArtifactImprovedPropertySheet() */

void __thiscall
Network_ArtifactImprovedPropertySheet::~Network_ArtifactImprovedPropertySheet
          (Network_ArtifactImprovedPropertySheet *this)

{
  ~Network_ArtifactImprovedPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   Network_ArtifactImprovedPropertySheet::~Network_ArtifactImprovedPropertySheet() */

void __thiscall
Network_ArtifactImprovedPropertySheet::~Network_ArtifactImprovedPropertySheet
          (Network_ArtifactImprovedPropertySheet *this)

{
  ~Network_ArtifactImprovedPropertySheet(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Network_ArtifactImprovedPropertySheet::StaticClassInit() */

void Network_ArtifactImprovedPropertySheet::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkArtifactBoostData");
    (*pcVar3)(plVar2,asStack_10,FUN_034092d0,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkArtifactBoostConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_0340950c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Network_ArtifactImprovedPropertySheet");
    (*pcVar3)(plVar2,asStack_10,FUN_03409b10,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Network_ArtifactImprovedPropertySheet::StaticGetClass() */

long * Network_ArtifactImprovedPropertySheet::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"Network_ArtifactImprovedPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Network_ArtifactImprovedPropertySheet::GetClass() const */

long * Network_ArtifactImprovedPropertySheet::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"Network_ArtifactImprovedPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Network_ArtifactImprovedPropertySheet::StaticNew() */

Network_ArtifactImprovedPropertySheet * Network_ArtifactImprovedPropertySheet::StaticNew(void)

{
  Network_ArtifactImprovedPropertySheet *this;
  
  this = ::operator_new(0x48);
  Network_ArtifactImprovedPropertySheet(this);
  return this;
}


/* Network_ArtifactImprovedPropertySheet::TEMPNAMEPLACEHOLDERVALUE(Network_ArtifactImprovedPropertySheet
   const&) */

Network_ArtifactImprovedPropertySheet * __thiscall
Network_ArtifactImprovedPropertySheet::operator=
          (Network_ArtifactImprovedPropertySheet *this,
          Network_ArtifactImprovedPropertySheet *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<NetworkArtifactBoostConfig,std::allocator<NetworkArtifactBoostConfig>>::operator=
            ((vector<NetworkArtifactBoostConfig,std::allocator<NetworkArtifactBoostConfig>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<NetworkArtifactBoostData,std::allocator<NetworkArtifactBoostData>>::operator=
            ((vector<NetworkArtifactBoostData,std::allocator<NetworkArtifactBoostData>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  return this;
}

