// Class: UnchartedSeedBank


/* UnchartedSeedBank::~UnchartedSeedBank() */

void __thiscall UnchartedSeedBank::~UnchartedSeedBank(UnchartedSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0661fd80;
  *(undefined ***)(this + 0x10) = &PTR__UnchartedSeedBank_0661ff88;
  SeedBankNew::~SeedBankNew((SeedBankNew *)this);
  return;
}


/* non-virtual thunk to UnchartedSeedBank::~UnchartedSeedBank() */

void __thiscall UnchartedSeedBank::~UnchartedSeedBank(UnchartedSeedBank *this)

{
  ~UnchartedSeedBank(this + -0x10);
  return;
}


/* UnchartedSeedBank::~UnchartedSeedBank() */

void __thiscall UnchartedSeedBank::~UnchartedSeedBank(UnchartedSeedBank *this)

{
  ~UnchartedSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UnchartedSeedBank::~UnchartedSeedBank() */

void __thiscall UnchartedSeedBank::~UnchartedSeedBank(UnchartedSeedBank *this)

{
  ~UnchartedSeedBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedSeedBank::StaticClassInit() */

void UnchartedSeedBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedSeedBank");
    (*pcVar2)(plVar1,asStack_10,FUN_034110f4,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedSeedBank::StaticGetClass() */

long * UnchartedSeedBank::StaticGetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"UnchartedSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedSeedBank::GetClass() const */

long * UnchartedSeedBank::GetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"UnchartedSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedSeedBank::UnchartedSeedBank() */

void __thiscall UnchartedSeedBank::UnchartedSeedBank(UnchartedSeedBank *this)

{
  SeedBankNew::SeedBankNew((SeedBankNew *)this);
  *(undefined ***)this = &PTR_GetClass_0661fd80;
  *(undefined ***)(this + 0x10) = &PTR__UnchartedSeedBank_0661ff88;
  return;
}


/* UnchartedSeedBank::StaticNew() */

UnchartedSeedBank * UnchartedSeedBank::StaticNew(void)

{
  UnchartedSeedBank *this;
  
  this = ::operator_new(0x1f0);
  UnchartedSeedBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedSeedBank::fillSeedPackets() */

void __thiscall UnchartedSeedBank::fillSeedPackets(UnchartedSeedBank *this)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  NameMapperBase *this_01;
  string *psVar5;
  ulong uVar6;
  RtObject *this_02;
  SeedPacket_Uncharted *this_03;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar10 = 0;
  local_8 = ___stack_chk_guard;
  SeedBankNew::fillSeedPackets((SeedBankNew *)this);
  lVar4 = FUN_03410de4(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
  if (lVar4 != 0) {
    do {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)PVZ2UnchartedModeUtils::GetPlantNumList();
      this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      psVar5 = (string *)FUN_03410df0(*(undefined8 *)(this + 0x1a8),uVar10);
      uVar3 = NameMapperBase::GetIdForName(this_01,psVar5);
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(int)uVar10);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
      if (bVar1) {
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(int)uVar10);
        this_02 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        this_03 = Sexy::RtObject::Cast<SeedPacket_Uncharted>(this_02);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        if (this_03 != (SeedPacket_Uncharted *)0x0) {
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          local_18 = FUN_03412980(uVar7,uVar8,uVar3);
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
          iVar9 = 0;
          bVar1 = true;
          if (bVar2) {
            lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
            iVar9 = *(int *)(lVar4 + 4);
            bVar1 = iVar9 == 0;
          }
          SeedPacket_PVP::SetCurNum((SeedPacket_PVP *)this_03,iVar9);
          SeedPacket::SetDisabled((SeedPacket *)this_03,bVar1);
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      }
      uVar10 = uVar10 + 1;
      uVar6 = FUN_03410de4(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
    } while (uVar10 < uVar6);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

