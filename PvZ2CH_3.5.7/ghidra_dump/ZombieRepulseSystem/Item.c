// Class: ZombieRepulseSystem::Item


/* ZombieRepulseSystem::Item::Item(ZombieRepulseSystem::Item const&) */

void __thiscall ZombieRepulseSystem::Item::Item(Item *this,Item *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  return;
}


/* ZombieRepulseSystem::Item::Item(Sexy::RtWeakPtr<Zombie> const&, float, float) */

void __thiscall
ZombieRepulseSystem::Item::Item(Item *this,RtWeakPtr *param_1,float param_2,float param_3)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)param_1);
  *(float *)this = param_2;
  *(float *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRepulseSystem::Item::Update(float) */

void __thiscall ZombieRepulseSystem::Item::Update(Item *this,float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar1;
  float *pfVar2;
  long *plVar3;
  float local_1c;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 8) < *(float *)(this + 4)) {
    *(float *)(this + 8) = param_1 + *(float *)(this + 8);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_18 = (float)*puVar1;
    local_10 = *(undefined4 *)(puVar1 + 1);
    local_18 = local_18 + *(float *)this * param_1;
    local_1c = 800.0;
    uStack_14 = (undefined4)((ulong)*puVar1 >> 0x20);
    pfVar2 = eastl::min_alt<float>(&local_18,&local_1c);
    _local_18 = CONCAT44(uStack_14,*pfVar2);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
    (**(code **)(*plVar3 + 0x78))(plVar3,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRepulseSystem::Item::IsEnd() */

ulong __thiscall ZombieRepulseSystem::Item::IsEnd(Item *this)

{
  byte bVar1;
  Zombie *this_00;
  ulong uVar2;
  
  bVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x10));
  if (bVar1 == 0) {
    return 1;
  }
  if (*(float *)(this + 4) <= *(float *)(this + 8)) {
    return (ulong)bVar1;
  }
  this_00 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10))
  ;
  uVar2 = Zombie::IsControlled(this_00);
  return uVar2;
}


/* ZombieRepulseSystem::Item::Item() */

void __thiscall ZombieRepulseSystem::Item::Item(Item *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


/* ZombieRepulseSystem::Item::TEMPNAMEPLACEHOLDERVALUE(ZombieRepulseSystem::Item&&) */

Item * __thiscall ZombieRepulseSystem::Item::operator=(Item *this,Item *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)(param_1 + 0x10));
  return this;
}

