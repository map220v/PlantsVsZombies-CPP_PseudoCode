// Class: CustomWaveEventFrostWind


/* CustomWaveEventFrostWind::~CustomWaveEventFrostWind() */

void __thiscall CustomWaveEventFrostWind::~CustomWaveEventFrostWind(CustomWaveEventFrostWind *this)

{
  FUN_03590334(*(undefined8 *)this);
  return;
}


/* CustomWaveEventFrostWind::TEMPNAMEPLACEHOLDERVALUE(CustomWaveEventFrostWind&&) */

CustomWaveEventFrostWind * __thiscall
CustomWaveEventFrostWind::operator=
          (CustomWaveEventFrostWind *this,CustomWaveEventFrostWind *param_1)

{
  std::vector<CustomWaveWind,std::allocator<CustomWaveWind>>::operator=
            ((vector<CustomWaveWind,std::allocator<CustomWaveWind>> *)this,(vector *)param_1);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x035ab298 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* CustomWaveEventFrostWind::CustomWaveEventFrostWind(CustomWaveEventFrostWind const&) */

void __thiscall
CustomWaveEventFrostWind::CustomWaveEventFrostWind
          (CustomWaveEventFrostWind *this,CustomWaveEventFrostWind *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  CustomWaveWind *pCVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_0359030c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<CustomWaveWind,std::allocator<CustomWaveWind>>::_Vector_base((ulong)this,paVar2)
  ;
  FUN_0359c314(*(undefined8 *)param_1);
  uVar3 = FUN_0359c364(*(undefined8 *)(param_1 + 8));
  pCVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<CustomWaveWind_const*,std::vector<CustomWaveWind,std::allocator<CustomWaveWind>>>,CustomWaveWind*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(CustomWaveWind **)(this + 8) = pCVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomWaveEventFrostWind::TEMPNAMEPLACEHOLDERVALUE(CustomWaveEventFrostWind const&) */

CustomWaveEventFrostWind * __thiscall
CustomWaveEventFrostWind::operator=
          (CustomWaveEventFrostWind *this,CustomWaveEventFrostWind *param_1)

{
  std::vector<CustomWaveWind,std::allocator<CustomWaveWind>>::operator=
            ((vector<CustomWaveWind,std::allocator<CustomWaveWind>> *)this,(vector *)param_1);
  return this;
}

