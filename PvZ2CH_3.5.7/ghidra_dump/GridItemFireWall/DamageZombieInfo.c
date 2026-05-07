// Class: GridItemFireWall::DamageZombieInfo


/* GridItemFireWall::DamageZombieInfo::ResumeState() */

void __thiscall GridItemFireWall::DamageZombieInfo::ResumeState(DamageZombieInfo *this)

{
  char cVar1;
  Zombie *pZVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
  if (cVar1 == '\0') {
    return;
  }
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  Zombie::setZombieState(pZVar2,*(undefined4 *)(this + 8),0);
  return;
}

