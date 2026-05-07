// Class: PowerSet


/* PowerSet::~PowerSet() */

void __thiscall PowerSet::~PowerSet(PowerSet *this)

{
  std::_Destroy<PowerNode*>(*(PowerNode **)this,*(PowerNode **)(this + 8));
  std::_Vector_base<PowerNode,std::allocator<PowerNode>>::~_Vector_base
            ((_Vector_base<PowerNode,std::allocator<PowerNode>> *)this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03904cd8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PowerSet::PowerSet(PowerSet const&) */

void __thiscall PowerSet::PowerSet(PowerSet *this,PowerSet *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  PowerNode *pPVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_03902d30(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<PowerNode,std::allocator<PowerNode>>::_Vector_base((ulong)this,paVar2);
  FUN_039044f8(*(undefined8 *)param_1);
  uVar3 = FUN_03904548(*(undefined8 *)(param_1 + 8));
  pPVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<PowerNode_const*,std::vector<PowerNode,std::allocator<PowerNode>>>,PowerNode*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(PowerNode **)(this + 8) = pPVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerSet::updateNode(PowerNode&) */

void __thiscall PowerSet::updateNode(PowerSet *this,PowerNode *param_1)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet>>::GetInstancePtr();
  ObjectTypeDirectory<PowerPropertySheet>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x10),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerSet::Find(PowerType) */

void PowerSet::Find(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  PowerNode *pPVar3;
  undefined8 local_30;
  undefined8 local_28;
  int local_20 [4];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (param_1);
LAB_0484d4b8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    pPVar3 = (PowerNode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    PowerNode::PowerNode((PowerNode *)local_20,pPVar3);
    if (local_20[0] == param_3) {
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      if (cVar2 == '\0') {
        updateNode((PowerSet *)param_2,(PowerNode *)local_20);
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_10);
      PowerNode::~PowerNode((PowerNode *)local_20);
      goto LAB_0484d4b8;
    }
    PowerNode::~PowerNode((PowerNode *)local_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerSet::Find(PowerType, PowerContext) */

void PowerSet::Find(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  PowerNode *pPVar3;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (param_1);
LAB_0484d5d8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    pPVar3 = (PowerNode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    PowerNode::PowerNode((PowerNode *)&local_20,pPVar3);
    if ((local_20 == param_3) && (local_1c == param_4)) {
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      if (cVar2 == '\0') {
        updateNode((PowerSet *)param_2,(PowerNode *)&local_20);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_10);
        PowerNode::~PowerNode((PowerNode *)&local_20);
      }
      else {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_10);
        PowerNode::~PowerNode((PowerNode *)&local_20);
      }
      goto LAB_0484d5d8;
    }
    PowerNode::~PowerNode((PowerNode *)&local_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  } while( true );
}


/* PowerSet::TEMPNAMEPLACEHOLDERVALUE(PowerSet const&) */

PowerSet * __thiscall PowerSet::operator=(PowerSet *this,PowerSet *param_1)

{
  std::vector<PowerNode,std::allocator<PowerNode>>::operator=
            ((vector<PowerNode,std::allocator<PowerNode>> *)this,(vector *)param_1);
  return this;
}

