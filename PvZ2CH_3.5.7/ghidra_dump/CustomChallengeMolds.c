// Class: CustomChallengeMolds


/* CustomChallengeMolds::~CustomChallengeMolds() */

void __thiscall CustomChallengeMolds::~CustomChallengeMolds(CustomChallengeMolds *this)

{
  std::_Destroy<std::vector<unsigned_int,std::allocator<unsigned_int>>*>
            (*(vector **)this,*(vector **)(this + 8));
  std::
  _Vector_base<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  ::~_Vector_base((_Vector_base<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
                   *)this);
  return;
}


/* CustomChallengeMolds::CustomChallengeMolds() */

void __thiscall CustomChallengeMolds::CustomChallengeMolds(CustomChallengeMolds *this)

{
  int iVar1;
  vector<unsigned_int,std::allocator<unsigned_int>> *this_00;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  std::
  vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  ::resize((vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
            *)this,(long)iVar1);
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)this;
    uVar2 = FUN_0358f268(uVar4,*(undefined8 *)(this + 8));
    if (uVar2 <= uVar3) break;
    this_00 = (vector<unsigned_int,std::allocator<unsigned_int>> *)FUN_0358f27c(uVar4,uVar3);
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    std::vector<unsigned_int,std::allocator<unsigned_int>>::resize(this_00,(long)iVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x035b23e0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* CustomChallengeMolds::CustomChallengeMolds(CustomChallengeMolds const&) */

void __thiscall
CustomChallengeMolds::CustomChallengeMolds(CustomChallengeMolds *this,CustomChallengeMolds *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  vector *pvVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_0358f268(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::
  _Vector_base<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  ::_Vector_base((ulong)this,paVar2);
  FUN_03599508(*(undefined8 *)param_1);
  uVar3 = FUN_03599558(*(undefined8 *)(param_1 + 8));
  pvVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<std::vector<unsigned_int,std::allocator<unsigned_int>>const*,std::vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>>,std::vector<unsigned_int,std::allocator<unsigned_int>>*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(vector **)(this + 8) = pvVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomChallengeMolds::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeMolds const&) */

CustomChallengeMolds * __thiscall
CustomChallengeMolds::operator=(CustomChallengeMolds *this,CustomChallengeMolds *param_1)

{
  std::
  vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  ::operator=((vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
               *)this,(vector *)param_1);
  return this;
}


/* CustomChallengeMolds::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeMolds&&) */

CustomChallengeMolds * __thiscall
CustomChallengeMolds::operator=(CustomChallengeMolds *this,CustomChallengeMolds *param_1)

{
  std::
  vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  ::operator=((vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
               *)this,(vector *)param_1);
  return this;
}

