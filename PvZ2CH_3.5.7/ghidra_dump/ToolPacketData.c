// Class: ToolPacketData


/* ToolPacketData::GetProps() const */

RtWeakPtr<Sexy::SoundResource> * ToolPacketData::GetProps(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 8));
  return in_x8;
}


/* ToolPacketData::StaticNew() */

undefined8 ToolPacketData::StaticNew(void)

{
  return 0;
}


/* ToolPacketData::StaticGetClass() */

long * ToolPacketData::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketData",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData::GetClass() const */

long * ToolPacketData::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketData",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData::ToolPacketData() */

void __thiscall ToolPacketData::ToolPacketData(ToolPacketData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06849880;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  return;
}


/* ToolPacketData::~ToolPacketData() */

void __thiscall ToolPacketData::~ToolPacketData(ToolPacketData *this)

{
  *(undefined ***)this = &PTR_GetClass_06849880;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  nop();
  return;
}


/* ToolPacketData::~ToolPacketData() */

void __thiscall ToolPacketData::~ToolPacketData(ToolPacketData *this)

{
  ~ToolPacketData(this);
  AK::FreeHook(this);
  return;
}


/* ToolPacketData::GetCursorAnimRigOffset() const */

undefined4 __thiscall ToolPacketData::GetCursorAnimRigOffset(ToolPacketData *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  uVar2 = Sexy::SexyVector2::operator-((SexyVector2 *)(lVar1 + 0x48));
  return uVar2;
}


/* ToolPacketData::GetCost(int) */

undefined4 ToolPacketData::GetCost(int param_1)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)((ulong)(uint)param_1 + 8));
  return *(undefined4 *)(lVar1 + 0x54);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketData::CreateCursorAnimRig() */

void __thiscall ToolPacketData::CreateCursorAnimRig(ToolPacketData *this)

{
  char cVar1;
  long lVar2;
  ResourceInfo *pRVar3;
  PopAnimRig *pPVar4;
  RtMixedPtrBase aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  GetPAMByName((string *)(lVar2 + 0x38));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
  if (cVar1 == '\0') {
    pPVar4 = (PopAnimRig *)0x0;
  }
  else {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
    pPVar4 = PopAnimRig::CreateRigOutsideTable<PopAnimRig>((PopAnim *)pRVar3);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar4,lVar2 + 0x40,0,aDStack_38);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar4);
}


/* ToolPacketData::GatherResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall ToolPacketData::GatherResourceRequirements(ToolPacketData *this,set *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  long lVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 8);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar1 = FUN_0547419c(lVar2 + 0x18);
  if (cVar1 == '\0') {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               (string *)(lVar2 + 0x18));
  }
  uVar5 = 0;
  while( true ) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar4 = FUN_0442df34(*(undefined8 *)(lVar2 + 0x78),*(undefined8 *)(lVar2 + 0x80));
    if (uVar4 <= uVar5) break;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    psVar3 = (string *)FUN_0442df40(*(undefined8 *)(lVar2 + 0x78),uVar5);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,psVar3
              );
    uVar5 = uVar5 + 1;
  }
  return;
}

