// Class: Sexy::ResStreamsUnpacker


/* Sexy::ResStreamsUnpacker::Close() */

void __thiscall Sexy::ResStreamsUnpacker::Close(ResStreamsUnpacker *this)

{
  if (*(ColourFit **)(this + 0x18) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x40))();
    if (*(long **)(this + 8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 8) + 8))();
    }
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


/* Sexy::ResStreamsUnpacker::GetCommonData(unsigned int&) */

undefined8 __thiscall
Sexy::ResStreamsUnpacker::GetCommonData(ResStreamsUnpacker *this,uint *param_1)

{
  *param_1 = *(uint *)(this + 0x20);
  return *(undefined8 *)(this + 0x18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsUnpacker::AllocResGroupData(std::string const&, unsigned int&) */

void __thiscall
Sexy::ResStreamsUnpacker::AllocResGroupData(ResStreamsUnpacker *this,string *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  string *psVar4;
  ColourFit *this_00;
  long lVar5;
  long *plVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) goto code_r0x051a9c14;
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(param_1,psVar4);
    if (cVar1 != '\0') break;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  (**(code **)(**(long **)(this + 8) + 0x48))(*(long **)(this + 8),*(undefined4 *)(psVar4 + 8));
  lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  this_00 = operator_new__((ulong)*(uint *)(lVar5 + 0xc));
  plVar6 = *(long **)(this + 8);
  lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  cVar1 = (**(code **)(*plVar6 + 0x50))(plVar6,this_00,*(undefined4 *)(lVar5 + 0xc));
  if (cVar1 == '\0') goto LAB_051a9c9c;
  do {
    iVar3 = (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
  } while (iVar3 == 1);
  iVar3 = (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
  if (iVar3 == 2) {
LAB_051a9c9c:
    EATextSquish::ColourFit::~ColourFit(this_00);
    this_00 = (ColourFit *)0x0;
  }
  else {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *param_2 = *(uint *)(lVar5 + 0xc);
  }
LAB_051a9c18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
code_r0x051a9c14:
  this_00 = (ColourFit *)0x0;
  goto LAB_051a9c18;
}


/* Sexy::ResStreamsUnpacker::ResStreamsUnpacker(Sexy::SexyAppBase*) */

void __thiscall
Sexy::ResStreamsUnpacker::ResStreamsUnpacker(ResStreamsUnpacker *this,SexyAppBase *param_1)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(SexyAppBase **)this = param_1;
  return;
}


/* Sexy::ResStreamsUnpacker::~ResStreamsUnpacker() */

void __thiscall Sexy::ResStreamsUnpacker::~ResStreamsUnpacker(ResStreamsUnpacker *this)

{
  Close(this);
  std::
  vector<Sexy::ResStreamsUnpacker::GroupInfo,std::allocator<Sexy::ResStreamsUnpacker::GroupInfo>>::
  ~vector((vector<Sexy::ResStreamsUnpacker::GroupInfo,std::allocator<Sexy::ResStreamsUnpacker::GroupInfo>>
           *)(this + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsUnpacker::Init(std::string const&) */

void Sexy::ResStreamsUnpacker::Init(string *param_1)

{
  char *__s;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  IFile *pIVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  bool local_21;
  string asStack_20 [8];
  GroupInfo aGStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar5 = (IFile *)(**(code **)(**(long **)(*(long *)param_1 + 0x28) + 0xa8))
                              (*(long **)(*(long *)param_1 + 0x28));
  *(IFile **)(param_1 + 8) = pIVar5;
  if (pIVar5 != (IFile *)0x0) {
    local_21 = true;
    lVar6 = AllocRSBCommonBuffer(pIVar5,(uint *)(param_1 + 0x20),&local_21,true);
    *(long *)(param_1 + 0x10) = lVar6;
    *(long *)(param_1 + 0x18) = lVar6;
    param_1[0x24] = (string)(local_21 ^ 1U);
    if (lVar6 != 0) {
      iVar1 = ByteSwapInt(*(int *)(lVar6 + 0x28),(bool)(local_21 ^ 1U));
      iVar2 = ByteSwapInt(*(int *)(*(long *)(param_1 + 0x10) + 0x30),(bool)param_1[0x24]);
      uVar7 = ByteSwapInt(*(int *)(*(long *)(param_1 + 0x10) + 0x2c),(bool)param_1[0x24]);
      if (iVar1 != 0) {
        uVar9 = 0;
        iVar10 = 0;
        do {
          iVar10 = iVar10 + 1;
          __s = (char *)(*(long *)(param_1 + 0x18) + (uVar7 & 0xffffffff) + uVar9);
          uVar9 = (ulong)(uint)((int)uVar9 + iVar2);
          uVar3 = ByteSwapInt(*(int *)(__s + 0x80),(bool)param_1[0x24]);
          uVar4 = ByteSwapInt(*(int *)(__s + 0x84),(bool)param_1[0x24]);
          std::string::string(asStack_20,__s);
          GroupInfo::GroupInfo(aGStack_18,asStack_20,uVar3,uVar4);
          std::string::~string(asStack_20);
          nop();
          std::
          vector<Sexy::ResStreamsUnpacker::GroupInfo,std::allocator<Sexy::ResStreamsUnpacker::GroupInfo>>
          ::push_back((vector<Sexy::ResStreamsUnpacker::GroupInfo,std::allocator<Sexy::ResStreamsUnpacker::GroupInfo>>
                       *)(param_1 + 0x28),aGStack_18);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aGStack_18);
        } while (iVar10 != iVar1);
      }
      uVar8 = 1;
      goto LAB_051abaf8;
    }
  }
  uVar8 = 0;
LAB_051abaf8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsUnpacker::GetResourceGroupNameOrder() */

void Sexy::ResStreamsUnpacker::GetResourceGroupNameOrder(void)

{
  bool bVar1;
  long in_x0;
  string *psVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x28));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x28));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)in_x8,psVar2);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

