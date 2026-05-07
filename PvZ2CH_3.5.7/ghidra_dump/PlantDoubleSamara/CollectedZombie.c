// Class: PlantDoubleSamara::CollectedZombie


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDoubleSamara::CollectedZombie::TEMPNAMEPLACEHOLDERVALUE(PlantDoubleSamara::CollectedZombie
   const&) const */

void __thiscall
PlantDoubleSamara::CollectedZombie::operator==(CollectedZombie *this,CollectedZombie *param_1)

{
  undefined4 uVar1;
  RtId aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::RtMixedPtrBase::GetId();
  uVar1 = std::__exception_ptr::operator==((exception_ptr *)this,(exception_ptr *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantDoubleSamara::CollectedZombie::CollectedZombie(PlantDoubleSamara::CollectedZombie const&) */

void __thiscall
PlantDoubleSamara::CollectedZombie::CollectedZombie(CollectedZombie *this,CollectedZombie *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return;
}


/* PlantDoubleSamara::CollectedZombie::CollectedZombie() */

void __thiscall PlantDoubleSamara::CollectedZombie::CollectedZombie(CollectedZombie *this)

{
  undefined4 uVar1;
  
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  DVec3::DVec3((DVec3 *)(this + 8));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x14) = uVar1;
  return;
}


/* PlantDoubleSamara::CollectedZombie::CanBeControlled() */

undefined8 __thiscall PlantDoubleSamara::CollectedZombie::CanBeControlled(CollectedZombie *this)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  Zombie *pZVar4;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
  if (cVar1 != '\0') {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    cVar1 = RealObject::IsOnOpposingTeam(uVar2,1);
    if (cVar1 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar1 = (**(code **)(*plVar3 + 0x328))();
      if (cVar1 == '\0') {
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        cVar1 = Zombie::IsControlled(pZVar4);
        if (cVar1 == '\0') {
          pZVar4 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          uVar2 = Zombie::CanBeLaunchedByPlants(pZVar4);
          return uVar2;
        }
      }
    }
  }
  return 0;
}


/* PlantDoubleSamara::CollectedZombie::TEMPNAMEPLACEHOLDERVALUE(PlantDoubleSamara::CollectedZombie&&)
    */

CollectedZombie * __thiscall
PlantDoubleSamara::CollectedZombie::operator=(CollectedZombie *this,CollectedZombie *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 8),(SexyVector3 *)(param_1 + 8));
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return this;
}

