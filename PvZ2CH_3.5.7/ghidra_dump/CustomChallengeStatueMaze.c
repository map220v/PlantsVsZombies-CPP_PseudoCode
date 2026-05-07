// Class: CustomChallengeStatueMaze


/* CustomChallengeStatueMaze::~CustomChallengeStatueMaze() */

void __thiscall
CustomChallengeStatueMaze::~CustomChallengeStatueMaze(CustomChallengeStatueMaze *this)

{
  std::_Destroy<StatueMazeSet*>(*(StatueMazeSet **)this,*(StatueMazeSet **)(this + 8));
  std::_Vector_base<StatueMazeSet,std::allocator<StatueMazeSet>>::~_Vector_base
            ((_Vector_base<StatueMazeSet,std::allocator<StatueMazeSet>> *)this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x035ac05c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* CustomChallengeStatueMaze::CustomChallengeStatueMaze(CustomChallengeStatueMaze const&) */

void __thiscall
CustomChallengeStatueMaze::CustomChallengeStatueMaze
          (CustomChallengeStatueMaze *this,CustomChallengeStatueMaze *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  StatueMazeSet *pSVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_0358f538(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<StatueMazeSet,std::allocator<StatueMazeSet>>::_Vector_base((ulong)this,paVar2);
  FUN_03599620(*(undefined8 *)param_1);
  uVar3 = FUN_03599670(*(undefined8 *)(param_1 + 8));
  pSVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<StatueMazeSet_const*,std::vector<StatueMazeSet,std::allocator<StatueMazeSet>>>,StatueMazeSet*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(StatueMazeSet **)(this + 8) = pSVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomChallengeStatueMaze::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeStatueMaze const&) */

CustomChallengeStatueMaze * __thiscall
CustomChallengeStatueMaze::operator=
          (CustomChallengeStatueMaze *this,CustomChallengeStatueMaze *param_1)

{
  std::vector<StatueMazeSet,std::allocator<StatueMazeSet>>::operator=
            ((vector<StatueMazeSet,std::allocator<StatueMazeSet>> *)this,(vector *)param_1);
  return this;
}


/* CustomChallengeStatueMaze::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeStatueMaze&&) */

CustomChallengeStatueMaze * __thiscall
CustomChallengeStatueMaze::operator=
          (CustomChallengeStatueMaze *this,CustomChallengeStatueMaze *param_1)

{
  std::vector<StatueMazeSet,std::allocator<StatueMazeSet>>::operator=
            ((vector<StatueMazeSet,std::allocator<StatueMazeSet>> *)this,(vector *)param_1);
  return this;
}

