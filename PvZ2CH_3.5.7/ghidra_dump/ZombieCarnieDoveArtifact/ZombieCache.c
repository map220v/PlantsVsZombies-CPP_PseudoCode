// Class: ZombieCarnieDoveArtifact::ZombieCache


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDoveArtifact::ZombieCache::ZombieCache() */

void __thiscall ZombieCarnieDoveArtifact::ZombieCache::ZombieCache(ZombieCache *this)

{
  long lVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)this);
  EATextSquish::Vec3::Vec3(aVStack_18,-1.0,-1.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)this,(SexyVector3 *)aVStack_18);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

