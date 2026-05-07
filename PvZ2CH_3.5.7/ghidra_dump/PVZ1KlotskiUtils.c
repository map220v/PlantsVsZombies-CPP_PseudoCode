// Class: PVZ1KlotskiUtils


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiUtils::IsPlayingPVZ1Klotski() */

void PVZ1KlotskiUtils::IsPlayingPVZ1Klotski(void)

{
  bool bVar1;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 == 0)) {
    bVar1 = false;
  }
  else {
    local_18 = FUN_03fd4c7c(*(undefined8 *)(lVar2 + 0x88));
    local_10 = FUN_03fd4ccc(*(undefined8 *)(lVar2 + 0x90));
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
      if (bVar1) {
        this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        bVar1 = Sexy::RtObject::IsA<PVZ1KlotskiModuleMinigameProperties>(this);
        if (bVar1) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          bVar1 = true;
          break;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

